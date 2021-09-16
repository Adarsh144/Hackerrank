/*Employees have a employee number; name; salary details like basic, DA, income tax, net salary; and rank. When an employee is first recruited then all these are given values of 0. Upon confirmation, the actual values of these are entered for the employee. Their rank can be incremented by 1 and when this happens an employee gets an increment of 25%. Write a C++ class for Employee.

Input Format

Enter 1 if the employee is confirmed as well as details of employee also. Enter 2 if the rank is upgraded

Constraints

Salary cant be negative.

Output Format

Display the details and gross salary.

Sample Input 0

1
100
rahul
4567
567
300
2
Sample Output 0

rahul
100
4567
567
300
4834
rahul
100
5708.75
708.75
375
6042.5
*/

// CODE

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Employee
{
    public:
    int n = 0;
    
    private:
    int emp_no = 0;
    string name = "";
    float b_salary = 0;
    float d_allowance = 0;
    float expense = 0;
    float total = 0;
    float total_up;
    
    public:
    void input()
    {
        cin>>emp_no;
        cin>>name;
        cin>>b_salary;
        cin>>d_allowance;
        cin>>expense;
    }
    
    void display()
    {
        cout<<name<< "\n";
        cout<<emp_no<< "\n";
        cout<<b_salary<< "\n";
        cout<<d_allowance<< "\n";
        cout<<expense<< "\n";
        total = b_salary+d_allowance-expense;
        cout<<total<< "\n";
    }
    
    void display_up()
    {
        calculation();
        cout<<name<< "\n";
        cout<<emp_no<< "\n";
        cout<<b_salary<< "\n";
        cout<<d_allowance<< "\n";
        cout<<expense<< "\n";
        cout<<total_up<< "\n";
    }
    
    protected:
    void calculation()
    {
        b_salary = b_salary+(b_salary*0.25);
        d_allowance = d_allowance+(d_allowance*0.25);
        expense = expense+(expense*0.25);
        total_up = total+(total*0.25);
    }
};

int main() 
{
    Employee obj;
    
    while(obj.n!=-1)
    {
        cin>>obj.n;
        if(obj.n==1)
        {
            obj.input();
            obj.display();
        }
        else if(obj.n==2)
        {
            obj.display_up();
            break;
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}
