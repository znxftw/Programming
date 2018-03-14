// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler009
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int tot=-1;
        for(int i=1;i<=n/3;++i){        
		int j = (n*n-2*n*i)/(2*n-2*i);
                 int k=n-i-j;
                 if(i*i+j*j==k*k)
                    tot=tot>i*j*k?tot:i*j*k;
        }
        cout<<tot<<endl;
    }
    return 0;
}