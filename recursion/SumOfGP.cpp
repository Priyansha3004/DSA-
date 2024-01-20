#include<iostream>
using namespace std;

int sumofGP(int a, int r, int n){
   if(n==0){
       return 0;
   }
   return a + sumofGP(a*r, r, n-1);
}

int main(){
   int firstTerm = 2;
   int commonRatio = 3; 
   int numberOfTerms = 5; 

   int sum = sumofGP(firstTerm, commonRatio, numberOfTerms);
   cout << "Sum of GP: " << sum << endl;
   return 0;
}
