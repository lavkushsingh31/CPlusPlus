#include<iostream>
using namespace std;

void inputArray(int *, int);
void printArray(int *, int);
void selectionSort(int *, int);

int main()
{
    int length;
    cout<<"\nEnter the size of the array: ";
    cin>>length;

    int arr[length];

    cout<<"\nEnter the array elements: ";
    inputArray(arr, length);

    cout<<"\n\nArray you entered(before sorting): \n\n";
    printArray(arr, length);

    selectionSort(arr, length);

    cout<<"\n\n\nArray after Selection Sorting technique: \n\n";
    printArray(arr, length);

    cout<<"\n\n\n\n";
    return 0;
}

void selectionSort(int a[], int l)
{
    for(int i=0;i<l;i++)
    {
        int index = i, temp;
        for(int j=i+1;j<l;j++)
        {
            if(a[index]>a[j])
            {
                index=j;
            }
        }
        temp = a[i];
        a[i]=a[index];
        a[index]=temp;
    }
}


void inputArray(int a[], int l)
{
    for(int i=0;i<l;i++)
    {
        cin>>a[i];
    }
}

void printArray(int a[], int l)
{
    for(int i=0;i<l;i++)
    {
        cout<<a[i]<<"\t";
    }
}
