#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int rows, cols;
//     cin>>rows>>cols;
//     for(int i=1; i<=rows; i++){
//         for(int j=1; j<=cols; j++){
//             if(i==1 || i==rows || j==1 || j==cols){
//             cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// int main(){
//     int cols;
//     cin>>cols;
//     for(int i=cols; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }

// }

// int main(){
//     int cols;
//     cin>>cols;
//     for(int i=cols; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<i;
//             }
//         }
//         cout<<endl;
//     }

// }

int main(){
    int n;
    cin>>n;
    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                cout<<count;
                count++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}
