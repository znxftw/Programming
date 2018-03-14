// Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	getline(cin,str);
	sort(str.begin(),str.end());
	for(int i=0;i<str.length()-1;++i)
		if(str[i] == str[i+1])
		{
			printf("Not unique characters");
			exit(0);
		}
	printf("All unique characters");
	return 0;
}
