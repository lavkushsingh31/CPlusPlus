//Program to see the comparison (count) among the linear and the binary search!

#include<iostream>

using namespace std;

int lsearch(int *, int, int, int);
int bsearch(int *, int, int, int);

int lcomparisonCount=0;
int bcomparisonCount=0;

int main()
{
    int i,j;
    int d[11]={0,1,2,3,4,5,6,7,8,9,10}, n;
    cout<<"\nThe Array elements are: \n\n";

    for(i=0;i<11;i++)
        cout<<d[i]<<"\t";


    cout<<"\n\nEnter the element to search in the array: ";
    cin>>n;

    i = lsearch(d,0,10,n);
    j = bsearch(d,0,10,n);

    //for linear search
    cout<<"\n\n\nLinear Search Results:\n\n";
    if(i==-1)
    {
        cout<<"\n\nElement not found!";
        cout<<"\n\nTotal Comparisons in Linear Search: "<<lcomparisonCount<<"\n\n\n\n";

    }
    else
    {
        cout<<"\nElement was found at index: "<<i;
        cout<<"\n\nTotal Comparisons in Linear Search: "<<++lcomparisonCount<<"\n\n\n\n"; // ++lcomparisonCount because the element was compared with the intended element to find, but was not incremented
    }

    //for binary search
    cout<<"\n\nBinary Search Results:\n\n";
    if(j==-1)
    {
        cout<<"\n\nElement not found!";
        cout<<"\n\nTotal Comparisons in Binary Search: "<<bcomparisonCount<<"\n\n\n\n";

    }
    else
    {
        cout<<"\nElement was found at index: "<<j;
        cout<<"\n\nTotal Comparisons in Binary Search: "<<bcomparisonCount<<"\n\n\n\n";
    }

    return 0;

}


int bsearch(int x[], int start, int last, int toFind)
{
    int left=start, right=last, mid;

    while(left<=right)
    {
        mid = (left+right)/2;

        {
            ++bcomparisonCount;
            if(x[mid] == toFind)
            {
                return mid;
            }
        }

        {
            ++bcomparisonCount;
            if(toFind < x[mid])
            {
                right = mid-1;
            }
        }

        {
            ++bcomparisonCount;
            if(toFind >= x[mid])
            {
                left = mid+1;
            }
        }
    }
    return -1;
}




int lsearch(int x[], int start, int last, int toFind)
{
    for(int i=start;i<=last;i++)
    {
        if(toFind == x[i])
        {
            return i;
        }
        else
        {
            ++lcomparisonCount;
        }

    }

    return -1;
}


