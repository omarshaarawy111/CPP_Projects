/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int binary_search(int arr[],int low,int high,int expected){
    
    
    while(low <= high){
        
        int mid=low+(high-low)/2;
        
        if(arr[mid]==expected)
            
            
          return mid;  
            
        
        
        if (arr[mid]<expected)
            
            low=mid+1;
             
        
       else 
           
           
           high=mid-1;
        
        
    }
    
    
    return -1;
    
    
}


int main(){
    
    int array[5];
    int x,result;
    int size_of_array=sizeof(array)/sizeof(array[0]);
    cout<<"Enter the sorted data"<<endl;
    for(int i=0;i<size_of_array;i++){
        
        cin>>array[i];
    }
    cout<<endl;
    while(1){
    
    cout<<"Enter the value you want to search"<<endl;
    cin>>x;
    cout<<endl;
    result=binary_search(array,0,size_of_array,x);
    if (result==-1){
        
        cout<<"The value you search is not found"<<endl<<endl;
    }
    else
    {
        cout<<"The value you search is at location :"<<" "<<result<<endl<<endl;

        
    }
    }
    return 0;
}