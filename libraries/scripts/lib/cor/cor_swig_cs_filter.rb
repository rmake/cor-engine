require "cor/utility"

module Cor

  class CorSwigCsFilter

    def self.convert_files(files)
      files.each do |v|
        code = File.read v

        if v.match(/.*PINVOKE\.cs$/)

          code.gsub!(/[ |\t]*\[global\:\:System\.Runtime\.InteropServices\.DllImport\("(.*?)", EntryPoint="(.*?)"\)\]/) do |matched|
            <<EOS
#if UNITY_IPHONE || UNITY_WEBGL
    [DllImport("__Internal", EntryPoint="#{$2}")]
#else
#{matched}
#endif
EOS
          end

          Cor.u.write_file_if_changed v, code

        else

          code.match(/public class (.*?) : global::System.IDisposable/) do |matched|
            code.match(/\A(.*)public #{matched[1]}\([^}]*}(.*)\Z/m) do |sub_matched|
              cvted = sub_matched[2].gsub(/public (\w+) (\w+)\(/) do |mtc|
                "public #{$1} #{Cor.u.camelize($2)}("
              end
              code.gsub! sub_matched[2], cvted
            end
            Cor.u.write_file_if_changed v, code
          end
        end

      end
    end

    def self.convert(dir_name)
      self.convert_files Dir.glob("#{dir_name}/*.cs")
    end


  end
end

