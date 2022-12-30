// patterns

#include<iostream>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    short unsigned int rows,cols,print_value = 1;
    cin>>rows>>cols;
    
    //Butterfly

    for(int i = 1; i <= rows; i++){
        for(int j = 0;j < rows*2; j++){
            if(j < i || j > rows*2 - i-1) cout<<"* ";
            else cout<< "  ";
        }
        cout<<endl;
    }
    for(int i = rows; i >= 0; i--){
        for(int j = 0;j < rows*2; j++){
            if(j < i || j > rows*2 - i-1) cout<<"* ";
            else cout<< "  ";
        }
        cout<<endl;
    }
    


    
    // for(int i = rows; i > 0; i--){
    //     for(int j = 1; j <= i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // 1 2 3 4 5 
    // 1 2 3 4 
    // 1 2 3 
    // 1 2 
    // 1 

    //0-1 pattern
    // for(int i = 1; i < rows+1; i++){
    //     for(int j = 1; j <= i; j++){
    //         if((i+j)%2==0) cout<<1<<" ";
    //         else cout<<0<<" ";
    //     }
    //     cout<<endl;
    // }

    //Rhombus Pattern

    // for(int i = rows-1; i >= 0; i--){
    //     for(int j = i; j >0; j--) cout<<" ";
    //     for(int j = 0; j < rows; j++) cout<<"* ";
    //     cout<< endl;
    // }

    // Number Pattern

    // for(int i = 1; i <= rows; i++){
    //     for(int j = rows+1-i; j >0; j--) cout<<" ";
    //     for(int j = 1; j <= i; j++) cout<<j<<" ";
    //     cout<< endl;
    // }

    // Palindrome pattern
    // for(int i = 1; i <= rows; i++){
    //     int print_value_left = i;
    //     int print_value_right = 2;
    //     for(int j = rows+1-i; j >0; j--) cout<<"  ";
    //     for(int j = 1; j <= 2*i - 1; j++){
    //         // cout<<"*";            
    //         if(print_value_left>0) cout<<print_value_left--<<" ";
    //         else cout<<print_value_right++<<" ";
    //     } 
    //     cout<< endl;
    // }

    //      1
    //     212
    //    32123
    //   4321234
    //  543212345

    // Star pattern
    // for(int i = 1; i <= rows; i++){
    //     for(int j = rows+1-i; j >0; j--) cout<<"   ";
    //     for(int j = 1; j <= 2*i - 1; j++){
    //         cout<<"*  ";            
    //     } 
    //     cout<< endl;
    // }    
    // for(int i = rows; i >= 0; i--){
    //     for(int j = rows+1-i; j >0; j--) cout<<"   ";
    //     for(int j = 1; j <= 2*i - 1; j++){
    //         cout<<"*  ";            
    //     } 
    //     cout<< endl;
    // }    
 


    return 0;
}