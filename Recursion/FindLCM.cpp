#include<bits/stdc++.h>

using namespace std;

int findGCD(int a, int b) {
    if(b>a) return findGCD(b,a);
    if(b==0) return a;
    else return findGCD(b,a%b);
}

int findLCM(int a, int b)
{
    return a*b/findGCD(a,b);    
}

int main() {
    cout << findLCM(10,102);
    return 0;
}