//Program to look for the data stored in structure using linear search

#include<iostream>
#include<string>

using namespace std;

void display(struct student *, int);
int findRecord(struct student *, int, int);

struct student
{
    int rollno;
    char name[30];
    float marks1;
    float marks2;
};

int main()
{
    int rollnum, status;
    cout<<"\n\n\n\n\t\t***** Student Database *****\t\t\n\n\n\n";
    student record[5] = {   {4, "Ajay", 30.5, 47.8},
                            {3, "Payal", 45.6, 66.8},
                            {1, "Shruti", 56.7,88.9},
                            {2, "Jerry", 55.4, 67.3},
                            {5, "Bala", 33.6, 89.8}
                        };
    cout<<"\nCurrent data stored: \n\n";

    display(record, 5);

    cout<<"\n\n\nEnter the roll number to find: ";
    cin>>rollnum;

    status = findRecord(record, rollnum, 5);

    if(status==-1)
        cout<<"Sorry, this record does not exist!\n\n\n";

    return 0;

}

int findRecord(struct student rec[], int toFind, int length)
{
    cout<<"\n\n";
    for(int i=0;i<5;i++)
    {
        if(toFind == rec[i].rollno)
        {
            cout<<"Record Found!\n\n\n";
            cout<<"\t\tRollNo."<<"\t"<<"Name"<<"\t"<<"Maths"<<"\t"<<"Science"<<"\n";
            cout<<"\t\t"<<rec[i].rollno<<"\t"<<rec[i].name<<"\t"<<rec[i].marks1<<"\t"<<rec[i].marks2<<"\n";
            cout<<"\n\n";
            return 1;
        }
    }
    return -1;
}




void display(struct student rec[], int length)
{
    cout<<"RollNo."<<"\t"<<"Name"<<"\t"<<"Maths"<<"\t"<<"Science"<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<rec[i].rollno<<"\t"<<rec[i].name<<"\t"<<rec[i].marks1<<"\t"<<rec[i].marks2<<"\n";
    }
}
