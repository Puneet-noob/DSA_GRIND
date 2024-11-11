#include<iostream>
using namespace std;


int power(int x, int y){
    int res = 1;
    for(int i = 1; i<=y; i++){
        res = res*x;
    }

    return res;
}

int main(){

    int x;
    int y;

    cin>>x;
    cin>>y;

    int result = power(x,y);

    cout<<result;
    return 0;
}