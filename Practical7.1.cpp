#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{
    char Enroll_No[10],Name[25],Br[5];
    char reference_id[40],first_Name[10],last_Name[15];
    char keyword[10];
    int pos,i,j=0;

    cout <<"********************************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"********************************************" <<endl;

    //Enter Student Enrollment Number
    cout <<"Enter Enrollment Number" <<setw(5) <<":";
    cin.getline(Enroll_No,10);
    cout <<endl;

    //Enter Student Name
    cout <<"Enter Student Name" <<setw(10) <<":";
    cin.getline(Name,25);
    cout <<endl;

    //Enter Student Branch
    cout <<"Enter Branch" <<setw(16) <<":";
    cin.getline(Br,5);
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;

    strcpy(reference_id,Name);
    strcat(reference_id,"-");
    strcat(reference_id,Enroll_No);
    cout <<endl;

    cout <<"Student Reference" <<endl;
    cout <<endl;
    cout <<reference_id <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    pos=-1;

    for(i=0; Name[i]!='\0'; i++)
    {
        if(Name[i]==' ')
        {
            pos=i;
            break;
        }
    }

    if(pos!=-1)
    {
        for(i=0; i<pos; i++)
        {
            first_Name[i]=Name[i];
        }
        first_Name[i]='\0';

        for(i=pos+1; Name[i]!='\0'; i++)
        {
            last_Name[j]=Name[i];
            j++;
        }
        last_Name[j]='\0';
    }

    //First Name of Student
    cout <<"First Name" <<endl;
    cout <<first_Name <<endl;
    cout <<endl;

    //Last Name of Student
    cout <<"Last Name" <<endl;
    cout <<last_Name <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //Enter Keyword from Student Name
    cout <<"Enter Keyword" <<setw(5) <<":";
    cin.getline(keyword,10);
    cout <<endl;

    if(strstr(Name,keyword)!=NULL)
    {
        cout <<"Keyword Found." <<endl;
    }
    else
    {
        cout <<"Keyword Not Found." <<endl;
    }

    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //STUDENT RECORD
    cout <<"Student Record" <<endl;
    cout <<endl;

    //Display Student Enrollment Number
    cout <<"Enrollment Number" <<setw(5) <<":" <<Enroll_No <<endl;
    cout <<endl;

    //Display Student Name
    cout <<"Student Name" <<setw(10) <<":" <<Name <<endl;
    cout <<endl;

    //Display student Branch
    cout <<"Branch" <<setw(16) <<":" <<Br <<endl;

    return 0;
}
