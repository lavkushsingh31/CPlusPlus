#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    char ch;
    cout<<"\nEnter the array elements(elements must be unique): ";

    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    cout<<"\n\nArray elements entered: \n\n ";

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }

    do
    {
        int element, comparision=0, flag=0;
        cout<<"\n\nEnter the element to search form the array: ";
        cin>>element;

        for(int i=0;i<10;i++)
        {
            if(arr[i] == element)
            {
                flag=1;
                cout<<"\nElement found at index: "<<i;
                break;
            }
            else
            {
                ++comparision;
            }
        }

        if(flag==1)
        {
            cout<<"\n\nElement was found! Total number of comparisons: "<<++comparision<<"\n\n";
        }
        else
        {
            cout<<"\n\nElement NOT found! \n\nTotal number of comparisons: "<<comparision<<"\n\n";
        }

        cout<<"\n\nWanna search for another element(Press 'y' for yes): ";
        cin>>ch;
    }while(ch=='y');


}
