

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

source_branch = `git rev-parse --abbrev-ref HEAD`
if $?.exitstatus != 0
  print "error on \"git branch --contains=HEAD\". source_branch = #{source_branch} file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end
print "source_branch = #{source_branch}\n"

#print `git stash save`
#if $?.exitstatus != 0
#  print "error on \"git stash save\" file:#{__FILE__}, line:#{__LINE__}\n"
#  exit 1
#end

run_cmd("git checkout master")
run_cmd("git pull origin master")
run_cmd("git merge #{source_branch}")
run_cmd("git push origin master")
run_cmd("git checkout #{source_branch}")
run_cmd("git reset --hard master")
run_cmd("git push origin #{source_branch}")



