#include<iostream>
using namespace std;

int main()
{
    int num=0, temp=0, sum=0,rem=0;
    char ch;
    cout<<"\nEnter a three digit number : ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum = sum+ (rem*rem*rem);
        temp=temp/10;
    }

    if(num==sum)
    {
        cout<<"\nEntered number is an Armstrong Number! \n\n";
    }
    else
    {
        cout<<"\nEntered number is NOT an Armstrong Number! \n\n";
    }

    cout<<"\n\n\n";

}

