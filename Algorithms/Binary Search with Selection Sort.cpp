/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;




#include <iostream>
using namespace std;


void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void print_array(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selection_sort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_index = step;
    for (int i = step + 1; i < size; i++) {

      
      if (array[i] < array[min_index])
        min_index = i;
    }

    
    swap(&array[min_index], &array[step]);
  }
}

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
   
    cout<<endl;
    cout<<"Enter the data to be sorted"<<endl;
    for(int i=0;i<size_of_array;i++){
        
        cin>>array[i];
    }
    cout<<endl;
    selection_sort(array,size_of_array);
    cout<<"The data after sorted"<<endl;
    print_array(array,size_of_array);
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