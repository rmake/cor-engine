
source_branch = `git rev-parse --abbrev-ref HEAD`
if $?.exitstatus != 0
  print "error on \"git branch --contains=HEAD\". source_branch = #{source_branch} file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end
print "source_branch = #{source_branch}\n"

def run_cmd(cmd)
  puts "run -> #{cmd}"
  r = system cmd
  unless r
    puts "faild on -> #{cmd}"
    exit 1
  end
  @result &= r
  r
end

run_cmd "git checkout release"
run_cmd "git reset --hard master"
run_cmd "git push origin release"
run_cmd "git checkout #{source_branch}"


