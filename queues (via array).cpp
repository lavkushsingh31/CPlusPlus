//Program to implement queue data structure using arrays

#include <iostream>
#include<stdlib.h>
using namespace std;

void enqueue();
void dequeue();
void view_queue();
void front_queue();
void if_empty();

int Que[100], frontt = 0, endd=-1;

int main()
{
    int choice;
    while(1)
    {
        cout<<"\n\n        ***** Queue Implementation *****        \n\n\n";
        cout<<"1. Insert Element \n2. Delete Element \n3. View Elements \n4. Queue Top \n5. Queue status (empty or not)\n0. Exit \n\nEnter your choice:  ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                view_queue();
                break;
            case 4:
                front_queue();
                break;
            case 5:
                if_empty();
                break;
            case 0:
                cout<<"\nThank you for using! Come again!:) \n\n\n\n";
                exit(0);
            default:
                cout<<"\n\nIncorrect choice! Please try again.\n\n";
        }
    }
    return 0;
}


void enqueue()
{
    int ele;
    if(frontt == 0 && endd == 99)
        cout<<"\n\nError! Queue is already full! \n\n";
    else
    {
        cout<<"\nEnter the element : ";
        cin>>ele;
        Que[++endd]=ele;
        cout<<"\n\nElement Queued Successfully! \n\n\n";
    }
}

void dequeue()
{
    if(frontt > endd)
        cout<<"\n\nError! Queue is empty! \n\n";
    else
    {
        Que[++frontt];
        cout<<"\n\nElement REMOVED from the queue Successfully! \n\n\n";
    }
}

void view_queue()
{
    if(frontt > endd)
        cout<<"\n\nThere are currently 0 element(s) in the queue.\n\n";
    else
    {
        cout<<"\n\nThere are currently "<<(endd-frontt+1)<<" element(s) in the queue.\n\n";
        for(int i=frontt; i<=endd; ++i)
            cout<<Que[i]<<"\t";
        cout<<"\n\n";
    }
}

void front_queue()
{
    if(frontt > endd)
        cout<<"\n\nNo front element, queue is empty!\n\n";
    else
    {
        cout<<"\n\n"<< Que[frontt]<<" is the front element of the queue right now.\n\n";
    }
}

void if_empty()
{
    if(frontt > endd)
        cout<<"\n\nQueue is currently empty!\n\n";
    else
    {
        cout<<"\n\nQueue is not empty. It is currently occupied with "<<(endd-frontt+1)<<" element(s)!\n\n";
    }
}
