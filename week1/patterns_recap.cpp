#include <iostream>
using namespace std;

int main() {
  int rows, cols, n;
  // cin >> rows >> cols;
  cin >> n;
  // ****
  // ****
  // ****
  // ****
  // ****
  // for(int i = 0; i < rows; i++) {
  //   for(int j = 0; j < cols; j++) cout<<"*";
  //   cout << endl;
  // }

  // Hollow rectangle

  // ****
  // *  *
  // *  *
  // *  *
  // ****
  // for (int i = 0; i < rows; i++) {
  //   for (int j = 0; j < cols; j++) {
  //     if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
  //       cout << "*";
  //     } else cout << " ";
  //   }
  //   cout << endl;
  // }

  // Inverted Hald pyramid
  // *****
  // ****
  // ***
  // **
  // *
  // for(int i = n; i > 0; i--) {
  //   for(int j = i; j > 0; j--) cout << "*";
  //   cout<< endl;
  // }

  // Half pyramid after 180 deg rotation
  //     *
  //    **
  //   ***
  //  ****
  // *****
  // for(int i = n; i >= 1; i--) {
  //   for(int j = 1; j <= n; j++) {
  //     if(j >= i) cout<<"* "; // space after '*' makes half ethereum symbol ->
  //     triangle. else cout <<" ";
  //   }
  //   cout<<endl;
  // }

  // Testing for inversing the design.
  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <= n; j++) {
  //     if(j >= i) cout<<"* ";
  //     else cout <<" ";
  //   }
  //   cout<<endl;
  // }

  // Half pyramid using numbers
  // 1
  // 2 2
  // 3 3 3
  // 4 4 4 4
  // 5 5 5 5 5
  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <= i; j++) cout<<i<<" ";
  //   cout<<endl;
  // }

  // Floyds triangle :
  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10
  // 11 12 13 14 15
  // int k = 1;
  // for(int i = 1; i <= n; i++) {
  //   for(int j = 1; j <=i; j++) cout<<k++<<" ";
  //   cout<<endl;
  // }

  // Butterfly pattern
  // *             *
  // * *         * *
  // * * *     * * *
  // * * * * * * * *
  // * * * * * * * *
  // * * *     * * *
  // * *         * *
  // *             *
  // for(int i = 1; i <= n; i++){
  //   for(int j =1; j <= 2*n; j++) {
  //     if((j <= i) || (j >= (2*n - (i-1)))) cout<<"* ";
  //     else cout<<"  ";
  //   }
  //   cout<< endl;
  // }
  // for(int i = n; i >= 0; i--){
  //   for(int j =1; j <= 2*n; j++) {
  //     if((j <= i) || (j >= (2*n - (i-1)))) cout<<"* ";
  //     else cout<<"  ";
  //   }
  //   cout<< endl;
  // }
}