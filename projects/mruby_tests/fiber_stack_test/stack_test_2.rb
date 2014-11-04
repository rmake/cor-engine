
def recursive n
  if n > 0
    n + recursive(n - 1)
  else
    n
  end
end

puts recursive(10000)
