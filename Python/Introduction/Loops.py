# Loops

# Task 
# Read an integer N. For all non-negative integers i < N, print i^2. See the sample for details.

# Input Format
# The first and only line contains the integer, N.

# Constraints
# 1 <= n <= 20

# Output Format
# Print n lines, one corresponding to each i.

# Enter your code here. Read input from STDIN. Print output to STDOUT

# CODE

    n = int(raw_input())
    
    for i in range(n):
        print i * i
