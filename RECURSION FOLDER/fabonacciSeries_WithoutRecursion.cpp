#include<iostream>
using namespace std;

int main()
{
    int a=0, b=1, c, n, i;
    cout<< "Enter the number for fabanoci series: ";
    cin>>n;
    cout <<a <<" " <<b;

    for(i=2; i<n; i++)
    {
        c = a+b;
        a=b; 
        b=c; 
        cout <<" " <<c;
    }
}