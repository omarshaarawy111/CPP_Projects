/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
#define SIZE 100
int stack[SIZE],top=-1;

void push(int data){
    
    if (top>=SIZE-1){
        
        cout<<"Stack is full"<<endl<<endl;
    }
    else{
        top++;
        stack[top]=data;
    } 
    
}

void pop(){
    
    if (top<=-1){
        
        cout<<"Stack is empty"<<endl<<endl;
    }
    else{
        cout<<"The element is :"<<stack[top]<<endl<<endl;
        top--;
    } 
    
}

void display(){
    if(top>=0){
    for(int i=top;i>=0;i--){
        
       cout<<stack[i]<<" ";
       
    }
    cout<<endl<<endl;
}
else {
    
    cout<<"Stack is empty"<<endl<<endl;
}

}

void stack_empty(){
    
    if (top<=-1){
        
        cout<<"Stack is empty"<<endl<<endl;
    }
    
    else {
        
        cout<<"Stack is full"<<endl<<endl;

    }
}


int main()
{
    int value,ch;
    do{
        cout<<"1) Push in stack"<<endl<<endl;
        cout<<"2) Pop from stack"<<endl<<endl;
        cout<<"3) Display the stack"<<endl<<endl;
        cout<<"4) Check if is it empty ?"<<endl<<endl;
        cout<<"5) Exit"<<endl<<endl;
        cout<<"Enter choice :"<<endl<<endl;
        cin>>ch;
        cout<<endl<<endl;
        switch(ch){
            case 1:{
            cout<<"Enter the data to be pushed"<<endl<<endl;
            cin>>value;
            push(value);
            cout<<endl<<endl;
            break;
            }
            case 2:{
            pop();
            cout<<endl<<endl;
            break;
            }
            case 3:{
            cout<<"Your stack is :"<<" ";
            display();
            cout<<endl<<endl;
            break;
            }
            case 4:{
            stack_empty();            
            cout<<endl<<endl;
            break;
            }
            default: {
            cout<<"Invalid Choice"<<endl<<endl;
         }
        }
    }while(ch !=5);

    return 0;
}
