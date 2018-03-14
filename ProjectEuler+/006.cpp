// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler006
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        unsigned long long int n;
        cin >> n;
        unsigned long long int tot=(n*(n+1)/2)*(n*(n+1)/2)-n*(n+1)*(2*n+1)/6;
        cout<<tot<<endl;
    }
    return 0;
}