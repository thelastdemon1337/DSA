#include<iostream>
// #include<bits/stdc++.h>
using namespace std;



int binary_add(int a, int b){

    int carry = 0, res = 0, p = 0;

    while (a > 0)
    {
        res += (a%10 ^ b%10 ^ carry) * pow(10, p);
        cout << res;
        if (a % 10 == 1 && b % 10 == 1)
            carry = 1;
        else if (a % 10 == 1 || b % 10 == 1)
            if (carry)
                continue;
            else
                carry = 0;
        a /= 10;
        b /= 10;
        p++;
    }
    return res;
}



int main(){
    #ifndef ONLINE_JUDGE
        freopen("../week1/input.txt", "r", stdin);
        freopen("../week1/output.txt", "w", stdout);
    #endif

    int a,b;
    cin>>a>>b;
    cout<<binary_add(a,b)<<endl;
    return 0;
}