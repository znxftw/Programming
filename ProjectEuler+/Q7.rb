# Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler007
#!/bin/ruby
require 'prime'

t = gets.strip.to_i
for a0 in (0..t-1)
    n = gets.strip.to_i
    print Prime.take(n)[-1] 
    print "\n"
end
