/*
Students are registered in a University. When students are created then they are given default values (zeroes or blanks) for roll_number, name, department, year, and semester. At registration time, the values of these attributes of student are updated with the proper values. Students can be promoted and their departments can be changed. Write a C++ class for Student.

Input Format

Enter 1 if the student department is changed, enter 2 to promote a semester enter 3 to exit

Constraints

Roll number can't be negative.

Output Format

Display the details of the student.

Sample Input 0

1
100
Ram
CS
2020
3
CSE
Sample Output 0

100
Ram
CSE
2020
3
*/

// CODE

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class CStudent
{
private:
    int iStudRollNumber;
    string strStudName;
    string strStudDept;
    int iYear;
    int iSem;

public:
    CStudent ()  
    {
    iStudRollNumber = 0;
    strStudName = "";
    strStudDept = "";
    iYear = 0;
    iSem = 0;
    }

    void vGetStudentInfo()
    {
    cin >> iStudRollNumber;
    cin >> strStudName; 
    cin >> strStudDept;
    cin >> iYear;
    cin >> iSem;

    }

    void vDisplayStudentInfo()
    {
    cout << iStudRollNumber << endl;
    cout << strStudName << endl;
    cout << strStudDept << endl;
    cout << iYear << endl;
    cout << iSem << endl;
    }

    void vChangeDepartment ()
    {
    cin >>strStudDept;
    }

    void fPromotSemester ()
    {
    iSem = iSem + 1;
    }
};


int main()
{
    CStudent objStudent;
    int iChoice;        
    cin>>iChoice;
    objStudent.vGetStudentInfo();
    
    if (iChoice == 1)
    {
    objStudent.vChangeDepartment();
    objStudent.vDisplayStudentInfo();
    }

    if (iChoice == 2)
    {
    objStudent.fPromotSemester ();
    objStudent.vDisplayStudentInfo();
    }

    if (iChoice == 3)
    {
    exit (0);
    } 
    return 0;
}
