#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Declare Variables
    string Enroll_No,Name,Br;
    short int Sem;
    long long int Mob_No;

    cout <<"***********************************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"***********************************************" <<endl;

    //Display Project Information
    cout <<"Software Version" <<setw(5) <<":" <<"1.1" <<endl;
    cout <<"Academic Year" <<setw(8) <<":" <<"2026-27" <<endl;
    cout <<"Institute Name" <<setw(7) <<":" <<"CHARUSAT University" <<endl;

    //Accept the Student Details
    cout <<"------------------------------------------" <<endl;
    cout <<"Student Registration" <<endl;
    cout <<"------------------------------------------" <<endl;

    //Enter Student Enrollment Number
    cout <<"Enter Enrollment Number :";
    cin >>Enroll_No;

    //Enter Student Name
    cout <<"Enter Student Name :";
    cin >>Name;

    //Enter Student Branch
    cout <<"Enter Branch :";
    cin >>Br;

    //Enter Student Semester
    cout <<"Enter Semester :";
    cin >>Sem;

    //Enter Student Mobile Number
    cout <<"Enter Mobile Number :";
    cin >>Mob_No;

    //Display Student Information
    cout <<"------------------------------------------" <<endl;
    cout <<"Student Information" <<endl;
    cout <<"------------------------------------------" <<endl;

    cout <<"Enrollment Number" <<setw(5) <<":" <<Enroll_No <<endl;
    cout <<"Student Name" <<setw(10) <<":" <<Name <<endl;
    cout <<"Branch" <<setw(16) <<":" <<Br <<endl;
    cout <<"Semester" <<setw(14) <<":" <<Sem <<endl;
    cout <<"Mobile Number" <<setw(9) <<":" <<Mob_No <<endl;

    cout <<"------------------------------------------";

    return 0;
}
