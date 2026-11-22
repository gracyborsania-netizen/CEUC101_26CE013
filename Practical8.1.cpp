#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    //Declare Variables
    string Enroll_No,Name,Br;
    short int Sem,M1,M2,M3,M4,M5;
    int Tot;
    float Pr;

    //Function to display Header
    void displayHeader();
    {
         cout <<"********************************************" <<endl;
         cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
         cout <<"********************************************" <<endl;
         cout <<endl;
    }

    //Function to accept Student details
    void acceptStudentDetails();
    {
       cout <<"----------- Student Registration -----------" <<endl;
       cout <<endl;

       cout <<"Enter Enrollment Number" <<setw(5) <<":" ;
       cin >>Enroll_No;
       cin.ignore();

       cout <<"Enter Student Name" <<setw(10) <<":";
       getline(cin,Name);

       cout <<"Enter Branch" <<setw(16) <<":";
       cin >>Br;

       cout <<"Enter Semester" <<setw(14) <<":";
       cin >>Sem;

       cout <<endl;
       cout <<endl;

       cout <<"Enter Subject Marks" <<endl;

       cout <<"Subject 1" <<setw(5) <<":";
       cin >>M1;

       cout <<"Subject 2" <<setw(5) <<":";
       cin >>M2;

       cout <<"Subject 3" <<setw(5) <<":";
       cin >>M3;

       cout <<"Subject 4" <<setw(5) <<":";
       cin >>M4;

       cout <<"Subject 5" <<setw(5) <<":";
       cin >>M5;
    }
    cout <<endl;

    //Calculations
    Tot = M1 + M2 + M3 + M4 + M5;
    Pr = Tot/5.0;

    //Function to calculate Academic Result
    void calculateAcademicResult();
    {
        cout <<"--------------------------------------------" <<endl;
        cout <<"Academic Report" <<endl;
        cout <<"--------------------------------------------" <<endl;
        cout <<endl;

        cout <<"Enrollment Number" <<setw(5) <<":" <<Enroll_No <<endl;
        cout <<endl;

        cout <<"Student Name" <<setw(10) <<":" <<Name <<endl;
        cout <<endl;

        cout <<"Branch" <<setw(16) <<":" <<Br <<endl;
        cout <<endl;

        cout <<"Semester" <<setw(14) <<":" <<Sem <<endl;
        cout <<endl;

        cout <<"Total Marks" <<setw(11) <<":" <<Tot <<endl;
        cout <<endl;

        cout <<"Percentage" <<setw(12) <<":" <<Pr <<endl;
        cout <<endl;

        if(Pr>=90)
        {
            cout <<"Grade" <<setw(17) <<":" <<"O" <<endl;
        }
        else if(Pr>=80)
        {
            cout <<"Grade" <<setw(17) <<":" <<"A+" <<endl;
        }
        else if(Pr>=70)
        {
            cout <<"Grade" <<setw(17) <<":" <<"A" <<endl;
        }
        else if(Pr>=60)
        {
            cout <<"Grade" <<setw(17) <<":" <<"B+" <<endl;
        }
        else if(Pr>=50)
        {
            cout <<"Grade" <<setw(17) <<":" <<"B" <<endl;
        }
        else if(Pr>=40)
        {
            cout <<"Grade" <<setw(17) <<":" <<"C" <<endl;
        }
        else
        {
            cout <<"Failed" <<endl;
        }
        cout <<endl;

        if(Pr>=40)
        {
            cout <<"Result" <<setw(16) <<":" <<"PASS" <<endl;
        }
        else
        {
            cout <<"Result" <<setw(16) <<":" <<"FAIL" <<endl;
        }
    }
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<"Program Executed Successfully Using User-defined Functions." <<endl;
    cout <<"--------------------------------------------" <<endl;

    return 0;

}

