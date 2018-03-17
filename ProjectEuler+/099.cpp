// Question : https://www.hackerrank.com/contests/projecteuler/challenges/euler099
#include <cmath>
#include <iostream>
using namespace std;
void swap(double *a, double *b)
{
  double t=*b;
  *b=*a;
  *a=t;
}
int partition(double a[], int lb, int ub)
{
  int low=lb,high=ub;
  double pivot=a[lb];
  while(low<high){
    while(a[low] <= pivot && low < ub)
      ++low;
    while(a[high] > pivot)
      --high;
    if(low<high)
      swap(&a[high],&a[low]);
  }
  swap(&a[lb],&a[high]);
  return high;
}
void QuickSort(double a[], int lb, int ub)
{
  if(lb >= ub)
    return;
  int part=partition(a,lb,ub);
  QuickSort(a,lb,part-1);
  QuickSort(a,part+1,ub);
  return;
}
int main() {
    int n;
    cin >> n;
    long int b[n],e[n];
    double arr[n];
    double map[n];
    for(int i=0;i<n;++i){
        cin >> b[i] >> e[i];
        arr[i] = e[i] * log(b[i]);
        map[i] = arr[i];
    }
    int k;
    cin >> k;
    QuickSort(arr,0,n-1);
    double max = arr[k-1];
    for(int i=0;i<n;++i){
        if(map[i] == max){
            cout << b[i] << " " << e[i];
            break;
        }
    }
    return 0;
}
