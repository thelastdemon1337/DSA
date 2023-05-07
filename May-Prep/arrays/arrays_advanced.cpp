#include <iostream>
#include "limits.h"
using namespace std;

int main() {
  // First occurance of a repeating integer
  // 1 5 3 4 3 5 6
  // 0 1 2 3 4 5 6
  // Ans : 1

  int n;
  cin >>n;
  int arr[n];
  for(int i = 0; i < n; i++) cin>>arr[i];

  int N = 1e6 + 2;
  int idx[N];
  for(int i = 0; i < n; i++) idx[i] = -1;

  int min_index = INT_MAX;

  for(int i = 0; i < n; i++) {
    if(idx[arr[i]] != -1) {
      min_index = min(min_index, idx[arr[i]]);
    } else {
      idx[arr[i]] = i; 
    }
  }
  if(min_index != INT_MAX) cout << min_index<<endl;
  else cout<< "-1"<<endl;
}