#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n][n];
    for(int i = 0; i<n;i++){
        for(int j = 0; j < n; j++) cin>>a[i][j];
    } 
    cout<<endl<<endl;

    // only printing
    // for(int i = 0; i<n;i++){
    //     for(int j = 0; j < n; j++) cout<<a[j][i]<<" ";
    //     cout<<endl;
    // } 

    // actual transpose
    
    for(int i = 0; i<n;i++){
        int temp = 0;
        for(int j = i; j < n; j++){
            if(a[i][j] == a[j][i]) continue;
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    } 

    // output
    for(int i = 0; i<n;i++){
        for(int j = 0; j < n; j++){
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;
    } 

    return 0;

}