
require 'fileutils'
require 'uri'



run_dir = File.dirname(File.expand_path(__FILE__))
Dir.chdir run_dir

is_success = system "ruby run.rb"

if is_success
  str = '<span class="label label-success">succeeded!</span><br />'
else
  str = '<span class="label label-important">failed!</span><br />'
end

str = str.gsub("\"", '\"')

puts "str #{str}"

#str = URI.encode_www_form_component "#{str}"

if File.exist? "test_local_conf.rb"
  load "test_local_conf.rb"
  call = "sh -c \"curl --data-urlencode 'source=#{str}' -d format=html #{NOTIFY_URL}\""
  print "#{call}"
  `#{call}`
end



