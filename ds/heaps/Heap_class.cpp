class Minheap{
  int size=0;
  int capacity;
  int arr[];
  Minheap(int k){
    arr = new Array(capacity);
    size=0;
    capacity = k;
  }
  int leftIndex(int i){ return (2*i+1); }
  int rightIndex(int i){ return (2*i+1); }
  int parentIndex(int i){ return (i-1)/2 ;}
  
  void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      int li = leftc(i), ri=rightc(i);
      int smallest = i;
      if(li<n && arr[li)] < arr[smallest]){
        //   swap(arr[left(i)], arr[i]);
          smallest = li;
      }
      if(ri<n && arr[ri] < arr[smallest]){
        //   swap(arr[left(i)], arr[i]);
          smallest = ri;
      }
      if(smallest !=i){
          swap(arr[i],arr[smallest]);
          heapify(smallest);
      }
    }
  
  void insert(int value){
    size++;
    arr[size-1]=value;
    for(int i=size-1;arr[parentIndex(i)]>arr[i] && i>0){
      swap(arr[parentIndex(i)],arr[i]);
      i=parentIndex(i);
    }
    
  }
  
}
