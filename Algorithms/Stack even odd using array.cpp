/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int SIZE = 10;
int stack_even[10];
int stack_odd[10];
int top_even=-1,top_odd=-1;

void push_even(int data){
    
    if (top_even>=SIZE-1){
        
        cout<<"Even stack is full"<<endl;
        
    }
    else{
        top_even++;
        stack_even[top_even]=data;
        cout<<"done !"<<endl;
    } 
    
}

void push_odd(int data){
    
    if (top_odd>=SIZE-1){
        
        cout<<"Odd stack is full"<<endl;
    }
    else{
        top_odd++;
        stack_odd[top_odd]=data;
        cout<<"done !"<<endl;
    } 
    
}

void pop_even(){
    
    if (top_even<=-1){
        
        cout<<"Even stack is empty"<<endl;
    }
    else{
        cout<<"The element is :"<<stack_even[top_even]<<endl;
        top_even--;
        cout<<"done !"<<endl;
    } 
    
}

void pop_odd(){
    
    if (top_odd<=-1){
        
        cout<<"Odd stack is empty"<<endl;
    }
    else{
        cout<<"The element is :"<<stack_odd[top_odd]<<endl;
        top_odd--;
        cout<<"done !"<<endl;
    } 
    
}

void display_even(){
    if(top_even>=0){
    for(int i=top_even;i>=0;i--){
        
       cout<<stack_even[i]<<" ";
       
    }
    cout<<endl;
}
else {
    
    cout<<"Even stack is empty"<<endl;
}

}

void display_odd(){
    if(top_odd>=0){
    for(int i=top_odd;i>=0;i--){
        
       cout<<stack_odd[i]<<" ";
       
    }
    cout<<endl;
}
else {
    
    cout<<"Odd stack is empty"<<endl;
}

}

void stack_empty_even(){
    
    if (top_even<=-1){
        
        cout<<"Yes"<<endl;
    }
    
    else {
        
        cout<<"No"<<endl;

    }
}

void stack_empty_odd(){
    
    if (top_odd<=-1){
        
        cout<<"Yes"<<endl;
    }
    
    else {
        
        cout<<"No"<<endl;

    }
}

void stack_full_even(){
    
    if (top_even>=SIZE-1){
        
        cout<<"Yes"<<endl;
    }
    
    else {
        
        cout<<"No"<<endl;

    }
}

void stack_full_odd(){
    
    if (top_odd>=SIZE-1){
        
        cout<<"Yes"<<endl;
    }
    
    else {
        
        cout<<"No"<<endl;

    }
}

void stack_element_even(){
    
    if (top_odd>=0){
        
        cout<<"Yes"<<endl;
    }
    
    else {
        
        cout<<"No"<<endl;

    }
}

void stack_element_odd(){
    
    if (top_odd>=0){
        
        cout<<"Yes"<<endl;
    }
    
    else {
        
        cout<<"No"<<endl;

    }
}

int main()
{
    int value,ch;
    while(ch !=12){
        cout<<"1) Push in stack"<<endl;
        cout<<"2) Pop from the even stack"<<endl;
        cout<<"3) Pop from the odd stack"<<endl;
        cout<<"4) Display the even stack"<<endl;
        cout<<"5) Display the odd stack"<<endl;
        cout<<"6) Is even stack empty ?"<<endl;
        cout<<"7) Is odd stack empty ?"<<endl;
        cout<<"8) Is even stack full ?"<<endl;
        cout<<"9) Is odd stack full ?"<<endl;
        cout<<"10) Is even stack has elements ?"<<endl;
        cout<<"11) Is odd stack has elements ?"<<endl;
        cout<<"12) Exit"<<endl;
        cout<<endl;
        cout<<"Enter choice : ";
        cin>>ch;
        cout<<endl;
        switch(ch){
            case 1:{
            cout<<"Enter the data to be pushed : "<<endl;
            cin>>value;
            if(value%2 ==0){
            push_even(value);
            }
            else{
            push_odd(value);   
            }
            cout<<endl;
            break;
            }
            case 2:{
            pop_even();
            cout<<endl;
            break;
            }
            case 3:{
            pop_odd();
            cout<<endl;
            break;
            }
            case 4:{
            cout<<"Your even stack is :"<<" ";
            display_even();
            cout<<endl;
            break;
            }
            case 5:{
            cout<<"Your odd stack is :"<<" ";
            display_odd();
            cout<<endl;
            break;
            }
            case 6:{
            stack_empty_even();
            cout<<endl;
            break;
            }
            case 7:{
            stack_empty_odd();
            cout<<endl;
            break;
            }
            case 8:{
            stack_full_even();
            cout<<endl;
            break;
            }
            case 9:{
            stack_full_odd();
            cout<<endl;
            break;
            }
            case 10:{
            stack_element_even();
            cout<<endl;
            break;
            }
            case 11:{
            stack_element_odd();
            cout<<endl;
            break;
            }
            default: {
            cout<<"Invalid Choice"<<endl<<endl;
         }
        }
    }

    return 0;
}
