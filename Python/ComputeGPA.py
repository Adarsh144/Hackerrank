"""
You have written a program to compute GPA, given marks of all six
exams.
A course instructor further wants to use GPA of a student to assign
grade
as follows:
GPA Grade
10 O
9+ A
8+ B
7+ C
6+ D
5.5+ Pass
0+ Fail
Extend the program you have written yesterday to assist the instructor
in assigning grades to students. The program should read marks of all 6
exams
and then print the GPA and/or the grade, as per the case.
Follow the guidelines:
- The program should be menu-driven:
Menu:
(A) Compute GPA
(B) Assign Grade
(Q) Quit
- Read choice from the user as a letter 'A', 'B', 'Q'
- If the choice is A:
- Read marks of all 6 exams are entered by a user at once, seperated
with a single space.
- The program should check if the marks entered for each exam are not
exceeding maximum marks.
- Compute and print the GPA.
- If the choice is B:
- Read GPA entered by a user and print the grade.
Eg.
Menu:
(A) Compute GPA
(B) Assign Grade
(Q) Quit

Enter your Choice: A
20 20 20 70 70 50
7.3
"""

# CODE

def compute_GPA():
    eng1,eng2,math,phy,comp,chem = list(map(int,input().split()))
    grade = (eng1+eng2+math+comp+phy+chem)/34.26
    print("{:.1f}".format(grade))
 
def compute_grades():
  gpa=float(input())
  if(gpa >= 0 and gpa < 5.5):
    print("Fail")
  elif(gpa >= 5.5 and gpa < 6):
    print("Pass")
  elif(gpa >= 6 and gpa < 7):
    print("D")
  elif(gpa >= 7 and gpa < 8):
    print("C")
  elif(gpa >= 8 and gpa < 9):
    print("B")
  elif(gpa >= 9 and gpa < 10):
    print("A")
  else:
    print("O")
    
char=''
while (char!='Q'):
  print("Menu: \n(A) Compute GPA\n(B) Assign Grade\n(Q) Quit\nEnter your Choice:")
  char = input()
  if(char == 'A'):
    compute_GPA()
  elif(char == 'B'):
    compute_grades()
  else:
    print("INVALID INPUT!")
