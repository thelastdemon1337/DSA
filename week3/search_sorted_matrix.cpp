#include<bits/stdc++.h>
using namespace std;

bool search(int a[][], n, k){
    for(int i = 0; i < n; i++){
        if(k < a[i][n-1]){
            for(int j = 0; j < n; j++){
                if(a[i][j] == k) return true;
            }
        }
        else i++;
    }

    return false;

}
int main(){
    int n,k;
    cin>>n>>k;

    int a[n][n];
    for(int i = 0; i<n;i++){
        for(int j = 0; j < n; j++) cin>>a[i][j];
    } 
    cout<<endl<<endl;

    
    return 0;

}