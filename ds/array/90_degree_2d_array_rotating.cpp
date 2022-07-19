// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int a[4][4] = {{3,4,2,1},{5,3,5,6},{9,0,3,1},{1,4,9,2}};
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"--------------------"<<"\n";
   for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
        cout<<"\n";
    }
    cout<<"--------------------"<<"\n";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"--------------------"<<"\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int temp = a[i][j];
            a[i][j]=a[i][4-j-1];
            a[i][4-j-1]=temp;
        }
    }
    cout<<"--------------------"<<"\n";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
