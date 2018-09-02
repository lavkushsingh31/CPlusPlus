#include<iostream>
using namespace std;

int factorial(int);
int factorial_rec(int);

int main()
{
    int n, fact;
    cout<<"\n\nEnter the number to calculate its factorial: ";
    cin>>n;

    fact= factorial(n);
    cout<<"\n\nCalculated factorial: "<<fact<<"\n\n";
    fact= factorial_rec(n);
    cout<<"\n\nCalculated factorial using recursion: "<<fact<<"\n\n";

    return 0;
}

int factorial(int x)
{
    int temp=1;
    for(int i=x;i>=1;i--)
        temp = temp*i;
    return temp;
}

int factorial_rec(int x)
{
    int temp=1;
    if(x==0)
        return 1;
    else
    {
        temp = x * factorial_rec(x-1);
    }
    return temp;
}

