// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler002
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n,a=0,b=1,sum=0;
        cin >> n;
        while(b<n){
            a=a+b;
            if(a%2==0 && a<n)
                sum+=a;
            b=a+b;
            if(b%2==0 && b<n)
                sum+=b;
        }
        cout<<sum<<endl;
    }
    return 0;
}