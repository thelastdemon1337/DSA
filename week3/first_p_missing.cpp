#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, min = INT_MAX;
    bool flag = 0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] >= 0 && arr[i] < min) min = arr[i];
    }

    for (int i = 0; i < n; i++){
        // if(arr[i] >= 0 && arr[i] == min+1) min = min+1;
        if(arr[i] > 0){
            if(arr[i] == min+1) min++;
            else flag = 1;
        }
        if(flag == 1){
            cout<<++min<<endl;
            return 0;
        }
        
    }
    return 0;
}