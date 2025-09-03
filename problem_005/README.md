## Problem
url:[http://codeforces.com/contest/263/problem/A]

## my approach
1.irst we need to find the position of 1, 
2. r=-1, and c=-1 , means , nothins but -1 is a placeholder , it means 'not found yet', 
3. we will find x position by for loop on row and column , then assign the values when x==1(we found 1) .
4.as (3,3) is the middle cell. and if we calculate difference between its present row and column we need to take (r-3) and (c-3).
5. or can say it as distance too .
6.then will print the sum of absolute value of moves.

