/*
Define two classes Distance01 and Distance02 in C++. Distance01 stores distance in miles and Distance02 in kilometers & meters. Get the values of the class objects and perform addition of one object of Distance01 with the object of Distance02 class. The display should be in the format of miles or kmeters & meters depending on the type of choice selected.

Input Format

First line contains the distance in kilometers.
Second line contains the distance in meters.
Third line contains the distance in miles
Fourth line contains the choice.
Constraints

Distance in kilometers and meters should have non-negative values.
Kilometers should be less than 1000 & meters should be less than 1000.
Miles should be non-negative and it value should be less than 100.
Output Format

If choice is 1 then display total distance in kilometer in first line and meters in second line. If choice is 2 then total distance in miles in first line.

Sample Input 0

2
400
3
1
Sample Output 0

7
227
*/

//CODE

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Distance02;

class Distance01
{
  private:
      int Miles;
   
  public:
    Distance01()       //Constructor
    {
        Miles=0;  
    }
   
    void get_data1()
    {
         cin>>Miles;
         if(Miles<0 || Miles>100)
       {
           cout<<"Invalid";
       }  
    }
    friend void addition1(Distance01, Distance02 );
    friend void addition2(Distance01, Distance02 );

};

class Distance02
{
private:
     int Kilometer;
     int  meter;
   
 public:
      Distance02()        //Constructor
      {
        Kilometer=0;
        meter=0;
      }
   
    void get_data2()    
    {
       //cout<<"Enter the Distance in Kilometer and meter:";
       cin>>Kilometer;
        if(Kilometer<0 || Kilometer>1000)  
       {
           cout<<"Invalid";
       }
         
       cin>>meter;
        if(meter<0 || meter>1000)  
       {
           cout<<"Invalid";
       }  
    }
   
    friend void addition1(Distance01, Distance02 );
    friend void addition2(Distance01, Distance02 );

   
};

void addition1(Distance01 x , Distance02 y)
   
{  float Dist_miles =0;
     
    Dist_miles = y.Kilometer*0.621 + y.meter*0.0006 + x.Miles;
    cout<<Dist_miles;
}

void addition2(Distance01 x , Distance02 y)
   
{
   int Dist_kilo =0;
   int Dist_meter =0;


   Dist_kilo = y.Kilometer + y.meter*0.001 + x.Miles*1.609;
   
   Dist_meter = (y.Kilometer*1000 + y.meter + x.Miles*1609.3) - Dist_kilo*1000;

 
   cout<<Dist_kilo<<endl;
   cout<<Dist_meter;
     
}

int main()
{
    Distance01 D1;
    Distance02 D2;    
 
     D2.get_data2();
     D1.get_data1();
     
   int Choice;
   cin >> Choice;
   
   switch (Choice)

   {
       case 1:addition2(D1,D2);
              break;
           
      case 2: addition1(D1,D2);
              break;
           
        case 3: exit(0);
             
    }

    return 0;
}
