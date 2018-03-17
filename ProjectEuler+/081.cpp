// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler081
#include <climits>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    unsigned long long arr[n][n];
    for(int i = 0 ; i < n; ++i){
        for(int j = 0 ; j < n; ++j){
            cin >> arr[i][j];
        }
    }
    for(int i = n-1 ; i >= 0; --i){
        for(int j = n-1 ; j >= 0; --j){
            unsigned long long right = j == n-1 ? ULLONG_MAX : arr[i][j+1];
            unsigned long long bottom = i == n-1 ? ULLONG_MAX : arr[i+1][j];
            if(i == j && i == n-1)
                continue;
            arr[i][j] += right > bottom ? bottom : right;
        }
    }
    cout << arr[0][0];
    return 0;
}
