// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler011
#include <iostream>
using namespace std;
int main(){
    int grid[27][27]={0};
    int max=0;
    for(int i=0;i<=26;++i)
        for(int j=0;j<=26;++j)
            grid[i][j]=1;
    for(int i=3;i<=22;++i)
        for(int j=3;j<=22;++j)
            scanf("%d",&grid[i][j]);
    for(int i=3;i<=22;++i)
        for(int j=3;j<=22;++j)
        {
            if(grid[i+1][j]*grid[i+2][j]*grid[i+3][j]*grid[i][j]>max)
                max=grid[i+1][j]*grid[i+2][j]*grid[i+3][j]*grid[i][j];
            if(grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3]*grid[i][j]>max)
                max=grid[i+1][j+1]*grid[i+2][j+2]*grid[i+3][j+3]*grid[i][j];
            if(grid[i][j+1]*grid[i][j+2]*grid[i][j+3]*grid[i][j]>max)
                max=grid[i][j+1]*grid[i][j+2]*grid[i][j+3]*grid[i][j];
            if(grid[i][j-1]*grid[i][j-2]*grid[i][j-3]*grid[i][j]>max)
                max=grid[i][j-1]*grid[i][j-2]*grid[i][j-3]*grid[i][j];
            if(grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3]*grid[i][j]>max)
                max=grid[i+1][j-1]*grid[i+2][j-2]*grid[i+3][j-3]*grid[i][j];
        }
    cout<<max<<endl;
    return 0;
}