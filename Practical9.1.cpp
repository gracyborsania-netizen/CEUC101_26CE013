#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number = 4;
    char character = 'U';
    float floating = 69.60;

    cout <<"********************************************" <<endl;
    cout <<"MEMORY ADDRESS EXPLORER" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    //PART A - Variable Information
    cout <<"------------ Variable Information ------------" <<endl;
    cout <<endl;

    cout <<"Integer Value      : " <<number <<endl;
    cout <<"Memory Address     : " <<&number <<endl;

    cout <<endl;
    cout <<"----------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Character Value    : " <<character <<endl;
    cout <<"Memory Address     : " <<(void*)&character <<endl;
    cout <<endl;

    cout <<"----------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Floating Value     : " <<fixed <<setprecision(2) <<floating <<endl;
    cout <<"Memory Address     : " <<&floating <<endl;
    cout <<endl;

    cout <<"----------------------------------------------" <<endl;
    cout <<endl;

    //PART B - Indirect Referencing
    int *p = &number;

    cout <<"Indirect Referencing" <<endl;
    cout <<endl;

    cout <<"Stored Value       : " <<*p <<endl;

    *p = 30;

    cout <<"Modified Value     : " <<number <<endl;
    cout <<endl;

    cout <<"----------------------------------------------" <<endl;
    cout <<endl;

    //PART C - Sequential Data Collection
    int arr[5] = {10, 20, 30, 40, 50};

    cout <<"Sequential Data Collection" <<endl;
    cout <<endl;

    cout <<"Array using Index" <<endl;

    for(int i = 0; i < 5; i++)
    {
        cout <<arr[i] <<" ";
    }
    cout <<endl;
    cout <<endl;

    cout <<"Array using Address-based Access" <<endl;

    for(int i = 0; i < 5; i++)
    {
        cout <<*(arr + i) <<" ";
    }
    cout <<endl;
    cout <<"----------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Observation" <<endl;
    cout <<endl;

    cout <<"Both approaches access the same memory locations." <<endl;
    cout <<endl;
    cout <<"----------------------------------------------" <<endl;

    return 0;
}
