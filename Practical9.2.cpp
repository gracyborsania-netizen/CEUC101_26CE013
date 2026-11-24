#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student
{
    string Enroll_No;
    string Name;
    string Br;
    int Sem;
    float Pr;
    string Grade;
};

//Function to display student records using address arithmetic
void displayRecords(Student *ptr, int n)
{
    cout <<"Student Records using Address-based Access" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    for (int i = 0; i < n; i++)
    {
        Student *address = ptr + i;

        cout <<"Address : " <<address <<endl;

        cout <<address->Enroll_No << "  "
             <<address->Name <<"  "
             <<address->Br <<"  "
             <<address->Sem <<"  "
             <<fixed <<setprecision(2)
             <<address->Pr <<"  "
             <<address->Grade <<endl;

        cout <<endl;
        cout <<"--------------------------------------------" <<endl;
        cout <<endl;
    }
}

//Function to calculate average percentage
float calculateAverage(Student *ptr, int n)
{
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + (ptr + i)->Pr;
    }

    return total / n;
}

//Function to find highest percentage
float findHighest(Student *ptr, int n)
{
    float highest = (ptr + 0)->Pr;

    for (int i = 1; i < n; i++)
    {
        if ((ptr + i)->Pr > highest)
        {
            highest = (ptr + i)->Pr;
        }
    }

    return highest;
}

//Function to find lowest percentage
float findLowest(Student *ptr, int n)
{
    float lowest = (ptr + 0)->Pr;

    for (int i = 1; i < n; i++)
    {
        if ((ptr + i)->Pr < lowest)
        {
            lowest = (ptr + i)->Pr;
        }
    }

    return lowest;
}

int main()
{
    int n;

    cout <<"********************************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    //Part A - Number of students
    cout <<"Enter Number of Students : ";
    cin >>n;
    cout <<endl;

    //Dynamic memory allocation
    Student *students = new Student[n];

    cout <<"Dynamic Memory Allocated Successfully" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Enter Student Details" <<endl;
    cout <<endl;

    //Input student details
    for (int i = 0; i < n; i++)
    {
        cout <<"Student " <<i + 1 <<endl;
        cin.ignore();
        cout <<endl;

        cout <<"Enrollment Number : ";
        getline(cin, students[i].Enroll_No);
        cout <<endl;

        cout <<"Student Name      : ";
        getline(cin, students[i].Name);
        cout <<endl;

        cout <<"Branch            : ";
        getline(cin, students[i].Br);
        cout <<endl;

        cout <<"Semester          : ";
        cin >>students[i].Sem;
        cout <<endl;

        cout <<"Percentage        : ";
        cin >>students[i].Pr;
        cout <<endl;

        cout <<"Grade             : ";
        cin >>students[i].Grade;

        cout <<endl;
        cout <<"--------------------------------------------" <<endl;
        cout <<endl;
    }

    //Part B - Address-based access
    displayRecords(students, n);

    //Part C - Address-based function access
    float average = calculateAverage(students, n);
    float highest = findHighest(students, n);
    float lowest = findLowest(students, n);

    cout <<"Academic Summary" <<endl;
    cout <<endl;

    cout <<"Class Average Percentage : "<<fixed <<setprecision(2) <<average <<" %\n";
    cout <<endl;

    cout <<"Highest Percentage       : "<<fixed <<setprecision(2) <<highest <<" %\n";
    cout <<endl;

    cout <<"Lowest Percentage        : " <<fixed <<setprecision(2) <<lowest <<" %\n";

    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //Part D - Dynamic memory deallocation
    delete[] students;

    //Reset address variable
    students = nullptr;

    cout <<"Dynamic Memory Released Successfully" <<endl;
    cout <<endl;

    cout <<"Address Variable Reset Successfully" <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
    cout <<"Program Executed Successfully" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;

    return 0;
}

