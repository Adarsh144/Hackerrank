"""
Write a program that reads number of rows and prints following
pattern:

Input: 3
1
2 1
4 2 1
"""

# CODE

n=int(input())
for i in range(0, n):
        for j in range(0, i+1):
          if j==i:
            print("1 ",end="")
          else:
            print(2*(i-j)," ",end="")
        print("\r")
