#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Declare Variables
    string Enroll_No,Name,Br;
    short int Sem,ch,X=0,Math,Phy,CPF,Tot,Y=0;
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

    //Enter choice from user
    cout <<"Enter  Choice" <<setw(5) <<":";
    cin >>ch;

    //Switch case
    switch(ch)
    {
        case 1:

               //Register Student Information
               //Enter Student Enrollment Number
               cout <<"Enter Enrollment Number" <<setw(7) <<":";
               cin >>Enroll_No;
               cin.ignore();

               //Enter Student Name
               cout <<"Enter Student Name" <<setw(12) <<":";
               getline (cin, Name);

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

                //Display Student Information using If-else condition
                if(X==0)
                {
                    cout <<"Error" <<setw(5) <<":" <<"Register Student Information First" <<endl;
                }

                else
                {
                   //Display Student Information
                   cout <<" Enrollment Number" <<setw(11) <<":" <<Enroll_No <<endl;
                   cout <<" Student Name" <<setw(16) <<":" <<Name <<endl;
                   cout <<" Branch" <<setw(22) <<":" <<Br <<endl;
                   cout <<" Semester" <<setw(20) <<":" <<Sem <<endl;
                   cout <<" Mobile Number" <<setw(15) <<":" <<Mob_No <<endl;
                }
                goto M;
                break;


        case 3:
                 //Enter Student Marks
                 cout <<"------------------------------" <<endl;
                 cout <<"Academic Result" <<endl;
                 cout <<"------------------------------\n";

                 //Enter Student Mathematics Marks
                 cout <<"Enter Mathematics Marks" <<setw(21) <<":";
                 cin >>Math;

                 //Enter Student Physics Marks
                 cout <<"Enter Physics Marks" <<setw(25) <<":";
                 cin >>Phy;

                 //Enter Student Computer Programming Foundation Marks
                 cout <<"Enter Computer Programming Foundation" <<setw(7) <<":";
                 cin >>CPF;

                 cout <<"Marks Entered Successfully." <<endl;
                 Y++;
              goto M;
              break;



        case 4:

                 //Calculation
                 Tot = Math+Phy+CPF;
                 Avg = Tot/3.0;
                 Pr = Avg;

                    //Display Student Marks using if-else condition
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


                  //Else-if ladder
                  if (Pr<40 || Pr>100)
                     {
                        cout <<"Result" <<setw(7) <<":" <<"FAIL" <<endl;
                     }

                 else
                   {
                      cout <<"Result" <<setw(12) <<":" <<"PASS" <<endl;
                   }

                 if (Pr>=90)
                   {
                      cout <<"Grade" <<setw(13) <<":" <<"O" <<endl;
                      cout <<"Performance" <<setw(7) <<":" <<"Outstanding" <<endl;
                   }

                     else if (Pr>=80)
                       {
                          cout <<"Grade" <<setw(13) <<":" <<"A+" <<endl;
                          cout <<"Performance" <<setw(7) <<":" <<"Excellent" <<endl;
                       }

                     else if (Pr>=70)
                       {
                          cout <<"Grade" <<setw(13) <<":" <<"A" <<endl;
                          cout <<"Performance" <<setw(7) <<":" <<"Very Good" <<endl;
                       }

                     else if (Pr>=60)
                        {
                          cout <<"Grade" <<setw(13) <<":" <<"B+" <<endl;
                          cout <<"Performance" <<setw(7) <<":" <<"Good" <<endl;
                        }

                     else if (Pr>=50)
                        {
                           cout <<"Grade" <<setw(13) <<":" <<"B" <<endl;
                           cout <<"Performance" <<setw(7) <<":" <<"Satisfactory" <<endl;
                        }

                     else
                        {
                           cout <<"Grade" <<setw(13) <<":" <<"C" <<endl;
                           cout <<"Performance" <<setw(7) <<":" <<"Needs Improvement" <<endl;
                        }
                    }
            else
                {
                     cout <<"Error" <<setw(5) <<":" <<"Enter Subject Marks First" <<endl;
                }

         cout <<"------------------------------";

                    goto M;
                    break;



      case 5:
      break;

    }

      return 0;

}
