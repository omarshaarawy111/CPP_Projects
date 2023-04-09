#include <iostream>
#include <string.h>
#include <stdbool.h>
using namespace std;
int main()
{   unsigned char x=0;
    unsigned char y=0;
    unsigned char z=0;
    unsigned char a=0;
    unsigned int  b=0;
    unsigned int patients=0,i=0,flag=0;
    string username[100];
    string usrn;
    string medicine[100];
    string message[100];
    unsigned long long password[100];
    unsigned long long pass;
    while(1){
    cout<<endl;

    cout <<"Welcome to doctor appointment application"<<endl<<endl;
    cout<<"_________________________________________"<<endl<<endl;
    cout<<"If you are doctor  please press 1"<<endl<<endl;
    cout<<"If you are patient please press 2"<<endl<<endl;
    cout<<endl<<endl;
    cin>>x;
    cout<<"_________________________________________"<<endl<<endl;
    if(x=='1'){
     flag=0;
     cout<<" welcome doctor "<<endl<<endl;
     cout<<" To create new patients id press 1"<<endl<<endl;
     cout<<" To delete patient id press 2"<<endl<<endl;
     cout<<" To write medicines to current patient and read his message press 3"<<endl<<endl;
     cout<<endl<<endl;
     cin>>y;
     cout<<"_________________________________________"<<endl<<endl;
     if (y=='1' ){
       flag=0;
       cout<<endl<<endl;
       cout<<" Enter the number of patients : ";
       cin>>patients;
       cout<<endl<<endl;
       if (patients !=0){
       for (i=0;i<patients;i++){
       cout<<" User name "<<i+1<<" : ";
       cin>> username[i];
       cout<<endl<<endl;
       cout<<" Password "<<i+1<<" : ";
       cin>>password[i];
       cout<<"_________________________________________"<<endl<<endl;
       }
       }
       else {
        cout<<" Valid number"<<endl<<endl;
        cout<<"_________________________________________"<<endl<<endl;
       }
     }
     else if (y=='2'){
      flag=0;
      cout<<" Enter the user name you want to delete : ";
      cin>>usrn;
      cout<<endl<<endl;
      cout<<" Enter the password : ";
      cin>>pass;
      cout<<endl<<endl;
      for(i=0;i<patients;i++){
      if ((usrn==username[i]) &&(pass==password[i]) )  {
        username[i]='\0';
        password[i]=0;
        medicine[i]='\0';
        message[i]='\0';
        cout<<" All user details have been deleted"<<endl<<endl;
        cout<<"_________________________________________"<<endl<<endl;
        flag=1;
        break;
      }
      }
      if(flag==0) {
        cout<<" Wrong user name or password try again"<<endl<<endl;
        cout<<"_________________________________________"<<endl<<endl;
      }
     }
     else if (y=='3'){
        flag=0;
        cout<<" Enter the user name of patient : ";
        cin>>usrn;
        cout<<endl<<endl;
        cout<<" Enter the password  of patient : ";
        cin>>pass;
        cout<<endl<<endl;
        for(i=0;i<patients;i++){
        if ((usrn==username[i])&&(pass==password[i])){
        flag=1;
        break;
        }
        }
        if (flag==1){
        cout<<" To recommend medicines to patient press 1 : "<<endl<<endl;
        cout<<" To read patient messages press 2 : "<<endl<<endl;
        cout<<endl<<endl;
        cin>>a;
        cout<<"_________________________________________"<<endl<<endl;
        if (a=='1'){
            cout <<" Enter the medicine you recommended to patient : ";
            cin >>medicine[i-1];
            cout<<"_________________________________________"<<endl<<endl;
        }
        else if (a=='2'){
            cout<<" The message that user sent to you is : ";
            cout<<message[i];
            cout<<endl<<endl;
            cout<<"_________________________________________"<<endl<<endl;
        }
        else {
           cout<<" Wrong choice"<<endl<<endl;
           cout<<"_________________________________________"<<endl<<endl;
        }
        }
        else if (flag==0){
            cout<<" Wrong user name or password try again"<<endl<<endl;
            cout<<"_________________________________________"<<endl<<endl;
        }
     }
     }
    else if (x=='2') {
         flag=0;
         cout<<" Welcome patient ... We hope you good health"<<endl<<endl;
         cout<<" Enter the user name : ";
         cin>>usrn;
         cout<<endl<<endl;
         cout<<" Enter the password : ";
         cin>>pass;
         cout<<endl<<endl;
         for(i=0;i<patients;i++){
         if ((usrn==username[i])&&(pass==password[i])){
           flag=1;
           break;
         }
         }
            if (flag==1){
            cout<< " To check medicines recommended by doctor press 1"<<endl<<endl;
            cout<< " To send message to doctor press 2"<<endl<<endl;
            cout<<endl<<endl;
            cin>>z;
            cout<<endl<<endl;
            if (z=='1'){
               cout<<" The medicine that doctor recommended them to you are : "<<medicine[i-1]<<endl<<endl;
               cout<<"_________________________________________"<<endl<<endl;
            }
            else if (z=='2'){
                cout<<" Enter your massage to doctor : ";
                cin>>message[i];
                cout<<endl<<endl;
                cout<<"_________________________________________"<<endl<<endl;
            }
            else {
             cout<<" Wrong choice"<<endl<<endl;
             cout<<"_________________________________________"<<endl<<endl;
            }
        }
        else if (flag==0){
             cout<<" Wrong user name or password try again"<<endl<<endl;
             cout<<"_________________________________________"<<endl<<endl;
        }
    }
    else {
     cout<<"wrong choice"<<endl<<endl;
     cout<<"_________________________________________"<<endl<<endl;
    }
    }
    return 0;
}
