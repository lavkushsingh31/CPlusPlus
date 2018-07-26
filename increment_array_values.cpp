//Program to increment the values of the integer array elements between the given indices

#include <iostream>

using namespace std;

void add(int, int, int);
void print();

int arr[10];        //array is assumed to start from index 1

int main()
{
    int left, right, incr;
    cout<<"\nEnter the array elements: ";

    for(int i=1;i<=10;i++)
        cin>>arr[i];

    cout<<"\n\nEnter the left bound(>=1): ";
    cin>>left;
    cout<<"\nEnter The rightmost bound(<=10): ";
    cin>>right;
    cout<<"\nIncrement factor? ";
    cin>>incr;

    cout<<"\n\nYour previous array:\t";
    print();
    add(left, right, incr);
    cout<<"Required array:         ";
    print();

    return 0;
}

void add(int l, int r, int inc)
{
    for(int i=l; i<=r; i++)
        arr[i]=arr[i]+inc;
}

void print()
{
    for(int i=1;i<=10;i++)
        cout<<arr[i]<<"\t";
    cout<<"\n\n";
}
