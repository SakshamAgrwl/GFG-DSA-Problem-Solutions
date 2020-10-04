#include <iostream>
using namespace std;
#define max 100
int stack[max], top=-1;
void push(int val)
{
   cout<<"Enter value to be pushed:"<<endl;
   cin>>val;
   if(top>=max-1)
      cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop()
{
   if(top<=-1)
      cout<<"Stack Underflow"<<endl;
   else
   {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }

}
void display()
 {
   if(top>=0)
    {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
         cout<<stack[i]<<" ";
         cout<<endl;
   }
   else
      cout<<"Stack is empty";
}
void peek()
{
    if(top<=-1)
        cout<<"the stack is underflow";
    else

        cout<<"The top element is \t"<<stack[top]<<endl;

}
int main()
{
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   cout<<"5) peek"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {

            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         case 5:
            {
                peek();
                break;
            }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
      return 0;
}
