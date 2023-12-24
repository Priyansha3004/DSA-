#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// TOWER OF HANOI 
void towerOfHanoi(int n, char s, char h, char d)
    //n is the number of disk :: s is the starting point :: h is the helper :: d is teh destination 
 {
    if (n == 1) {
        cout << "Move disk 1 from " << s << " to " << d << endl;
        return;
    }
    towerOfHanoi(n - 1, s, d, h);
    //(n-1) means excluding the last disk 
    cout << "Move disk " << n << " from " << s << " to " << d << endl;
    towerOfHanoi(n - 1, h, s, d);
    //recursion is used 
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}