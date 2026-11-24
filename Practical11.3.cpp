#include <iostream>
#include <cstdio>
#include <cstring>
#include <limits>
using namespace std;

int main()
{
    char enrollment[20], name[50], branch[20], grade[10];
    int semester, n;
    float percentage;

    char line[100];

    cout <<"********************************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    //PART A - Create and Write File

    FILE *file = fopen("StudentRecords.txt", "w");

    if (file == NULL)
    {
        cout <<"Unable to Create StudentRecords.txt" <<endl;
        return 0;
    }

    cout <<"StudentRecords.txt Created Successfully" <<endl;
    cout <<"--------------------------------------------" <<endl;

    cout << "Enter Number of Students : ";
    cin >>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    for (int i = 1; i <= n; i++)
    {
        cout <<"Student " <<i <<endl;
        cout <<endl;

        cout <<"Enrollment Number : ";
        cin.getline(enrollment, 20);

        cout <<"Student Name      : ";
        cin.getline(name, 50);

        cout <<"Branch            : ";
        cin.getline(branch, 20);

        cout <<"Semester          : ";
        cin >>semester;

        cout <<"Percentage        : ";
        cin >>percentage;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout <<"Grade             : ";
        cin.getline(grade, 10);

        //Store student details in file

        fprintf(file, "%s\n", enrollment);
        fprintf(file, "%s\n", name);
        fprintf(file, "%s\n", branch);
        fprintf(file, "%d\n", semester);
        fprintf(file, "%.2f\n", percentage);
        fprintf(file, "%s\n", grade);

        cout <<endl;
        cout <<"--------------------------------------------" << endl;
    }

    fclose(file);

    cout <<"Student Records Stored Successfully" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //PART B - Read Student Records

    file = fopen("StudentRecords.txt", "r");

    if (file == NULL)
    {
        cout <<"Unable to Open StudentRecords.txt" <<endl;
        return 0;
    }

    cout <<"Reading StudentRecords.txt" <<endl;

    int count = 0;

    while (fgets(line, 100, file) != NULL)
    {
        count++;

        if (count % 6 == 1)
            cout <<"Enrollment : " <<line;

        else if (count % 6 == 2)
            cout <<"Name       : " <<line;

        else if (count % 6 == 3)
            cout <<"Branch     : " <<line;

        else if (count % 6 == 4)
            cout <<"Semester   : " <<line;

        else if (count % 6 == 5)
            cout <<"Percentage : " <<line;

        else if (count % 6 == 0)
        {
            cout <<"Grade      : " <<line;

            cout <<endl;
            cout <<"--------------------------------------------" <<endl;
        }
    }

    if (feof(file))
    {
        cout <<"End of File Reached Successfully" <<endl;
    }

    fclose(file);

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
    //PART C - Backup Student Records

    cout <<"Creating BackupStudentRecords.txt" <<endl;

    FILE *source = fopen("StudentRecords.txt", "r");

    if (source == NULL)
    {
        cout <<"Unable to Open StudentRecords.txt" <<endl;
        return 0;
    }

    FILE *destination = fopen("BackupStudentRecords.txt", "w");

    if (destination == NULL)
    {
        cout <<"Unable to Create Backup File" <<endl;
        fclose(source);
        return 0;
    }

    char ch;

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    cout <<"Backup Completed Successfully" <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<"Program Executed Successfully" <<endl;
    cout <<"--------------------------------------------" <<endl;

    return 0;
}
