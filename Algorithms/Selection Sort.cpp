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


int main(){
    
    int array[5];
    int size_of_array=sizeof(array)/sizeof(array[0]);
    while(1){
    cout<<endl;
    cout<<"Enter the data to be sorted"<<endl;
    for(int i=0;i<size_of_array;i++){
        
        cin>>array[i];
    }
    cout<<endl;
    selection_sort(array,size_of_array);
    cout<<"The data after sorted"<<endl;
    
    print_array(array,size_of_array);
    
    }
    
    
    
    return 0;
}