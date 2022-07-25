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
