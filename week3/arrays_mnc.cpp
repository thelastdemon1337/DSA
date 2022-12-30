#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int N = e16;
    int idx[N];
    for(int i = 0; i < N; i++){
        idx[i] = -1;
    }
    for(int i = 0; i<5;i++){
        cout<<idx[i];
    }

    return 0;
}