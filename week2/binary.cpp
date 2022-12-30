#include<iostream>
#include<cmath>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("../week1/input.txt","r", stdin);
        freopen("../week1/output.txt", "w", stdout);
    #endif

    // Decimal to Binary
    long unsigned int dec,bin=0,p=0;
    cin >> dec;
        
    while(dec>0){
        bin += (dec%2) * pow(10,p);
        // cout<<"bin:"<<bin<<"  ";
        dec /= 2;
        // cout<<"dec:"<<dec<<endl;
        p++;
    }
    cout<<bin;

    //Binary to Decimal
    cin >> bin;
    dec = 0, p = 0;
    
    while(bin>0){
        dec += (bin%10) * pow(2,p);
        bin /= 10;
        p++;
    }
    cout<<"  "<<dec;
    return 0;
}