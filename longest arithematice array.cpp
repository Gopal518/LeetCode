#include <iostream>
using namespace std;

int main (){
    int n = 10;
    int arr[n] = {4,5,7,2,3,4,5,8,8,9};
    int temp_arr_size = 0 ;

    for (int i = 0; i<n-2;i++){
        int diff1 = 0;
        int diff2 = 0;
        int count = 2;
        for(int j = i; j<n-2; j++){
            diff1 = arr[j+1] - arr[j];
            diff2 = arr[j+2] - arr[j+1];
            if(diff1 == diff2){
                count = count + 1;
            }
        }
        if (temp_arr_size < count){ 
            temp_arr_size = count;
        }
        
        }
    cout<<temp_arr_size<<"done"<<endl;
    return 0;
}