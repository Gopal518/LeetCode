#include <iostream>
#include <string>
using namespace std;

void traversal(int arr[],int size){
    int i; 
    for(i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

void insertion(int ind,int value, int size,int arr[]){
    for(int i=size-1;i>=ind;i--){
        arr[i+1] = arr[i];
    }
    arr[ind] = value;
    
}

void deletion(int arr[], int ind, int size){
    for(int i=ind;i<size;i++){
        arr[i]=arr[i+1];
    }
    
}

void index_search(int arr[], int ind, int size){
    if (ind < size){
        cout<<"value at index :"<<ind<<" is : "<<arr[ind]<<endl;
    }
    else{
        cout<<"Invalid array index"<<endl;
    }
}

void value_search(int arr[], int value, int size){
    int temp;
    for(int i=0;i<size;i++){
        if (value == arr[i]){
            cout<<value<<" is present in array at index: "<<i<<endl;
            break;
        }
        temp = i;
   }
    if(temp==(size-1)){
            cout<<value<<" is not in the array"<<endl;
        }
    
}


int main(){
    int arr[10] = {1,2,4,5,6,7,8,9};
    deletion(arr,3,8);
    insertion(0,150,8,arr);
    traversal(arr,10);
    value_search(arr,10,8);
    index_search(arr,4,8);

    return 0;
}