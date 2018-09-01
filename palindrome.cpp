#include<iostream>

using namespace std;

int main()
{
    int num, temp, check = 0, digit;
    cout<<"\nEnter any number: ";
    cin>>num;
    temp = num;
    while(temp!=0)
    {
        digit = temp%10;
        check = (check *10) + digit;
        temp=temp/10;
    }

    if(num == check)
    {
        cout<<"\nEntered number is a Palindrome!\n\n";
    }
    else
    {
        cout<<"\nEntered number is NOT Palindrome!\n\n";
    }
}
