#include<iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
long long convert(int n);
int main() {
    int n;
    cin>>n;
cout<<convert(n)<<endl;
    return 0;
}

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n =n/2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
