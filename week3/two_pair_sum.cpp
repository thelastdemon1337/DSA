// k = 31
// 2 4 7 11 14 16 20 21

#include<bits/stdc++.h>
using namespace std;

bool pairSum(int arr[], int n, int k){
    int curr_sum, i = 0, j = n-1;

    while(i<j){
        curr_sum = arr[i] + arr[j];
        if(curr_sum == k){
            cout<<i<<" "<<j<<endl;
            return true;
        } else if(curr_sum < k) i++;
        else j--;
    }

    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];

    cout<<pairSum(arr,n,k);
    

    return 0;
}