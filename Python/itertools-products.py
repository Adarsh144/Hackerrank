# Task
# You are given a two lists A and B. Your task is to compute their cartesian product A X B.
# Input Format

# The first line contains the space separated elements of list .
# The second line contains the space separated elements of list .

# Both lists have no duplicate integer elements.

# Constraints
# 0 < A < 30
# 0 < B < 30

# Output Format

# Output the space separated tuples of the cartesian product.

# CODE

from itertools import product

A = raw_input().split()
A = list(map(int,A))
B = raw_input().split()
B = list(map(int,B))

for i in product(A,B):
    print i,

