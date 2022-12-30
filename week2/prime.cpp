#include<iostream>
#include<cmath>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("../week1/input.txt","r", stdin);
        freopen("../week1/output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    bool flag = 0;
    
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            cout<<"Non-Prime"<<endl;
            flag=1;
            break;
        }
    }
    if(!flag) cout<<"Prime";
    return 0;
}