#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;

    }
    return n*factorial(n-1);

}
// Fibonacci using Loop
void fibonacciLoop(int n)
{
    int first=0;
    int second=1;

    for(int i=0; i<n; i++)
    {
        cout <<first <<" ";

        int next=first+second;
        first=second;
        second=next;
    }
}


// Fibonacci using Recursion
int fibonacciRecursion(int n)
{
    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        return 1;
    }

    int first=fibonacciRecursion(n-1);
    int second=fibonacciRecursion(n-2);
    int result=first+second;

    return result;
}


int main()
{
    int n;

    cout << "Enter number :";
    cin >>n;
    cout <<" " <<endl;

    cout <<"Factorial :";
    cout <<factorial(n);
    cout <<" " <<endl;
    cout <<endl;

    cout <<"Fibonacci using Loop :";
    fibonacciLoop(n);
    cout <<" " <<endl;
    cout <<endl;

    cout <<"Fibonacci using Recursion :";

    for(int i = 0; i < n; i++)
    {
        cout << fibonacciRecursion(i) <<" ";
    }
    cout <<" " <<endl;
    cout <<endl;

    return 0;
}
