//Simple Program to calculate the sum of all the elements of the matrix.

#include<iostream>

using namespace std;

void fillArray(int);
void printArray(int);
int sumArray(int,int);


int a[3][3];

int main()
{
    cout<<"\nPopulate the Matrix: "<<endl;

    for(int i=0;i<3;++i)
    {
        fillArray(i);
    }

    cout<<"\nYou entered the values: "<<endl;

    for(int i=0;i<3;++i)
    {
        printArray(i);
    }

    int sum;

    sum = sumArray(3,3);



    cout<<"\nThe sum of all the elements: "<<sum<<endl<<endl;

    return 0;
}

void fillArray(int row)
{
    for(int i=0;i<3;++i)
    {
        cin>>a[row][i];
    }
}

void printArray(int row)
{
    for(int i=0;i<3;++i)
    {
        cout<<a[row][i]<<" ";
    }
    cout<<endl;
}

int sumArray(int row, int col)
{
    int x=0;
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            x= x+ a[i][j];
        }
    }
    return x;
}
