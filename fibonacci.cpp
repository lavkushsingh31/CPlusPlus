#include<iostream>

using namespace std;

int main()
{
    int num, first = 0, second = 1, next;
    cout<<"       *******  Fibonacci Series  *******       \n\n\n";
    cout<<"\nEnter the number of terms you wish to print the series: ";
    cin>>num;

    if(num == 0)
            cout<<"\n\nNumber of terms should be greater then zero! \n\n";
    else if(num == 1)
            cout<<"\n\n"<<first<<"\n\n";
    else if(num == 2)
    {
        cout<<"\n\n"<<first<<"\t"<<second<<"\n\n";
        //continue;
    }
    else if(num>0)
    {
        cout<<"\n\n"<<first<<"\t"<<second<<"\t";
        for(int i=0;i<num-2;i++)
        {
            next = first + second;
            first = second;
            second = next;
            cout<<next<<"\t";
        }

    }
    else
    {
        cout<<"\n\nInvalid input! Try again with positive integer > 0. \n\n";
    }
    cout<<"\n\n";
}
