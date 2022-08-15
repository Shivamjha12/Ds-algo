#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
const int calcm = 1e9 + 7; 
#define M_PI 3.14159265358979323846  /* pi */
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
const int N = 1e5 +10;

int fact(int n)
    {
        if(n==0) return 1;
        return fact(n-1)*n;
    }

int sum(int a[],int n)
    {
        if(n<0){ return 0; }
        cout<<"sum(a,"<<n-1<<") + "<<a[n]<<"\n";
        return sum(a,n-1)+a[n];
    }

int digit_sum(int n)
    {
        if(n%10<=0) return n;
        return digit_sum(n/10)+(n%10);
    }
vector<string> ans;

void generate( string &s, int open, int close )
    {
        
        if(open==0 && close==0)
        {
            ans.push_back(s);
        }
        if(open>0)
        {
            s.push_back('(');
            generate(s,open-1,close);
            s.pop_back();
        }
        if(close>0)
        {
            if(open<close)
            {
                cout<<s<<"\n";
                s.push_back(')');
                generate(s,open,close-1);
                s.pop_back();
            }
        }

    }

vector<vector<int>> subs;
void g_subsets(vector<int> &a, int i, vector<int> &nums)
    {
        cout<<i<<"\n";
        for(auto i:a)
        {
        cout<<i<<" ";
        }
        cout<<"\n";
        if(i==nums.size())
        {
            subs.push_back(a);
            return;
        }
        g_subsets(a,i+1,nums);
        a.push_back(nums[i]);
        g_subsets(a,i+1,nums);
        a.pop_back();
        
    }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    string s="";
    generate(s,n,n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<", ";
    }
    cout<<"\n";
    
 return 0;
}
