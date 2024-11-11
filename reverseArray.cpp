#include<iostream>
using namespace std;

int main(){
    
    // reverse an array

    int arr1[5] = {1,2,3,4,5};

    int arr2[6] = {6,7,8,9,10,11};

    for(int i=0,j=5;i<j; i++,j--){
        int temp = arr2[i];
        arr2[i] = arr2[j];
        arr2[j] = temp;
    }

    for(int i=0;i<6; i++){
        cout<<"   "<<arr2[i];
    }

}