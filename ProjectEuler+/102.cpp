// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler102
#include <cmath>
#include <iostream>
double area(long int x1,long int y1,long  int x2, long int y2, long int x3, long int y3)
{
   return fabs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
using namespace std;
int main() {
    long int n, x1, x2, x3, y1, y2, y3, count=0;
    double ar[4];
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        ar[0] = area(x1,y1,x2,y2,x3,y3);
        ar[1] = area(0,0,x2,y2,x3,y3);
        ar[2] = area(x1,y1,0,0,x3,y3);
        ar[3] = area(x1,y1,x2,y2,0,0);
        if(ar[1] + ar[2] + ar[3] == ar[0])
            count++;
    }
    cout << count << endl;
    return 0;
}