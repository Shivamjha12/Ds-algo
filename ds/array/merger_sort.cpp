long long int* mergesort(long long arr[],long long l,long long r){
        if(l==r){
            long long int* ans = new long long int[1];
            ans[0]=arr[l];
            return ans;
        }
            long long mid = (l+r)>>1;
            long long int* left  = mergesort(arr,l,mid);
            long long int* right = mergesort(arr,mid+1,r);
            return mergearr(left,right,mid-l+1,r-mid);
    }
    
    long long int* mergearr(long long int* left,long long int* right,int n,int m){
        int i=0;
        int j=0;
        long long int* ans = new long long int [n+m+1];
        int k=0;
        while(i<n && j<m){
            if(left[i]<=right[j]){
                ans[k++]=left[i++];
            }
            else{
                ans[k++]=right[j++];
                count+=n-i;
            }
            
        }
        while(i<n){
            ans[k++]=left[i++];
        }
        while(j<n){
            ans[k++]=right[j++];
        }
        return ans;
        
        
    }
