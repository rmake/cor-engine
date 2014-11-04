

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

print `git checkout devel`
if $?.exitstatus != 0
  print "error on \"git checkout devel\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end

print `git pull origin devel`
if $?.exitstatus != 0
  print "error on \"git pull origin devel\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end

print `git merge #{source_branch}`
if $?.exitstatus != 0
  print "error on \"git merge #{source_branch}\" file:#{__FILE__}, line:#{__LINE__}\n"
  print "possible conflict coccured,\n"
  exit 1
end

print `git push origin devel`
if $?.exitstatus != 0
  print "error on \"git push origin devel\" file:#{__FILE__}, line:#{__LINE__}\n"
  print "possible conflict coccured,\n"
  exit 1
end


print `git checkout #{source_branch}`
if $?.exitstatus != 0
  print "error on \"git checkout devel\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end

print `git reset --hard devel`
if $?.exitstatus != 0
  print "error on \"git reset --hard devel\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end

print `git push origin #{source_branch}`
if $?.exitstatus != 0
  print "error on \"git push origin #{source_branch}\" file:#{__FILE__}, line:#{__LINE__}\n"
  exit 1
end


#print `git stash pop`
#if $?.exitstatus != 0
#  print "error on \"git stash pop\"\n"
#  exit 1
#end





