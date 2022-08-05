const int N = 1e5 +10;
int n,c;
int pos[N];
bool possible(int mid)
    {
        int c_count = c;
        int last_pos =-1;
        for(int i=0; i<n; ++i)
        {
            if(pos[i]-last_pos>=mid || last_pos==-1)
            {
                c_count--;
                last_pos = pos[i];
            }
            if(c_count==0)
            {
                break;
            }
        }
        return c_count==0;
		 
	}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(int i=0;i<n;++i)
        {
            cin>>pos[i];
        }
        sort(pos,pos+n);
        int l=0,hi=1e9,mid;
        while(hi-l>1)
        {
            int mid = (hi+l)>>1;
            if(possible(mid))
            {
                l=mid;

            }
            else
            {
                hi = mid - 1;
            }
        }
        if(possible(hi)){ cout<<hi<<"\n"; }
        else { cout<<l<<"\n"; }

    }
    
 return 0;
}
