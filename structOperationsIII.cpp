//Program to deploy selection sort on the array of structures

#include<iostream>
#include<string>

using namespace std;

void display(struct student *, int);
void selectionSort(struct student *, int);

struct student
{
    int rollno;
    char name[30];
    float marks1;
    float marks2;
};

int main()
{
    cout<<"\n\n\t\t***** Student Database *****\t\t\n\n\n\n";
    student record[5] = {   {4, "Ajay", 30.5, 47.8},
                            {3, "Payal", 45.6, 66.8},
                            {1, "Shruti", 56.7,88.9},
                            {2, "Jerry", 55.4, 67.3},
                            {5, "Bala", 33.6, 89.8}
                        };
    cout<<"\nCurrent data stored: \n\n";

    int length = 5;     //length of the array of structures
    display(record, length );

    selectionSort(record, length);

    cout<<"\n\n\nAfter Selection Sorting based on Roll Numbers: \n\n\n";

    display(record, 5);


    return 0;

}

void selectionSort(struct student a[], int l)
{
    for(int i=0;i<l;i++)
    {
        int index = i, temp;
        for(int j=i+1;j<l;j++)
        {
            if(a[index].rollno>a[j].rollno)
            {
                index=j;
            }
        }
        temp = a[i].rollno;
        a[i].rollno=a[index].rollno;
        a[index].rollno=temp;
    }
}


void display(struct student rec[], int length)
{
    cout<<"RollNo."<<"\t"<<"Name"<<"\t"<<"Maths"<<"\t"<<"Science"<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<rec[i].rollno<<"\t"<<rec[i].name<<"\t"<<rec[i].marks1<<"\t"<<rec[i].marks2<<"\n";
    }
}

