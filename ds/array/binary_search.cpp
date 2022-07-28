// recursive one
int binary_s(int a[],int l,int r, int target){
    int mid= (l+r)>>1; // using bitwise operators to divide l+r or use l+(r-l)/2;
    if(l<=r)
    {
      if(a[mid]==target) return mid;
      else if(target>a[mid])
      {
          return binary_s(a,mid+1,r,target);
      }
      else
      {
        return binary_s(a,l,mid-1,target);
      }
    }
  return -1;
}

// binary_searching using while loop aproach

int binary_s(int a[], int left, int right, int target) {
        
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(target==a[mid])
            {
                return mid;
            }
            if(target<a[mid])
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return -1;
    }

// binary search in binary sorted array [0,0,0,1,1,1,1] to find first occurance position of 1 in array

int binsr(vector<int>arr,int l, int r)
    {
        if(l<=r)
        {
            int mid = (l+r)>>1;
            if((mid==0 || arr[mid-1]==0) && arr[mid]==1)
            {
                return mid;
            }
            else if(arr[mid]==0)
            {
                return binsr(arr,mid+1,r);
            }
            else
            {
                return binsr(arr,l,mid-1);
            }
        }
        return -1;
    }

// BOOK ALLOCATION CODE BINARY SEARCH

int is_possible(int a[], int n,int m, int mid)
    {
        int students=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if (a[i] > mid)
            return false;
            
            if(sum+a[i] >mid)
            {
                students++;
                sum=a[i];
                
                if(students>m) return false;
                
            }
            else
            {
                sum+=a[i];
            }
        }
        return true;
        
    }

int findPages(int A[], int N, int M) 
    {
        //code here
        if (N < M){ return -1; }
        int result = -1;
        int low= *max_element(A,A+N);
        int high = accumulate(A,A+N,0);
        while(low<=high)
        {
            int mid = low + ((high-low)>>1);
            if(is_possible(A,N,M,mid))
            {
                result = mid;
                high = mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return result;
    }



