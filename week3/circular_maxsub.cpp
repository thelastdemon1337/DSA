//Max sub array with O(n)
// 4 -4 6 -6 10 -11 12

#include<bits/stdc++.h>
using namespace std;

int kedane(int arr[], int n){
    int current_sum = 0, max_sum = INT_MIN;

    for(int i = 0; i < n; i++){
        current_sum += arr[i];
        if(current_sum < 0) current_sum = 0;
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i <n; i++) cin>>arr[i];

    int wrap_sum = 0, non_wrap_sum = 0;

    non_wrap_sum = kedane(arr, n);

    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
        arr[i] = -arr[i];
    }
    wrap_sum = total_sum + kedane(arr, n);

    cout<<max(wrap_sum, non_wrap_sum)<<endl;
    
    
    return 0;
}