// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler022
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int value,n,q;
    vector <string> names;
    string name;
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        cin>>name;
        names.push_back(name);
    }
    for(int i=0;i<names.size();++i)
    {
        int max=i;
        for(int j=i+1;j<names.size();++j)
            if(names[max].compare(names[j])>0)
                max=j;
        if(max!=i)
        {
             name=names[max];
             names[max]=names[i];
             names[i]=name;
        }
    }
    scanf("%d",&q);
    for(int i=0;i<q;++i)
    {
        cin>>name;
        for(int j=0;j<names.size();++j)
        {
            if(names[j].compare(name)==0)
            {
                value=0;
                for(int k=0;name[k]!='\0';++k)
                    value+=toupper(name[k])-'A'+1;
                cout<<value*(j+1)<<endl;
                break;
            }
        }
    }
    return 0;
}
