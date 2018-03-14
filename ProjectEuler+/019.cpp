// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler019
#include <iostream>
using namespace std;
int main() {
    int h,t,m1,m2,d1,d2;
    unsigned long long y1,y2;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int count=0;
        h=0;
        scanf("%llu %d %d %llu %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
        if(d1!=1)
            m1++;
        if(m1==13)
        {
            m1=1;
            y1++;
        }
        while(1)
        {
            unsigned long long z , m=m1, y=y1;
            if(m1==1 || m1==2)
            {
                m=m1+12;
                y--;
            }
            z = 13 * (m+1)/5;
            h=(unsigned long long)(1 + z + y + (unsigned long long)(y/4) - (unsigned long long)(y/100) + (unsigned long long)(y/400))%7;
            if(h==1)
                count++;
            if(y1==y2 && m1==m2)
                break;
            m1=m1==12?1:m1+1;
            if(m1==1)
                y1++;
        }
        cout<<count<<endl;
    }
    return 0;
}