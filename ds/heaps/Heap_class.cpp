class Minheap{
  int size=0;
  int capacity;
  int arr[];
  
  Minheap(int k){
    arr = new Array(capacity);
    size=0;
    capacity = k;
  }
  public:
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
  // method to get the minimun element of Minheap
  int getMin()
  {
    return arr[0];
  }
  // this method help to take out minimum element of heap and modify the heap with new min element at top by deleting current min element and updating new smallest value element on top of heap.
  int extractMin(){
    if(size==0) return INT_MAX;
    if(size==1)
    {
      return arr[0];
      size--;
    }
    swap(arr[0],arr[size-1]);
    size--;
    heapify(arr,size,0);
    return arr[size];
    
  }
  
  
  
}
