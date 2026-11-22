#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //MATRIX MULTIPLICATION
     int A[3][3], B[3][3], C[3][3];
     int i=0,j=0,k=0;
     int n1,n2;
     int arr1[100],arr2[100];
     int merged[200];

     cout <<"********************************************" <<endl;
     cout <<"MATRIX MULTIPLICATION" <<endl;
     cout <<"********************************************" <<endl;
     cout <<endl;

     //Accept first matrix
     cout <<"Enter elements of First Matrix (3*3)" <<endl;
     for(i=0; i<3; i++)
     {
        for(j=0; j<3; j++)
        {
            cin >>A[i][j];
        }
     }
     cout <<endl;

     //Accept second matrix
     cout <<"Enter elements of Second Matrix (3*3)" <<endl;
     for(i=0; i<3; i++)
     {
        for(j=0; j<3; j++)
        {
            cin >>B[i][j];
        }
     }

     //Initialize resultant matrix
     for(i=0; i<3; i++)
     {
        for(j=0; j<3; j++)
        {
            C[i][j]=0;
        }
    }

     //Matrix multilication
     for(i=0; i<3; i++)
     {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                C[i][j]=C[i][j] + A[i][k] * B[k][j];
            }
        }
     }
     cout <<endl;

     //Display first matrix
     cout <<"First Matrix" <<endl;
     cout <<endl;
     for(i=0; i<3; i++)
     {
        for(j=0; j<3; j++)
        {
            cout <<A[i][j]<<"\t";
        }
        cout <<endl;
     }
     cout <<endl;

     //Display second matrix
     cout <<"Second Matrix" <<endl;
     cout <<endl;
     for(i=0; i<3; i++)
     {
        for(j=0; j<3; j++)
        {
            cout <<B[i][j]<<"\t";
        }
        cout <<endl;
     }
     cout <<endl;

     //Display resultsnt matrix
     cout <<"----------------------------------"<<endl;
     cout <<endl;
     cout <<"Resulstant Matrix" <<endl;
     cout <<endl;
     for(i=0; i<3; i++)
     {
        for(j=0; j<3; j++)
        {
            cout <<C[i][j]<<"\t";
        }
        cout <<endl;
     }

     cout <<endl;
     cout <<endl;

    //MERGE SORTED ARRYS
    cout <<"********************************************" <<endl;
    cout <<"MERGE SORTED ARRAYS" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    //Accept size of first array
    cout <<"Enter size of First array" <<endl;
    cin >>n1;
    cout <<endl;

    cout <<"Enter elements in sorted order" <<endl;

    for(i=0; i<n1; i++)
    {
       cin >>arr1[i];
    }
    cout <<endl;

    //Accept size of second array
    cout <<"Enter size of Second array" <<endl;
    cin >>n2;
    cout <<endl;

    cout <<"Enter elements in sorted order" <<endl;

    for(i=0; i<n2; i++)
    {
        cin >>arr2[i];
    }
    cout <<endl;

    //Compare elements of both arrays
   while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    //Copy remaining elements of first array
    while(i<n1)
     {
        merged[k]=arr1[i];
        i++;
        k++;
     }

     //Copy remaining elements of second array
     while(j<n2)
     {
        merged[k]=arr2[j];
        j++;
        k++;
     }

     //Display first array
     cout <<"First Array" <<endl;
     cout <<endl;

     for(i=0; i<n1; i++)
     {
        cout <<arr1[i] <<" ";
     }
     cout <<endl;
     cout <<endl;
     //Display second araay
     cout <<"Second Array" <<endl;
     cout <<endl;

     for(i=0; i<n2 ;i++)
     {
        cout <<arr2[i] <<" ";
     }
     cout <<endl;

     //Display merged array
     cout <<"-------------------------------" <<endl;
     cout <<endl;
     cout <<"Merged Sorted Array" <<endl;
     cout <<endl;

     for(i=0; i<200; i++)
     {
        cout <<merged[i] <<" ";
     }

    return 0;
    }
