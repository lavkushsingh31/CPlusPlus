#include<iostream>
#include<stdio.h>
using namespace std;

struct film
{
    int id;
    char name[50];
    int year;
    float budget;
};

int main()
{
    film arr[5];
    char ch;

    for(int i=0;i<5;i++)
    {
        cout<<"\n\nEnter the Film ID: ";
        cin>>arr[i].id;
        cout<<"\nEnter the name of the Film : ";
        getchar();
        cin.get(arr[i].name, 50);
        cout<<"\nEnter the year of release: ";
        cin>>arr[i].year;

        cout<<"\nEnter the budget of the Film: ";
        cin>>arr[i].budget;
    }

    cout<<"\n\n\nFollowing are the entered details: ";
    cout<<"\n\nFilm ID \tFilm Name \tYear of Release \tBudget \n\n";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i].id<<" \t\t"<<arr[i].name<<" \t\t"<<arr[i].year<<" \t\t\t"<<arr[i].budget<<"\n";
    }

    do
    {
        int searchID, found=0;
        cout<<"\nEnter the Film ID to search: ";
        cin>>searchID;
        for(int i=0; i<5; i++)
        {
            if(searchID  == arr[i].id)
            {
                found = 1;
                cout<<"\nRecord Found! Following are the details: ";
                cout<<"\n\nName of the film: "<<arr[i].name;
                cout<<"\nYear of release: "<<arr[i].year;
                cout<<"\nBudget of the film: "<<arr[i].budget<<"\n";
                break;
            }

        }

        if(found==0)
        {
            cout<<"\n\n\nRecord NOT found!\n";
        }
        cout<<"\n\nWanna search for another record? Press 'y' for yes . . .";
        cin>>ch;
    }while(ch=='y');

}
