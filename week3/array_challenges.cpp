#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("../week1/input.txt", "r", stdin);
//     freopen("../week1/output.txt", "w", stdout);
// #endif

    int n, mx = INT_MIN;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // #Challenge-1: Max of array at every i-th position
    // for(int i = 0; i<n; i++){
    //     // if(arr[i] > max) max = arr[i];
    //     mx = max(mx, arr[i]);
    //     cout<<"Max at index "<<i<<" : "<<mx<<endl;
    // }

    // #Challenge-2: Sum of sub arrays
    // 1 2 0 7 2

    // for(int i = 0; i < n; i++){
    //     int sub_sum = 0;
    //     for(int j = i; j < n; j++){
    //         sub_sum += arr[j];
    //         cout<<sub_sum<<endl;

    //     }
    // }

    // #Challege-3: Google Kickstarter : Max Length of arithmatic subArray.
    // 10 7 4 6 8 10 11 - Max sub array lenth : 4,6,8,10 -> 4

    // int pcd = arr[1] - arr[0];
    // int max_len = 2;
    // int curr_len = 2;
    // int j = 2;

    // while(j < n){
    //     int cd = arr[j] - arr[j-1];
    //     if(pcd == cd) curr_len++;
    //     else{
    //         pcd = cd;
    //         curr_len = 2;
    //     }
    //     max_len = max(max_len, curr_len);
    //     j++;
    // }
    // cout<<"Max Length of Arithmatic Sub-Array: "<<max_len<<endl;

    // #Challenge-4: Google Kickstarter : Record Breaking Day
    // 1. No. of visitors on ith day should be greater than every previous day.
    // 2. Either it's the last day or the no. of visitors the following day is less.

    // int record_breaker = arr[0];
    // int days_count = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     record_breaker = max(record_breaker, arr[i]);
    //     if (arr[i] >= record_breaker && i == n - 1 || arr[i + 1] < arr[i])
    //         days_count++;
    // } 
    // cout << days_count;

    
    
    return 0;
}