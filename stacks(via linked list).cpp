//Program implementing stacks using linked lists

#include<iostream>
#include<stdlib.h>>
using namespace std;

struct node
{
    int element_value;
    node *next;
};
node *head;

int main();
int insert_beg();
int count_elements();
int view();
int delete_beginning();
int reverse_linked_list();
int empty_linked_list();
int stack_top_element();
int stack_if_empty();

int stack_if_empty()
{
    if(head==NULL)
        cout<<"\nStack is currently empty!\n\n\n\n";
    else
    {
        cout<<"\nStack is NOT empty\n";
        int temp=count_elements();
        cout<<"\nThere are currently "<<temp<<" elements in the stack!\n\n\n\n";
    }
}
int stack_top_element()
{
    if(head==NULL)
        cout<<"\nStack is currenntly empty! No elementt at stack top.\n\n\n\n";
    else
    {
        node *temp=head;
        cout<<"\nElement at stack top is : "<<temp->element_value<<"\n\n\n\n";
    }
}

int main()
{
    int choice, temp;
    head = NULL;
    while(1)
    {
        cout<<"     *******   Linked List Implementation of Stack   *******  \n\n";
        cout<<"\n1. Push Element \n2. Pop Element \n3. View \n4. Count elements \n5. Current element at Stack Top\n6. Check if Stack is empty\n7. Empty Stack\n0. Exit\n";
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                insert_beg();
                break;
            case 2:
                delete_beginning();
                break;
            case 3:
                view();
                break;
            case 4:
                temp = count_elements();
                cout<<"\nThere are currently "<<temp<<" elements in Stack.\n\n\n\n";
                break;
            case 5:
                stack_top_element();
                break;
            case 6:
                stack_if_empty();
                break;
            case 7:
                empty_linked_list();
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

int insert_beg()
{
    int element;
    cout<<"\nEnter the element to insert : ";
    cin>>element;
    if(head == NULL)
    {
        node *temp = new node();
        temp->element_value = element;
        temp->next = NULL;
        head = temp;
    }
    else
    {
        node *temp = new node();
        temp->element_value = element;
        temp->next = head;
        head = temp;
    }
    cout<<"\nElement inserted successfully! \n\n\n\n";
}


int count_elements()
{
    node *temp = head; int no_of_elements=0;
    while(temp != NULL)
    {
        no_of_elements++;
        temp = temp->next;
    }
    return no_of_elements;
}
int delete_beginning()
{
    if(head == NULL)
    {
        cout<<"\nError Deleting. Stack is empty!\n\n\n\n";
    }
    else
    {
        node *temp = head;
        temp=temp->next;
        head = temp;
        /*node *temp = head; int i;
        for(i =0; i<1; i++)
        {
            temp = temp->next;
        }
        head = temp;*/
        cout<<"\nElement deleted successfully!\n\n\n\n";
    }
}

int view()
{
    node *temp; temp = head;
    if(temp == NULL)
        cout<<"\nStack is currently empty!\n\n\n\n";
    else
    {
        cout<<"\nElements currently in Stack are : \n";
        while(temp!= NULL)
        {
            cout<<temp->element_value<<"\t";
            temp = temp->next;
        }
        cout<<"\n\n\n\n";
    }
}

int empty_linked_list()
{
    if(head == NULL)
    {
        cout<<"\nStack is already empty! \n\n\n\n";
    }
    else
    {
        cout<<"\nStack trashed!\n\n\n\n";
        main();
    }
}


int reverse_linked_list()
{
    if(head == NULL)
    {
        cout<<"\nError! Stack is empty!\n\n\n\n";
    }
    else
    {
        node *current = head, *prev = NULL, *nextt; int i, tot = count_elements() + 1;
        while(current!=NULL)
        {
            nextt = current->next;
            current->next = prev;
            prev = current;
            current = nextt;
        }
        head = prev;
        cout<<"\nStack is reversed! \n\n\n\n";
    }
}
