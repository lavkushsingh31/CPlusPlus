#include<iostream>
using namespace std;


int lsearch(int *, int, int, int);

int main()
{
    int i;
    int d[11], n;
    cout<<"\nEnter the array elements: ";

    for(i=0;i<11;i++)
        cin>>d[i];

    cout<<"\nArray elements entered are: \n\n";

    for(i=0;i<11;i++)
        cout<<d[i]<<"\t";


    cout<<"\n\nEnter the element to search in the array: ";
    cin>>n;

    i = lsearch(d,0,10,n);

    if(i==-1)
    {
        cout<<"\nElement not found!\n\n\n";
    }
    else
    {
        cout<<"\nElement was found at index: "<<i<<"\n\n\n";
    }
    return 0;
}

int lsearch(int x[], int start, int last, int toFind)
{
    for(int i=start;i<last;i++)
    {
        if(toFind == x[i])
        {
            return i;
        }
    }

    return -1;
}
