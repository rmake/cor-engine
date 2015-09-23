require 'rexml/document'

module COR

  class GenProject
    def self.vc_project_filter(libname, project_path, proj_vc_path, file_list_all, filter_only = false)

      proj_file = "#{proj_vc_path}/#{libname}/#{libname}.vcxproj"
      filter_file = "#{proj_vc_path}/#{libname}/#{libname}.vcxproj.filters"

      print "vcproj #{proj_file}\n"

      if File.exist? proj_file
        print "exist\n"

        doc = nil
        e_inc = nil
        e_src = nil

        File.open proj_file, "r" do |f|
          doc = REXML::Document.new(f)
          doc.root.elements.each do |e|
            if e.name == "ItemGroup"
              e_inc = e if e.elements.first && e.elements.first.name == "ClInclude"
              e_src = e if e.elements.first && e.elements.first.name == "ClCompile"
            end

          end

        end

        unless e_inc
          e_inc = REXML::Element.new("ItemGroup")
          doc.root.add e_inc
        end

        unless e_src
          e_src = REXML::Element.new("ItemGroup")
          doc.root.add e_src
        end

        e_inc.elements.delete_all "*"
        e_src.elements.delete_all "*"

        file_list_all.each do |fn|
          if File.extname(fn) == ".h"
            e = e_inc << REXML::Element.new("ClInclude")
            nfn = fn.gsub project_path, "../.."
            e.add_attribute("Include", nfn)
          end
        end

        file_list_all.each do |fn|
          if File.extname(fn) == ".cpp"
            e = e_src << REXML::Element.new("ClCompile")
            nfn = fn.gsub project_path, "../.."
            e.add_attribute("Include", nfn)
          end
        end

        unless filter_only
          File.open proj_file, "w" do |f|
            doc.write f
          end
        end

        #

        doc = nil
        e_inc = nil
        e_src = nil
        e_filter = nil

        File.open filter_file, "r" do |f|
          doc = REXML::Document.new(f)
          doc.root.elements.each do |e|
            if e.name == "ItemGroup" && e.elements.first
              e_inc = e if e.elements.first.name == "ClInclude"
              e_src = e if e.elements.first.name == "ClCompile"
              e_filter = e if e.elements.first.name == "Filter"
            end

          end

        end

        unless e_inc
          e_inc = REXML::Element.new("ItemGroup")
          doc.root.add e_inc
        end

        unless e_src
          e_src = REXML::Element.new("ItemGroup")
          doc.root.add e_src
        end

        unless e_filter
          e_filter = REXML::Element.new("ItemGroup")
          doc.root.add e_filter
        end

        e_inc.elements.delete_all "*"
        e_src.elements.delete_all "*"
        e_filter.elements.delete_all "*"

        dirs = {}

        file_list_all.each do |fn|
          if File.extname(fn) == ".h"
            e = e_inc << REXML::Element.new("ClInclude")
            nfn = fn.gsub project_path, "../.."
            e.add_attribute("Include", nfn)
            dir = File.dirname(nfn)
            if dir.match(/\.\.\/\.\.\/\./)
              dir = "imported" + dir.gsub(/^.*?\/cpp/, "")
            else
              dir = dir.gsub("../../", "")
            end
            unless dir.empty?
              fe = e << REXML::Element.new("Filter")
              dir_splited = dir.split "/"
              dir_sum = []
              dir_splited.each do |d|
                dir_sum << d
                dir_tmp = dir_sum.join "/"
                dirs[dir_tmp] = dir_tmp
              end
              fe << REXML::Text.new(dir.gsub('/', "\\"))
            end
          end
        end

        file_list_all.each do |fn|
          if File.extname(fn) == ".cpp"
            e = e_src << REXML::Element.new("ClCompile")
            nfn = fn.gsub project_path, "../.."
            e.add_attribute("Include", nfn)
            dir = File.dirname(nfn)
            if dir.match(/\.\.\/\.\.\/\./)
              dir = "imported" + dir.gsub(/^.*?\/cpp/, "")
            else
              dir = dir.gsub("../../", "")
            end
            unless dir.empty?
              fe = e << REXML::Element.new("Filter")
              dir_splited = dir.split "/"
              dir_sum = []
              dir_splited.each do |d|
                dir_sum << d
                dir_tmp = dir_sum.join "/"
                dirs[dir_tmp] = dir_tmp
              end
              fe << REXML::Text.new(dir.gsub('/', "\\"))
            end
          end
        end

        dirs.each_key do |k|
          fe = e_filter << REXML::Element.new("Filter")
          fe.add_attribute("Include", k.gsub('/', "\\"))
        end

        File.open filter_file, "w" do |f|
          doc.write f
        end

      end



    end
  end
end
