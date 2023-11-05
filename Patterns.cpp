#include<iostream>

using namespace std;

void rectangle(int a, int b){

    for (int i = 0;i<a;i++){
        for (int j = 0; j< b; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void hollow_rectangle(int a, int b){

    for (int i = 0;i<a;i++){
        for (int j = 0; j< b; j++){
            if (i == 0 | i == (a-1)){
                    cout<<"*";
            }
            else{
                if (j == 0 | j == (b-1)){
                    cout<<"*";
                    }

                else{
                    cout<<" ";
                }
        }
        
    }
    cout<<endl;
}
}

void piramid(int a){

    for (int i = 0;i<a;i++){
        for (int j = 0; j<i ; j++){
            cout<<"*";
        }
    cout<<endl;
}
}

void inverted_piramid(int a){

    for (int i = a;i>0;i--){
        for (int j = i ; j>0 ; j--){
            cout<<"*";
        }
    cout<<endl;
}
}
void floyds_piramid(int a){
    int count = 0;
    for (int i = 0; i<a ;i++){
        for (int j = 0 ; j<i ; j++){
            count = count + 1;
            cout<<count<<" ";
        }
    cout<<endl;
}
}


void butterfly(int a){
    for (int i = a ; i>0 ; i--){
        int val = (2*a - 2*i)/2 ;
        for( int j = 0 ; j < 2*a ; j ++){
            if( j < val || j > (2*a-val-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
        for (int i = 0; i<a ; i++){
        int val = (2*a - 2*i)/2 ;
        for( int j = 0 ; j < 2*a ; j ++){
            if( j < val || j > (2*a-val-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void diamond(int a){
    for (int i = 0 ; i< a ; i++){
        for (int j =0;j<a-i;j++ ){
            cout<<" ";
        }
        for(int j= 0; j<i;j++){
            cout<<"*";
            }
        for(int j=a; j>a-i-1;j--){
            cout<<"*";
            }
        cout<<endl;
    }
    for (int i = a ; i>0 ; i--){
        for (int j =0;j<a-i;j++ ){
            cout<<" ";
        }
        for(int j= 0; j<i;j++){
            cout<<"*";
            }
        for(int j=a; j>a-i-1;j--){
            cout<<"*";
            }
        cout<<endl;
    }
}

void zigzag(int a){
    for (int i = 1 ; i<= 3 ; i++){
        for (int j =1;j<=a;j++ ){
            if ((i+j)%4==0 | (i==2 & j%4 == 0 )){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;   
    }

}


int main(){
    zigzag(15);

    return 0;
}