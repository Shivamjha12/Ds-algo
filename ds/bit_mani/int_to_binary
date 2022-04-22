#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fl(i,n) for(int i=0;i<n;++i)
#define fl1(i, a, b) for(int i = a; i < b; ++i)
#define fl2(i, a, b) for(int i = a; i <= b; i++)

int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=0;
        int ans=0;
        while(n!=0){
            int bit = n&1;
            ans=(bit*pow(10,i))+ans;
            n=n>>1;
            i++;
        }
        cout<<ans<<"\n";

    
        }
    }
