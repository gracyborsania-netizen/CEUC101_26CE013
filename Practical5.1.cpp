#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Declare Variables
    string Enroll_No,Name,Br;
    short int Sem,ch,i,No_S,S,X=0,Y=0,Tot=0;
    long long int Mob_No;
    float Avg,Pr;

    cout <<"******************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"******************************" <<endl;

  M:cout <<"-------------------------------Menu Options------------------------------" <<endl;

    //Display Menu List
    cout <<"1. Register New Student" <<endl;
    cout <<"2. Display Student Record" <<endl;
    cout <<"3. Enter Student Marks" <<endl;
    cout <<"4. Display Academic Result" <<endl;
    cout <<"5. Exit" <<endl;

    //Enter user choice
    cout <<"Enter  Choice" <<setw(5) <<":";
    cin >>ch;

    //Switch case
    switch(ch)
    {
        case 1:

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

               cout <<"Student Registered Successfully\n";
               X++;
              goto M;
              break;


       case 2:

                //Display Student Information
                //Using if-else condition
                if(X==0)
                {
                    cout <<"Error" <<setw(5) <<":" <<"Register Student Information First" <<endl;
                }

                else
                {
                   //Display Student Enrollment Number
                   cout <<" Enrollment Number" <<setw(11) <<":" <<Enroll_No <<endl;

                   //Display Student Name
                   cout <<" Student Name" <<setw(16) <<":" <<Name <<endl;

                   //Display Student Branch
                   cout <<" Branch" <<setw(22) <<":" <<Br <<endl;

                   //Display Student Semester
                   cout <<" Semester" <<setw(20) <<":" <<Sem <<endl;


                   //Display Student Mobile Number
                   cout <<" Mobile Number" <<setw(15) <<":" <<Mob_No <<endl;
                }

                goto M;
                break;


        case 3:

                 //Register Student Marks
                 cout <<"------------------------------" <<endl;
                 cout <<"Academic Result" <<endl;
                 cout <<"------------------------------" <<endl;

                 //Using for loop
                 cout <<"Enter Number of Subject" <<setw(5) <<":";
                 cin >>No_S;
                 cout <<endl;

                 for(i=1 ; i<=No_S ; i++)
                 {
                     cout <<"Enter Marks of Subject " <<i <<setw(5) <<":";
                     cin >>S;
                     Tot = Tot+S;
                 }

                 cout <<"Marks Entered Successfully." <<endl;
                 Y++;


                 Avg = Tot/No_S;
                 Pr = Avg;

                 cout <<"------------------------------" <<endl;
                 cout <<"ACADEMIC RESULT" <<endl;
                 cout<<"------------------------------" <<endl;

                 //Display Student Total Marks
                 cout <<"Total Marks" <<setw(8) <<":" <<Tot <<endl;

                 //Display Student Average Marks
                 cout <<"Average Marks" <<setw(6) <<":" <<Avg <<endl;

                 //Display Student Percentage
                 cout <<"Percentage" <<setw(9) <<":" <<Pr <<endl;
                 Y++;
                 goto M;
                 break;



        case 4:

                 Tot = S+S+S+S;
                 Avg = Tot/5.0;
                 Pr = Avg;

                 //Display Student Marks
                    if(Y==1)
                    {
                        cout <<"------------------------------" <<endl;
                        cout <<"ACADEMIC RESULT" <<endl;
                        cout <<"------------------------------" <<endl;

                        //Display Student Total Marks
                        cout <<"Total Marks" <<setw(8) <<":" <<Tot <<endl;

                        //Display Student Average Marks
                        cout <<"Average Marks" <<setw(6) <<":" <<Avg <<endl;

                        //Display Student Percentage
                        cout <<"Percentage" <<setw(9) <<":" <<Pr <<endl;
                    }

                    else
                        cout <<"Error" <<setw(5) <<":" <<"Enter Subject Marks First" <<endl;

                    goto M;
                    break;



      case 5:
      break;

    }

      return 0;

}

