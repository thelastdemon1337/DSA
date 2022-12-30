//Max sub array with O(n)
// -1 4 -6 7 -4

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n; i++) cin>>arr[i];

    int curr_sum = 0, max_sum = INT_MIN;

    for(int i = 0; i < n; i++){
        curr_sum += arr[i];
        max_sum = max(max_sum, curr_sum);
        if(curr_sum < 0) curr_sum = 0;
    }
    cout<<max_sum<<endl;
    return 0;
}