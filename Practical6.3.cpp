#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //Declare Variables
    int n,i,pos,del_pos;
    string Er_No[10];
    string Name[10];
    string Gr[10];
    float Pr[10];
    string search_Er;
    bool found=false;

    cout <<"********************************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"********************************************" <<endl;

    cout <<"Enter Number of Students" <<setw(5) <<":";
    cin >>n;
    cout <<endl;

    //Enter Student Details
    cout <<"Enter Student Details" <<endl;
    cout <<endl;

    //For loop for entering Student details
    for(i=0; i<n; i++)
    {
        //Enter Student Enrollment Number
        cout <<"Enrollment Number" <<setw(7) <<":";
        cin >>Er_No[i];
        cin.ignore();

        //Enter Student Name
        cout <<"Student Name" <<setw(12) <<":";
        getline(cin,Name[i]);

        //Enter Student Percentage
        cout <<"Percentage" <<setw(14) <<":";
        cin >>Pr[i];

        //Enter Student Grade
        cout <<"Grade" <<setw(19) <<":";
        cin >>Gr[i];

        cout <<endl;
    }

    cout <<"--------------------------------------------" <<endl;

    //Display Student Details
    cout <<"Enrollment Number" <<setw(15) <<"Student Name" <<setw(15) <<"Percentage" <<setw(12) <<"Grade";
    cout <<endl;

    //For loop for displaying Student information
    for(i=0; i<n; i++)
    {
        cout <<Er_No[i] <<setw(30) <<Name[i] <<setw(12) <<Pr[i] <<setw(12) <<Gr[i];
        cout <<endl;
    }

    cout <<"--------------------------------------------" <<endl;

    //CURRENT STUDENT RECORD
    cout <<"Current Student Record" <<endl;
    cout <<endl;

    //For loop for displaying current Student information
    for (i=0; i<n; i++)
    {
        cout <<Er_No[i] <<setw(25) <<Name[i] <<setw(16) <<Pr[i];
        cout <<endl;
    }

    cout <<"--------------------------------------------" <<endl;

    //INSERT NEW STUDENT DETAILS
    cout <<"Insert New Student" <<endl;
    cout <<endl;

    cout <<"Enter Position :";
    cin>>pos;
    cout <<endl;

    //For loop for entering New Student information
    for(i=n; i>=pos; i--)
    {
        Er_No[i]=Er_No[i-1];
        Name[i]=Name[i-1];
        Pr[i]=Pr[i-1];
        Gr[i]=Gr[i-1];
    }

    //Enter New Student Enrollment Number
    cout <<"Enter Enrollment Number" <<setw(7) <<":";
    cin >>Er_No[pos-1];
    cin.ignore();

    //Enter New Student Name
    cout <<"Enter Student Name" <<setw(12) <<":";
    getline(cin,Name[pos-1]);

    //Enter New Student Percentage
    cout <<"Enter Percentage" <<setw(14) <<":";
    cin >>Pr[pos-1];

    //Enter New Student Grade
    cout <<"Enter Grade" <<setw(19) <<":";
    cin >>Gr[pos-1];

    n++;
    cout <<endl;
    cout <<"Record Inserted Successfully." <<endl;

    cout <<"--------------------------------------------" <<endl;

    //UPDATED STUDENT RECORD
    cout <<"Updated Student Record" <<endl;
    cout <<endl;

    //For loop for updated student record containing new student information
    for(i=0; i<n; i++)
    {
        cout <<Er_No[i] <<setw(15) <<Name[i] <<setw(10) <<Pr[i];
        cout <<endl;
    }

    cout <<"--------------------------------------------" <<endl;

    cout <<"Updated Student Record" <<endl;
    cout <<endl;

    cout <<"Enter Enrollment Number :";
    cin >>search_Er;

    //For loop for updating Student record of given Enrollment Number
    for(i=0; i<n; i++)
    {
        if(search_Er==Er_No[i])
        {
           cout <<"Enter New Percentage : ";
           cin >>Pr[i];

           cout <<"Enter New Grade : ";
           cin >>Gr[i];
           found = true;
        }
    }

    if(!found)
    {
        cout <<"Student Record not available." <<endl;
    }
    cout <<endl;
    cout <<"Student Record Updated Successfully." <<endl;

    cout <<"--------------------------------------------" <<endl;

    //DELETE STUDENT RECORD
    cout <<"Delete Student Record" <<endl;
    cout <<endl;

    cout <<"Enter Position :";
    cin >>del_pos;
    cout <<endl;

    //For loop for deleting student information of entered position
    for(i=del_pos-1; i<n-1; i++)
    {
        Er_No[i] = Er_No[i+1];
        Name[i] = Name[i+1];
        Pr[i] = Pr[i+1];
        Gr[i] = Gr[i+1];
    }
    n--;
    cout <<"Record Deleted Successfully." <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    //FINAL STUDENT RECORD
    cout <<"Final Student Record" <<endl;
    cout <<endl;

    //For loop for Final Student Record containing updated Percentage and Grade and deleted student information
    for(i=0; i<n; i++)
    {
        cout <<Er_No[i] <<setw(15) <<Name[i] <<setw(12) <<Pr[i] <<setw(12) <<Gr[i];
        cout <<endl;
    }

    return 0;
}
