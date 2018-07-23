//Program which asks for natural numbers as a user input and sorts them using counting sort.

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int largest;
    cout<<"\nWhat is the largest number to input: ";
    cin>>largest;

    int arr[largest+1] =  { 0 }, store[largest];
    cout<<"\nEnter the elements: ";

    for(int i=1;i<=largest; ++i)
        cin>>store[i];

    for(int i=1; i<=largest; i++)
    {
        for(int j=1; j<=largest; j++)
        {
            if(store[i] == j)
            {
                ++arr[j];
            }
        }

    }

    cout<<"\n\nNumber       Occurrence(s)\n\n";
    for(int i=1;i<=largest; ++i)
        cout<<i<<"\t\t"<<arr[i]<<"\n";

    cout<<"\n\nSorted Order: \n\n";

    for(int i=1;i<=largest; ++i)
    {
        if(arr[i]!=0)
        {
            for(int j=1;j<=arr[i]; ++j)
            cout<<i<<"\t";
        }

    }

    cout<<"\n\n";
    return 0;
}
