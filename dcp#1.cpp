/* 

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

*/


#include<iostream>
using namespace std;

int main(){

    int arr[5] = {10, 15, 3, 9, 20};
    int k = 17;
    bool x = false;
    for(int i=0; i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j] == k){
                x = true;
                break;
            }
        }
        if(x) break;
    }
    cout<<"Result is : "<<x;
    return 0;
}
