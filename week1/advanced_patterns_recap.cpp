#include "cmath";
#include <iostream>
using namespace std;

// int fact(int n) {
//   int factorial = 1;
//   for (int i = 2; i <= n; i++) {
//     factorial *= i;
//   }
//   return factorial;
// }

int main() {
  int n;
  cin >> n;

  // Inverted pattern

  // 1 2 3 4 5
  // 1 2 3 4
  // 1 2 3
  // 1 2
  // 1

  // for(int i = n; i >= 1; i--) {
  //   for(int j = 1; j <= i; j++) cout<<j<<" ";
  //   cout<<endl;
  // }

  // Binary pattern

  // 1
  // 0 1
  // 1 0 1
  // 0 1 0 1
  // 1 0 1 0 1

  // bool k;
  // for(int i = 1; i <= n; i++) {
  //   if(i%2 == 0) k = 0;
  //   else k =1;
  //   for(int j = 1; j <=i; j++) {
  //     cout<<k<<" ";
  //     k = !k;
  //   }
  //   cout << endl;
  // }

  // Optimzed approach : index of '1' -> (i,j) position is even
  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <=i; j++) {
  //     if((i+j) % 2 == 0) cout<<"1 ";
  //     else cout<<"0 ";
  //   }
  //   cout << endl;
  // }

  // Rhombus pattern
  //     * * * * *
  //    * * * * *
  //   * * * * *
  //  * * * * *
  // * * * * *
  // for(int i = n; i >= 1; i--) {
  //   for(int k = 1; k <= i; k++) cout<<" ";
  //   for(int j = 1; j <= n; j++) cout<<"* ";
  //   cout<<endl;
  // }

  // Number pattern

  //     1
  //    1 2
  //   1 2 3
  //  1 2 3 4
  // 1 2 3 4 5
  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <=n; j++) {
  //     if(j <=n-i) cout<<" ";
  //   }
  //   for(int k = 1; k <= i; k++) cout<<k<<" ";
  //   cout<<endl;
  // }

  // Palindrone pattern

  //         1
  //       2 1 2
  //     3 2 1 2 3
  //   4 3 2 1 2 3 4
  // 5 4 3 2 1 2 3 4 5
  //   for(int i = 1; i <= n; i++) {
  //     for(int j = 1; j <=n; j++) {
  //       if(j <=n-i) cout<<"  ";
  //     }
  //     int a = i;
  //     bool trigger = false;
  //     for(int k = 1; k <= 2*i - 1; k++) {
  //       if(a == 1) trigger = true;
  //       if(!trigger) cout<<a--<<" ";
  //       else cout<<a++<<" ";
  //     }
  //   cout<<endl;
  // }

  // Star pattern
  //       *
  //     * * *
  //   * * * * *
  // * * * * * * *
  // * * * * * * *
  //   * * * * *
  //     * * *
  //       *
  //   for(int i = 1; i <= n; i++) {
  //     for(int j = 1; j <=n; j++) {
  //       if(j <=n-i) cout<<"  ";
  //     }
  //     for(int k = 1; k <= 2*i - 1; k++) cout<<"* ";
  //     cout<<endl;
  //   }
  //   for(int i = n; i >= 0; i--) {
  //     for(int j = 1; j <=n; j++) {
  //       if(j <=n-i) cout<<"  ";
  //     }
  //     for(int k = 1; k <= 2*i - 1; k++) cout<<"* ";
  //     cout<<endl;
  //   }

  // zig-zag pattern
  //  for(int i = 1; i <= sqrt(n); i++) {
  //    for(int j = 1; j <= n; j++) {
  //      if((i+j) % 4 == 0 || (i==2 && j%4 == 0)) cout<<"* ";
  //      else cout<<"  ";
  //    }
  //    cout<<endl;
  //  }

  // Pascal Triangle
  // icj => ncr = n!/(n-r)! * r!

  //   1
  //   1 1
  //   1 2 1
  //   1 3 3 1
  //   1 4 6 4 1
  //   for(int i = 0; i < n; i++) {
  //     for(int j = 0; j <= i; j++) {
  //       cout << fact(i) / (fact(i-j) * fact(j))<<" ";
  //     }
  //     cout<<endl;
  //   }
}
