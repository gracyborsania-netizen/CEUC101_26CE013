#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Declare Variables
    string Enroll_No,Name,Br;
    float Avg,Pr;
    int Maths,Phy,PF,Tot;
    short int Sem;
    long long int Mob_No;

    cout <<"***********************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <"***********************************" <<endl;

    cout <<"Software Version  : 1.2\n";

    cout <<"------------------------------" <<endl;
    cout <<"Student Registration" <<endl;
    cout <<"------------------------------" <<endl;

    //Enter  Student Enrollment Number
    cout <<"Enter Enrollment Number" <<setw(5) <<":";
    cin >>Enroll_No;

    //Enter Student Name
    cout <<"Enter Student Name" <<setw(10) <<":";
    cin >>Name;

    //Enter Student Branch
    cout <<"Enter Branch" <<setw(16) <<":";
    cin >>Br;

    //Enter Student Semester
    cout <<"Enter Semester" <<setw(14) <<":";
    cin >>Sem;

    //Student Student Mobile Number
    cout <<"Enter Mobile Number" <<setw(9) <<":";
    cin >>Mob_No;

    cout <<"------------------------------" <<endl;
    cout <<"Academic Information" <<endl;
    cout <<"------------------------------" <<endl;

    //Enter Student Mathematics Marks
    cout <<"Enter Mathematics Marks" <<setw(16) <<":";
    cin >>Maths;

    //Enter Student Physics Marks
    cout <<"Enter Physics Marks" <<setw(20) <<":";
    cin >>Phy;

    //Enter Student Computer Programming Foundation Marks
    cout <<"Enter Programming Foundation Marks" <<setw(5) <<":";
    cin >>PF;

    cout <<"------------------------------" <<endl;
    cout <<"Academic Summary" <<endl;
    cout <<"------------------------------" <<endl;

    //Calculation
    Tot = Maths+Phy+PF;
    Avg = Tot/3.0;
    Pr = Avg;

    //Display Student Total Marks
    cout <<"Total Marks" <<setw(7) <<":" <<Tot <<endl;

    //Display Student Average Marks
    cout <<"Average Marks" <<setw(5) <<":" <<Avg <<endl;

    //Display Student Percentage
    cout <<"Percentage" <<setw(8) <<":" <<Pr <<endl;

    cout <<"------------------------------" <<endl;
    cout <<"Academic Result" <<endl;
    cout <<"------------------------------" <<endl;

    //if-else condition
    if (Pr<40 || Pr>100)
    {
        cout <<"Result" <<setw(7) <<":" <<"FAIL" <<endl;
    }
    else
    {
        cout <<"Result" <<setw(7) <<":" <<"PASS" <<endl;
        cout <<"Congratulations! You have successfully PASSED" <<endl;
    }

    cout <<"------------------------------";

    return 0;
}

