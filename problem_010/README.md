problem url:[http://codeforces.com/contest/344/problem/A]
## my approach
if the ends of the magnets are not equal it will form a group .
the problem gurantee that the input will be 01 or 10 . 
so, setting previous magnet to set 00 , will ensure that any valid input will be different from this one.
then will check current magnet is equal or unequal to previous magnet , and +1 to groups accordingly.
after one , ill assign previous magnet as current magnet.
