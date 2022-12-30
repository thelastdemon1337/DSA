#include <iostream>
#include <bits/stdc++.h> //includes every single header file
#include <cmath>
using namespace std;

int sum_natural_numbers(int n)
{
    // int sum = 0;
    // for(int i = 1; i <= n; i++){
    //     sum += i;
    // }
    return (n * (n + 1) / 2);
}

bool check_pythagorean_triplet(int a, int b, int c)
{
    // int c = max(a,b,c);
    if ((pow(a, 2) + pow(b, 2)) == pow(c, 2))
        return true;
    else
        return false;
}

int bin_to_dec(int bin)
{
    int dec = 0;
    int p = 0;
    while (bin > 0)
    {
        dec += bin % 10 * pow(2, p);
        bin /= 10;
        p++;
    }
    return dec;
}

int binary_add(int a, int b)
{
    int carry = 0, res = 0, p = 0;

    while (a > 0)
    {
        res += pow(10, p) * (a % 10 ^ b % 10 ^ carry);
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

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../week1/input.txt", "r", stdin);
    freopen("../week1/output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;

    // cout<<sum_natural_numbers(bin)<<endl;

    // pythagorean triplet : a^2 + b^2 = c^2
    // cout<<check_pythagorean_triplet(a,b,c);

    // cout<<bin_to_dec(bin);

    cout << binary_add(a, b);

    return 0;
}