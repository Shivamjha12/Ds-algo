#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int calcm = 1e9 + 7; 
#define M_PI           3.14159265358979323846  /* pi */
#define F first
#define bb make_pair(a[i]-b[i],make_pair(a[i],b[i])
#define aa r>=v[i].second.first 
#define S second
#define PB push_back
#define MP make_pair
#define fl(i,n) for(int i=0;i<n;++i)
#define fl1(i, a, b) for(int i = a; i < b; ++i)
#define fl2(i, a, b) for(int i = a; i <= b; i++)
#define fl3(i, a, b) for(int i = a; i >= b; i--)

bool solve(int *a,int n,int m,int mid)
    {
		int sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i]>mid)
            {
                sum+=(a[i]-mid);
            }
            if(sum>=m) return true;
        }
        return false;
	}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n,m;
    cin >> n>>m;
    int a[n];
    for(int i=0;i<n;i++){ cin>>a[i]; }
    int low=0;
    int high= *max_element(a,a+n);
    int ans=0;
    while(low<=high)
    {
        int mid = (low+high)>>1;
        if(solve(a,n,m,mid))
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    cout<<ans<<"\n";
    
 return 0;
}
