#include<iostream>
using namespace std;

/*
        *****
        *****
        *****
        *****
        *****

5x5
*/



int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<'\n';     
    }
}

/* 
using while loop

int i = 0;
while(i<n){
    int j=0;
    while(j<n){
        cout<<"*";
        j++;
    }
    i++;
    cout<<endl;
}

*/