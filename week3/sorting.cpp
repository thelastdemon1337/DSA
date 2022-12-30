//Selection sort

#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../week1/input.txt","r", stdin);
        freopen("../week1/output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //Selection Sort Logic

    // for(int i = 0; i < n-1; i++){
    //     for(int j = i+1; j < n; j++){
    //         if(arr[j] < arr[i]){
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }

    // Bubble Sort
    // int counter = 1;
    // while(counter < n){
    //     for(int i = 0; i < n-i; i++){
    //         if(arr[i] > arr[i+1]){
    //             int temp = arr[i];
    //             arr[i] = arr[i+1];
    //             arr[i+1] = temp;
    //         }
    //     }
    //     counter++;
    // }

    // Insertion Sort
    for(int i = 1; i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}