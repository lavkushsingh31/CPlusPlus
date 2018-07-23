//Demonstration of Stacks using Arrays

#include<iostream>
#include<stdlib.h>
using namespace std;

int main();
int push();
int pop();
int view();
int find_top_element();
int check_if_empty();
int count_elements();

int top =-1, *top_pointer, myarray[10];

int main()
{
    int choice, temp;
    top_pointer = &top;
    while(1)
    {
        cout<<"     *******   Stack Implementation   *******  \n\n";
        cout<<"\n1. Push element\n2. Pop element\n3. View elements\n4. Current element at Stack Top\n5. Check if Stack is Empty\n6. Count the Stack elements\n0. Exit\n";
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();;
                break;
            case 3:
                view();
                break;
            case 4:
                find_top_element();
                break;
            case 5:
                check_if_empty();
                break;
            case 6:
                temp = count_elements();
                cout<<"\nThere are currently "<<temp<<" elements in Stack!\n\n\n\n";
                break;
            case 0:
                cout<<"\nThank you for using! Come again!:) \n\n\n\n";
                exit(0);
                break;
            default:
                cout<<"\nInvalid choice. Please try again!\n\n\n\n";
        }
    }
    return 0;
}

int push()
{
    if(*top_pointer == 9)
        cout<<"\nError! Stack Overflow.\n\n\n\n";
    else
    {
        cout<<"\nEnter the element : ";
        cin>>myarray[++*top_pointer];
        cout<<"\nElement inserted successfully!\n\n\n\n";
    }
}

int pop()
{
    if(*top_pointer == -1)
       cout<<"\nError! Stack already Empty!\n\n\n\n";
    else
    {
        *top_pointer=*top_pointer-1;
        cout<<"\nElement Deleted Successfully!\n\n\n\n";
    }
}

int count_elements()
{
    return *top_pointer+1;
}

int view()
{
    if(*top_pointer == -1)
        cout<<"\nStack is currently Empty.\n\n\n\n";
    else
    {
        int i;
        cout<<"\nCurrently, the stack contains : \n\n\n";
        for(i=*top_pointer;i>=0;i--)
            cout<<myarray[i]<<"\t";
        cout<<"\n\n\n\n";
    }
}

int find_top_element()
{
    if(top == -1)
        cout<<"\nStack is currently empty!\n\nNo element at stack top.";
    else
    {
        cout<<"\nElement at stack top is : ";
        cout<<myarray[*top_pointer];
    }
    cout<<"\n\n\n\n";
}

int check_if_empty()
{
    if(*top_pointer==-1)
        cout<<"\nStack is currently empty!\n\n\n\n";
    else
    {
        int temp= count_elements();
        cout<<"\nStack is NOT empty!\n\nIt contains "<<temp<<" elements!\n\n\n\n";
    }
}
