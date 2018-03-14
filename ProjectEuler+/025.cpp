// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler025
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>n;
        unsigned long long result=((n-1)+((log10(5)) / 2))/ log10(1.618033988749948);
        if(n==1)
            result=0;
        cout << result+1 << endl;
    }
    return 0;
}