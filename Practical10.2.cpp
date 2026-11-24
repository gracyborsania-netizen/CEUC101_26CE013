#include <iostream>
using namespace std;

//Part A : Structure for Product Information
struct Product
{
    int productID;
    float price;
    char category;
    double weight;
};

//Part B : Structure with Different Member Orders
struct DataTypeA
{
    int b;
    double c;
    char a;
};

struct DataTypeB
{
    double c;
    int b;
    char a;
};

//Part C : Union for Shared Memory
union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    //Part A : Size of Structure Members
    Product p;

    cout <<"********************************************" <<endl;
    cout <<"COMPOSITE DATA REPRESENTATION ANALYZER" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    cout <<"Composite Data Type A" <<endl;

    cout <<"Size of Product ID : " <<sizeof(p.productID) <<" Bytes" <<endl;
    cout <<"Size of Price      : " <<sizeof(p.price) <<" Bytes" <<endl;
    cout <<"Size of Category   : " <<sizeof(p.category) <<" Bytes" <<endl;
    cout <<"Size of Weight     : " <<sizeof(p.weight) <<" Bytes" <<endl;

    cout <<"Total Size : " <<sizeof(Product) <<" Bytes" <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //Part B : Padding and Alignment
    cout <<"Padding and Alignment Analysis" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Size of Structure A : " <<sizeof(DataTypeA) <<" Bytes" <<endl;
    cout <<endl;

    cout <<"Size of Structure B : " <<sizeof(DataTypeB) <<" Bytes" <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
    cout <<"Padding and Alignment Observed" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //Part C : Shared Memory Using Union
    Data d;

    cout <<"Shared Memory Representation" <<endl;
    cout <<endl;

    d.i = 120;
    cout <<"Integer Value : " <<d.i <<endl;
    cout <<endl;

    d.f = 120.00;
    cout <<"Floating Value : " <<d.f <<endl;
    cout <<endl;

    d.ch = 'x';
    cout <<"Character Value : " <<d.ch <<endl;
    cout <<endl;

    cout <<"After Updating Floating Value" <<endl;
    cout <<endl;

    d.f = 250.50;

    cout <<"Integer Value Changed" <<endl;
    cout <<endl;

    cout <<"Character Value Changed" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    //Part D : Trade-off Analysis
    cout <<"Trade-off Analysis" <<endl;
    cout <<endl;

    cout <<"Structure" <<endl;
    cout <<endl;

    cout <<"Separate Memory for Every Member" <<endl;
    cout <<endl;

    cout <<"Suitable for Storing Complete Records" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<endl;

    cout <<"Union" <<endl;
    cout <<endl;

    cout <<"Shared Memory for All Members" <<endl;
    cout <<endl;

    cout <<"Suitable for Memory-efficient Applications" <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<endl;
    cout <<"Program Executed Successfully" <<endl;
    cout <<endl;
    cout <<"--------------------------------------------" <<endl;

    return 0;
}
