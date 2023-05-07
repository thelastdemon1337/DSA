#include <iostream>
using namespace std;


int main() {
  
  // int n;
  // cin>> n;
  // int arr[n];
  // int subArray[n*(n+1)/2];
  // cout<<"No. of sub Arrays : "<<n*(n+1)/2<<endl;
  // for(int i = 0; i < n; i++) cin >>arr[i];
  
  // Max sum till i :  1 0 5 4 6 8
  
  // int length = sizeof(arr)/sizeof(int);
  int mx = 0;

  // for(int i = 0; i < length; i++) {
  //   if(arr[i] > max) max = arr[i];
  //   cout<<"Max till "<<i<<" : "<<max<<endl;
  // }
  // int k = 0;
  // Sum of all sub arrays : 1 2 0 7 2
  // for(int i = 0; i < n; i++) {
  //   k = 0;
  //   for(int j = i; j < n; j++) {
  //     k += arr[j];
  //     cout<<k<<endl;
  //     max += k;
  //   }
  // }
  // cout<<"max : "<<max<<endl;

  // Longest arithmetic sub array length : 10 7 4 6 8 10 12 11
  // int pcd = arr[1] - arr[0];
  // int max_length = 2;
  // int curr_length = 2;
  // int j = 2;

  // while(j < n) {
  //   int cd = arr[j] - arr[j-1];
  //   if(pcd == cd) curr_length++;
  //   else {
  //     pcd = cd;
  //     curr_length = 2;
  //   }
  //   max_length = max(max_length, curr_length);
  //   j++;
  // }

  // cout<<max_length<<endl;

  // Record breaking day : 1 2 0 7 2 0 2 9 2
  // 1. visitor count Strictly greater than all previous days
  // 2. should be greater than following day
  int n;
  cin>> n;
  int arr[n+1];
  for(int i = 0; i < n; i++) cin >>arr[i];
  arr[n] = -1;
  
  int recordBreakingDay = 0;
  for(int i = 0; i < n; i++) {
    if(arr[i] > mx && arr[i] > arr[i+1]) {
      recordBreakingDay++;
    }
    mx = max(mx,arr[i]);
  }
  cout<<recordBreakingDay<<endl;
}