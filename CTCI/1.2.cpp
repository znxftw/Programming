/*
Given two strings, write a method to determine if one is a permutation of the other
*/
#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isPerm(string str1, string str2){
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	if(!str1.compare(str2))
		return true;
	return false;
}

int main()
{
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	if(isPerm(str1,str2)){
		printf("Two strings are permutations");
		exit(0);
	}
	printf("Two strings are not permutations");
}
