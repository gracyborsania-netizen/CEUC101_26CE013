#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     //Declare Variables
    string Enroll_No,Name,Br;
    char ans;
    short int Sem,X=0;
    long long int Mob_No;

    cout <<"******************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"******************************" <<endl;


              cout <<"Student Registration" <<endl;
              cout <<endl;

               //Register Student Details
               //Enter Student Enrollment Number
               cout <<"Enter Enrollment Number" <<setw(7) <<":";
               cin >>Enroll_No;
               cin.ignore();

               //Enter Student Name
               cout <<"Enter Student Name" <<setw(12) <<":";
               getline(cin, Name);

               //Enter Student Branch
               cout <<"Enter Branch" <<setw(18) <<":";
               cin >>Br;

               //Enter Student Semester
               cout <<"Enter Semester" <<setw(16) <<":";
               cin >>Sem;

               //Enter Student Mobile Number
               cout <<"Enter Mobile Number" <<setw(11) <<":";
               cin >>Mob_No;

               cout <<endl;
               X++;

               cout <<endl;

                //Display Student Information
                //Using if-else condition
                if(X==0)
                {
                    cout <<"Error" <<setw(5) <<":" <<"Register Student Information First" <<endl;
                }

                else
                {
                   //Display Student Enrollment Number
                   cout <<"Enrollment Number" <<setw(11) <<":" <<Enroll_No <<endl;

                   //Display Student Name
                   cout <<"Student Name" <<setw(16) <<":" <<Name <<endl;

                   //Display Student Branch
                   cout <<"Branch" <<setw(22) <<":" <<Br <<endl;

                   //Display Student Semester
                   cout <<"Semester" <<setw(20) <<":" <<Sem <<endl;


                   //Display Student Mobile Number
                   cout <<"Mobile Number" <<setw(15) <<":" <<Mob_No <<endl;

                   cout <<endl;
                }


               cout <<"Student Registered Successfully" <<endl;

               cout <<"----------------------------------------" <<endl;

              M: cout <<"Register Another Student? (Y/N)" <<endl;
               cin >>ans;

               cout <<"----------------------------------------" <<endl;

                    if(ans=='Y'||ans=='y')
                    {
                        do
                        {

                       //Register Student Details
                       cout <<"Student Registration" <<endl;
                       cout <<endl;

                       //Enter Student Enrollment Number
                       cout <<"Enter Enrollment Number" <<setw(7) <<":";
                       cin >>Enroll_No;
                       cin.ignore();

                       //Enter Student Name
                       cout <<"Enter Student Name" <<setw(12) <<":";
                       getline(cin, Name);

                       //Enter Student Branch
                       cout <<"Enter Branch" <<setw(18) <<":";
                       cin >>Br;

                      //Enter Student Semester
                       cout <<"Enter Semester" <<setw(16) <<":";
                       cin >>Sem;

                     //Enter Student Mobile Number
                      cout <<"Enter Mobile Number" <<setw(11) <<":";
                      cin >>Mob_No;

                      cout <<endl;

                     //Display Registered Student Record

                     //Display Student Enrollment Number
                     cout <<"Enrollment Number" <<setw(7) <<":" <<Enroll_No <<endl;

                     //Display Student Name
                     cout <<"Student Name" <<setw(12) <<":" <<Name <<endl;

                     //Display Student Branch
                     cout <<"Branch" <<setw(18) <<":" <<Br <<endl;

                     //Display Student Semester
                     cout <<"Semester" <<setw(16) <<":" <<Sem <<endl;

                     //Display Student Mobile Number
                     cout <<"Mobile Number" <<setw(11) <<":" <<Mob_No <<endl;

                     cout <<endl;
                     cout <<"Student Registered Successfully." <<endl;

                     cout <<"----------------------------------------" <<endl;
                      goto M;
                    }

                    while(ans=='Y'||ans=='y');

                }

                else
                {
                    cout <<"Returning to the Menu...." <<endl;
                }


     return 0;


}
