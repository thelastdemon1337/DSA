#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
  for(int i = 0; i < n; i++) {
    if(arr[i] == key) return i;
  }
  return -1;
}

int binarySearch(int arr[], int n, int key) {
  int s = 0;
  int e = n;

  while(s <= e) {
    int mid = (s+e)/2;
    if(arr[mid] == key) return mid;
    else if (arr[mid] > key) e = mid-1;
    else s = mid+1;
  }
  return -1;
}

int main() {
  int key;
  cin >> key;
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int len = sizeof(arr) / sizeof(int);
  
  cout<< endl;
  // cout<<"Paramters : "<<"size - "<<len<<", key - "<<key<<endl;
  cout<<"Linear Search : "<<linearSearch(arr, len, key)<<endl;
  cout<<"Binary Search : "<<binarySearch(arr, len, key);
  cout<<endl;
}