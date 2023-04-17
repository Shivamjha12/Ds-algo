class Minheap{
  int size=0;
  int capacity;
  int arr[];
  Minheap(int k){
    arr = new Array(capacity);
    size=0;
    capacity = k;
  }
  // method to find leftIndex
  int leftIndex(int i){ return (2*i+1); }
  // method to find rightIndex
  int rightIndex(int i){ return (2*i+1); }
  // method to find parentIndex
  int parentIndex(int i){ return (i-1)/2 ;}
  // heapify method
  void heapify(int arr[], int n, int i)  
    {
      int li = leftc(i), ri=rightc(i);
      int smallest = i;
      if(li<n && arr[li)] < arr[smallest]){
          smallest = li;
      }
      if(ri<n && arr[ri] < arr[smallest]){
          smallest = ri;
      }
      if(smallest !=i){
          swap(arr[i],arr[smallest]);
          heapify(smallest);
      }
    }
  // method to insert new node/value in heap
  void insert(int value){
    size++;
    arr[size-1]=value;
    for(int i=size-1;arr[parentIndex(i)]>arr[i] && i!=0){
      swap(arr[parentIndex(i)],arr[i]);
      i=parentIndex(i);
    }
    
  }
  
}
