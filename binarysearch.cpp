//Program to implement binary search

#include<bits/stdc++.h>

using namespace std;

void print();
int binarySearch(int);

int arr[15];

int main()
{
    int toFind, index;
    cout<<"\nEnter the array elements: ";

    for(int i=0;i<15;i++)
        cin>>arr[i];

    cout<<"\nYour array looks like:\n\n";
    sort(arr, arr+15);
    print();
    char ch;
    do{
    cout<<"\n\n\nEnter the element you are looking for: ";
    cin>>toFind;

    index = binarySearch(toFind);

    if(index == -1)
        cout<<"\n\nElement not found! :(\n\n";
    else
        cout<<"\n\nElement was found at index : "<<index+1<<", (counting first index as 1).\n\n";
    cout<<"\nWanna search another element? y to continue...\t";
    cin>>ch;
    } while(ch== 'y');
    return 0;
}

int binarySearch(int x)
{
    int left=0, right=14, mid;

    while(left<=right)
    {
        mid = (left+right)/2;
        if(arr[mid] == x)
            return mid;
        else if(x < arr[mid])
            right = mid-1;
        else
            left = mid+1;
    }
    return -1;
}






void print()
{
    for(int i=0;i<15;i++)
        cout<<arr[i]<<"\t";
    cout<<"\n\n";
}
