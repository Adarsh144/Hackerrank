/*
User of a computer has a profile which consists of Name, Password, and Access Rights. The access rights can have values X, R, W, and A. Initially, set the default values for a user. In addition, user can change his password and access rights.

Write program in C++ to solve this problem.

Input Format

First line contains name of the user as a string.
Second line contains the choice (i.e. 0 to enter the details, 1 to edit the details, 2 to display the details, otherwise, any integer to exit).
Third line contains the password.
And fourth line contains the access rights.
Constraints

Access rights can take the values X, R, W, and A

Output Format

Display -1, if access right has value other than X, R, W, and A; otherwise, display user name, password and access right.

Sample Input 0

Arya
0
temp0123
R
Sample Output 0

Arya
temp0123
R
*/

//CODE

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class users
{
    private:
    string sUserName;
    string sPassword;
    string sRights;
    public:
    void vTakeUserName()
    {
        cin>>sUserName;
    }
    void vTakeDetails()
    {
        cin>>sPassword;
        cin>>sRights;
    }
    void vUpdateDetails()
    {
        sUserName="";
        sPassword="";
     
        cin>>sUserName;
        cin>>sPassword;
        cin>>sRights;
    }
    void vDisplay()
    {
        if(sRights=="R" || sRights=="X" || sRights=="W" || sRights=="A")
        {
            cout<<sUserName<<endl;
            cout<<sPassword<<endl;
            cout<<sRights;
        }
        else
        {
            cout<<"-1";
        }
    }
    
};


int main()
{
    users user;
    user.vTakeUserName();
    int iChoice;
    cin>>iChoice;
    switch(iChoice)
    {
        case 0:
            user.vTakeDetails();
            user.vDisplay();
            break;
        case 1:
            user.vTakeDetails();
            
            user.vDisplay();
            break;
        case 2:
            user.vTakeDetails();
            user.vDisplay();
            break;
        default:exit(0);
        
    }
    return 0;
}
