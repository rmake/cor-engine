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

          code.match(/public class (.*?) : (\S*)/) do |matched|
            code = code.gsub(/public (override |virtual |static |)(\w+) (\w+)\(/) do |mtc|
              m1 = $1; m2 = $2; m3 = $3;
              if (m1 != matched[1])
                "public #{m1}#{m2} #{Cor.u.camelize(m3)}("
              else
                mtc
              end
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

