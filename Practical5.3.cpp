/*
//For Numeric Pattern
#include <iostream>
using namespace std;
int main()
{
   int i=0,j=0;

   for (i=1; i<=5 ;i++)
   {
       for (j=1; j<=i; j++)
       {
           cout <<j;
       }
       cout <<endl;
   }
   return 0;
}
*/

/*
//For Lowercase Alphabet Pattern
#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0;

    for(i=0; i<5; i++)
    {
        for (j=0; j<=i; j++)
        {
            cout <<(char)('a'+j);
        }
        cout <<endl;
    }
}
*/

/*
//For Uppercase Alphabet Pattern
#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout <<(char)('A'+j);
        }
        cout <<endl;
    }
}
*/

/*
//For Right Half Number Triangle
#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5-i; j++)
        {
           cout <<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout <<j;
        }
        cout <<endl;
    }
    return 0;
}
*/

/*
//For Full Number Pyramid
#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,k=0;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5-i; j++)
        {
            cout <<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout <<j;
        }
        for(k=i-1; k>=1; k--)
        {
            cout <<k;
        }
        cout <<endl;
    }
    return 0;
}
*/


//For Full Alphabet Pyramid
#include <iostream>
using namespace std;
int main()
{
    int i=0,j=0,k=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i; j++)
        {
            cout <<" ";
        }
        for(j=0; j<=i; j++)
        {
            cout <<(char)('A'+j);
        }
        for(k=i-1; k>=0; k--)
        {
            cout <<(char)('A'+k);
        }
        cout <<endl;
    }
    return 0;
}

