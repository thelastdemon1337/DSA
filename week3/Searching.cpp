#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

int binarySearch(int arr[],int n, int key){
    int s = 0;
    int e = n;

    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) e = mid-1;
        else s = mid+1;
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../week1/input.txt","r", stdin);
        freopen("../week1/output.txt","w", stdout);
    #endif

    int n,key;
    cin>>n;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>key;

    cout<<"Linear Search: "<<linearSearch(arr,n,key)<<endl;
    cout<<"Binary Search: "<<binarySearch(arr, n, key)<<endl;
 
    return 0;
}