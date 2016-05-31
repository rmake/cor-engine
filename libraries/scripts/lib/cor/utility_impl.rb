
require 'fileutils'

module Cor

  module Utility
    def self.file_enum path, &p
      Dir.glob("#{path}/**/*").select{|v| File.file? v}.each &p
      #if Dir.exists? path
      #  Dir.foreach(path) do |fn|
      #    next if fn == "."
      #    next if fn == ".."

      #    fpath = "#{path}/#{fn}"

      #    if File.ftype(File.expand_path fpath) == "directory"
      #      self.file_enum fpath, &p
      #    else
      #      yield fpath
      #    end
      #  end
      #end
    end

    def self.file_list path, &block
      a = []
      self.file_enum path do |fpath|
        if block
          if yield (fpath)
            a << fpath
          end
        else
          a << fpath
        end
      end
      a
    end

    def self.dir_enum path, &block
      Dir.foreach(path) do |fn|
        next if fn == "."
        next if fn == ".."

        fpath = "#{path}/#{fn}"

        if File::ftype(fpath) == "directory"
          yield fpath
          self.dir_enum fpath, &block
        else

        end

      end
    end

    def self.dir_list path, &block
      a = []
      self.dir_enum path do |fpath|
        if block
          if yield (fpath)
            a << fpath
          end
        else
          a << fpath
        end
      end
      a
    end

    def self.file_write fn, data
      FileUtils.mkpath(File.dirname(fn))
      File.open fn, "wb" do |f|
        f.write data
      end
    end

    def self.file_read fn
      data = nil
      File.open fn, "rb" do |f|
        data = f.read
      end
      data
    end

    def self.write_file fn, data
      FileUtils.mkpath(File.dirname(fn))
      File.open fn, "wb" do |f|
        f.write data
      end
    end

    def self.read_file fn
      data = nil
      File.open fn, "rb" do |f|
        data = f.read
      end
      data
    end

    def self.write_file_if_changed(fn, data)
      FileUtils.mkpath(File.dirname(fn))
      if File.exists?(fn)
        File.open fn, "rb" do |f|
          if f.read == data
            return
          end
        end
      end
      File.open fn, "wb" do |f|
        f.write data
      end
    end

    def self.underscore s
      s.gsub(/::/, '/').
      gsub(/([A-Z]+)([A-Z][a-z])/,'\1_\2').
      gsub(/([a-z\d])([A-Z])/,'\1_\2').
      tr("-", "_").
      downcase
    end

    def self.camelize s
      s.split('_').map{|s| s.capitalize}.join('')
    end

    def self.c_string_encode str
      "\"#{str.gsub("\\", "\\\\").gsub("\n", "\\n").gsub("\t", "\\t").gsub("\"", "\\\"")}\""
    end

    def self.interval_slice a, size
      a = a.clone
      r = []
      while a && !a.empty?
        r << a.slice(0...size)
        a = a.slice(size..-1)
      end
      r
    end

  end

  def self.u
    Utility
  end


end

