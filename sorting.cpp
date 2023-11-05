#include<iostream>
using namespace std;

void selection_sort(int n,int arr[]){
    for (int i = 0; i<n;i++){
        for(int j = i+1; j<n; j++){
            if ( arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void bubble_sort(int n, int arr[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void insertion_sort(int n, int arr[]){
    for(int i = 1;i<n;i++){
        int current = arr[i];
        int j = i - 1;
        while( arr[j] > current && j>=0 ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(n,arr);
    cout<<"sorted arr"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}