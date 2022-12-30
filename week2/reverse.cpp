#include<iostream>
#include<cmath>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../week1/input.txt","r", stdin);
        freopen("../week1/output.txt", "w", stdout);
    #endif

    // Reversing a number
    int n,p,temp=0;
    cin>>n;

    while(n>0){
        temp = (temp*10) + (n%10);
        // cout<<"temp: "<<temp<<" ";
        n /= 10;        
        // cout<<"n: "<<n<<endl;
    }
    cout<<temp;
    
    return 0;
}