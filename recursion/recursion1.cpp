#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int factorial(int n){
    //for n, a call is made to factorial(n-1)
    //1) a base case 
    if(n==0){
        return 1;
    }

    //2)Recursive call
    int x=factorial(n-1);

    //3)current Work 
    return x*n;
}

int main(){
    cout <<factorial (10);
    return 0;
}
