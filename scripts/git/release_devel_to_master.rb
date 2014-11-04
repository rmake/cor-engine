
source_branch = `git rev-parse --abbrev-ref HEAD`
if $?.exitstatus != 0
  print "error on \"git branch --contains=HEAD\". source_branch = #{source_branch} file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end
print "source_branch = #{source_branch}\n"

print `git checkout master`
if $?.exitstatus != 0
  print "error on \"git checkout master\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end

print `git reset --hard devel`
if $?.exitstatus != 0
  print "error on \"git reset --hard devel\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end

print `git push origin master`
if $?.exitstatus != 0
  print "error on \"git push origin master\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end

print `git checkout #{source_branch}`
if $?.exitstatus != 0
  print "error on \"git checkout #{source_branch}\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end


