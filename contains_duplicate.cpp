#include <iostream>
using namespace std;

int dup(int arr[] , int n){
    int k = 0 ;
    for(int i = 0 ; i < n ; i++){

        for(int j = i+1 ; j<n ; j++){
            if (arr[i] ==  arr[j]){
                k++;
            }

        }
    }
    if(k == 0){
        cout<<"false" ;
    }
    else{
        cout<<"true";
    }
    return  0;
}

int main(){
    int arr[5] = {9,2,0,1,3};
    int n = 5;
    dup(arr,n);
    return 0 ;
}