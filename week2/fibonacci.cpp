#include<iostream>
#include<cmath>
using namespace std;

// void fibonacci(int n){
//     int a=0,b = 1,c=0;
//     for(int i = 0; i<n;i++){
//         cout<<a<<" ";
//         c= a+b;
//         a = b;
//         b = c;
//     }
// }

int fact(int n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int ncr(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("../week1/input.txt","r", stdin);
        freopen("../week1/output.txt", "w", stdout);
    #endif

    short int n,r;
    cin>>n>>r;
    // fibonacci(n);
    // cout<<fact(n)<<endl;

    // ncr = n!/(n-r)!*r!
    // cout<<fact(n)/(fact(n-r)*fact(r));

    // Pascals Triangle
    for(int i=0; i<n;i++){
        for(int j=0; j <=i; j++){
            cout<<ncr(i,j)<<"  ";
        }
        cout<<endl;
    }
    
    
   
    
    return 0;
}