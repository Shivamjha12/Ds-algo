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
  
}
