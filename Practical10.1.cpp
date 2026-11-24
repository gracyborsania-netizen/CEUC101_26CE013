#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Part A : Structure for Academic Information
struct Academic
{
    int Sem;
    float Pr;
    string Grade;
};

//Structure for Contact Information
struct Contact
{
    string Mob;
    string Email;
};

//Part B : Nested Structure for Student
struct Student
{
    string Enroll_No;
    string Name;
    string Br;

    Academic academic;
    Contact contact;
};

//Part D : Function to Display Student Details
void displayStudent(Student *s)
{
    cout <<"Enrollment Number : " <<s->Enroll_No <<endl;
    cout <<endl;

    cout <<"Student Name      : " <<s->Name <<endl;
    cout <<endl;

    cout <<"Branch            : " <<s->Br <<endl;
    cout <<endl;

    cout <<"Semester          : " <<s->academic.Sem <<endl;
    cout <<endl;

    cout <<"Percentage        : " <<fixed <<setprecision(2) <<s->academic.Pr <<endl;
    cout <<endl;

    cout <<"Grade             : " <<s->academic.Grade <<endl;
    cout <<endl;

    cout <<"Mobile Number     : " <<s->contact.Mob <<endl;
    cout <<endl;

    cout <<"Email ID          : " <<s->contact.Email <<endl;
    cout <<endl;
}

// Function to Update Contact Information
void updateContact(Student *s)
{
    cout <<"Enter New Mobile Number : ";
    cin >>s->contact.Mob;
    cout <<endl;

    cout <<"Enter New Email ID : ";
    cin >>s->contact.Email;

    cout <<endl;
    cout <<"Contact Information Updated Successfully!" <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
}

//Function to Display Academic Information
void displayAcademic(Student *s)
{
    cout <<"Semester   : " <<s->academic.Sem <<endl;
    cout <<endl;

    cout <<"Percentage : " <<fixed <<setprecision(2) <<s->academic.Pr <<endl;
    cout <<endl;

    cout <<"Grade      : " <<s->academic.Grade <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
}

//Main Function
int main()
{
    Student students[100];
    int n;

    cout <<"********************************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    cout <<"Enter Number of Students : ";
    cin >>n;
    cout <<endl;

    //Part C: Array of Structures
    for (int i = 0; i < n; i++)
    {
        cout <<"--------------------------------------------" <<endl;
        cout <<"Student " <<i + 1 <<endl;
        cout <<endl;

        cout <<"Enrollment Number : ";
        cin >>students[i].Enroll_No;
        cout <<endl;

        cout <<"Student Name      : ";
        cin.ignore();
        getline(cin, students[i].Name);
        cout <<endl;

        cout <<"Branch            : ";
        cin >>students[i].Br;
        cout <<endl;

        cout <<"Semester          : ";
        cin >>students[i].academic.Sem;
        cout <<endl;

        cout <<"Percentage        : ";
        cin >>students[i].academic.Pr;
        cout <<endl;

        cout <<"Grade             : ";
        cin >>students[i].academic.Grade;
        cout <<endl;

        cout <<"Mobile Number     : ";
        cin >>students[i].contact.Mob;
        cout <<endl;

        cout <<"Email ID          : ";
        cin >>students[i].contact.Email;
        cout <<endl;
    }

    //Display all Student Records
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
    cout <<"STUDENT RECORDS" <<endl;
    cout <<endl;

    for (int i = 0; i < n; i++)
    {
        cout <<"--------------------------------------------" <<endl;
        cout <<endl;

        displayStudent(&students[i]);
    }

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //Part D : Pointer to Structure Functions
    int choice;

    cout <<"Do you want to update contact information?" <<endl;
    cout <<"1. Yes" <<endl;
    cout <<"2. No" <<endl;
    cout <<endl;

    cout <<"Enter Choice : ";
    cin >>choice;
    cout <<endl;

    if (choice == 1)
    {
        int index;

        cout <<"Enter Student Number to Update :";
        cin >>index;
        cout <<endl;

        if (index >= 1 && index <= n)
        {
            updateContact(&students[index - 1]);

            cout <<"Updated Student Details" <<endl;
            cout <<endl;
            displayStudent(&students[index - 1]);
        }
        else
        {
            cout <<"Invalid Student Number!" <<endl;
        }
    }

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
    cout <<"Academic Information of Students" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    for (int i = 0; i < n; i++)
    {
        cout <<"Student   : " <<students[i].Name <<endl;
        cout <<endl;
        displayAcademic(&students[i]);
    }

    cout <<endl;
    cout <<"Program Executed Successfully" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;

    return 0;
}
