#include<iostream>
using namespace std;

int main(){
    int n, find_val;
    int arr[n];
    cin>>n;
    for (int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"find value"<<endl;
    cin>>find_val;
    int start = 0;
    int end = n;
    while(start < end){
        int mid = (start + end)/2;
        if (find_val == arr[mid]){
            cout<<"found_value"<<mid<<endl;
            break;
        }
        else if (find_val > arr[mid]){
            start = mid + 1;
        }
        else if (find_val < arr[mid]){
            end = mid -1 ;
        }
    }
    return 0;
}