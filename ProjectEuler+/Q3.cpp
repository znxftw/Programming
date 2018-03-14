// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler003
#include <math.h>
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long max=n%2?1:2;
        if(max==2)
            while(!(n%2))
                n/=2;
        int temp;
        for(long i=3;i<=sqrt(n);i+=2){
            temp=0;
            if(n%i==0){
                n/=i;
                max=i;
                i=1;
            }
        }
        max=n>max?n:max;
        printf("%ld\n",max);
    }
    return 0;
}