#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    //Declare Variables
    int i=0,n,S[10],Tot=0,max=0,min;
    float avg;
    string Name[10];
    string ID[10];

    cout <<"********************************************" <<endl;
    cout <<"SPORTS EVENT SCORE ANALYSIS" <<endl;
    cout <<"********************************************" <<endl;

    cout <<"Enter Number of Participants" <<setw(5) <<":";
    cin >>n;
    cout <<endl;

    for(i=0; i<n; i++)
    {
        //Enter Participant ID
        cout <<"Enter Participant ID" <<setw(7) <<":";
        cin >>ID[i];

        //Enter Participant Name
        cout <<"Enter Participant Name" <<setw(5) <<":";
        cin >>Name[i];

        //Enter Participant Score
        cout <<"Enter Score" <<setw(16) <<":";
        cin >>S[i];

        cout <<endl;
    }

    cout <<"----------------------------------------------" <<endl;
    cout <<"Participant Performance" <<endl;
    cout <<"----------------------------------------------" <<endl;

    //Display Participant Performance
    cout <<"ID" <<setw(15) <<"Name" <<setw(18) <<"Score" <<endl;
    cout <<"----------------------------------------------" <<endl;

    //For loop for displaying Participant information
    for(i=0; i<n; i++)
    {
        cout <<ID[i] <<setw(15) <<Name[i] <<setw(15) <<S[i];
        cout <<endl;
    }
    cout <<"----------------------------------------------" <<endl;

    //For loop for calculating Total Score of Participant
    for(i=0; i<n; i++)
    {
        Tot = Tot + S[i];
    }

    //Total Score of Participant
    cout <<"Total Score" <<setw(7) <<":" <<Tot <<endl;

    avg = Tot/n;

    //Average Score of Participant
    cout <<"Average Score" <<setw(5) <<":" <<avg <<endl;

    //For loop for calculating Highest marks and Lowest marks of Participant
    for(i=0; i<n; i++)
    {
       if(max<S[i])
       {
           max=S[i];
       }

       if(min>S[i])
       {
           min=S[i];
       }

    }

    //Display Highest Score of Participant
    cout <<"Highest Score" <<setw(5) <<":" <<max <<endl;

    //Display Lowest Score of Participant
    cout <<"Lowest Score" <<setw(6) <<":" <<min <<endl;

    return 0;
}
