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
