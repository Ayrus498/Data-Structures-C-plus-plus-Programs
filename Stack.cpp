#include<iostream>
using namespace std;
#define Max 100 // Array maximum size

int stackarray[Max]; // Stack array variable to store values
int top=-1; // Stack index tracker

// Stack class 
class stack
{
    public:
        void push(int value) // Push method for stackarray
        {   
            if(top>=Max)
            {
                cout<<"[Info] Stack is Full"<<endl;
            }
            else
            {
                top=top+1;
                stackarray[top]=value; // Store the value
            }
        }

        void pop() // pop method for stackarray
        {
            if(top==-1)
            {
                cout<<"[Info] Stack is Empty nothing to pop"<<endl;
            }
            else
            {
                stackarray[top]=0;
                top=top-1;
                cout<<"[Info] One Element successfully poped from the stack"<<endl; 
            } 
        }

        void View() // View function
        {
            if(top==-1)
            {
                cout<<"[Info] Stack is empty nothing to display"<<endl;
            }
            else
            {
                for(int index=top;index>=0;index--) // display the stackarray
                {
                    cout<<stackarray[index]<<endl;
                }
            }
        }
};

int main()
{
    stack Object;
    int option=0,Number,Val;
    while(1)
    {
        cout<<"************** Stack **************"<<endl;
        cout<<"Choose the option \n 1. Push \n 2. Pop \n 3. View Stack"<<endl;
        cout<<"***********************************"<<endl;
        cout<<"Enter the option:";
        cin>>option;
        // Receive option and call methods accordingly
        switch (option)
        {
            case 1: // push method
                cout<<"How many values you want to push:";
                cin>>Number;
                for(int index=0;index<Number;index++) // push number of elements to stack
                {
                    cout<<"Enter the value for the stack push:";
                    cin>>Val;
                    Object.push(Val);
                }
                break;
            case 2: // pop method
                Object.pop();
                break;
            case 3: // view method
                Object.View();
                break;
            default:
                break;
        }
    }
}
