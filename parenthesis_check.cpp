//This program checks if the parenthesis order is correct of not.

#include <iostream>

using namespace std;

void push(char);
void pop();
void view();


char ary[100];
int top=-1;

int main()
{
    int tot_ele;
    cout<<"\nHow many elements (enter integer value here): ";
    cin>>tot_ele;
    char arr[tot_ele];
    cout<<"\nEnter the array elements: ";

    for(int i=0;i<tot_ele;++i)
    {
        cin>>arr[i];
    }

    cout<<"\nYou entered: \n\n";
    for(int i=0;i<tot_ele;++i)
    {
        cout<<arr[i]<<"\t";
    }

    cout<<"\n\n\n\nValidating Expression . . . \n\n\n\n";
    for(int i=0;i<tot_ele;++i)
    {
        if(arr[i] == '(' || arr[i] == '{' || arr[i] == '[')
        {
                push(arr[i]);
                view();
        }

        else
        {
            if(  (arr[i] == ')' && ary[top] == '(' ) || (arr[i] == '}' && ary[top] == '{' ) || (arr[i] == ']' && ary[top] == '[') )
            {
                pop();
                view();
            }

//
        }

    }

    if(top==-1 && (tot_ele %2 == 0)  )
        cout<<"\n\nThe given expression is valid. (yayy!)\n";
    else
        cout<<"\n\nThe given expression is NOT valid. :( \n";



    cout<<endl<<endl;
    return 0;
}

void push(char x)
{
    if(top == 99)
        cout<<"\n\nError Pushing, Stack overflow!\n\n";
    else
    {
        ary[++top] = x;
    }
}

void pop()
{
    if(top == -1)
        cout<<"\n\nError Popping, Stack Empty!\n\n";
    else
    {
        top= top-1;
    }
}

void view()
{
    for(int i=top; i>=0; --i)
        cout<<ary[i]<<"\t";
    cout<<"\n\n";
}
