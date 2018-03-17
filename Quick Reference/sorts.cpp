// Quick access integer swap function
void swap(int *a, int *b)
{
  int t=*b;
  *b=*a;
  *a=t;
}

// Heap Sort
void buildHeap(int a[], int curr, int size)
{
  int left = 2 * curr + 1, right = 2 * curr + 2, largest = curr;
  if(left < size)
    largest = a[largest] > a[left] ? largest : left;
  if(right < size)
    largest = a[largest] > a[right] ? largest : right;
  if( largest != curr )
  {
    swap(&a[largest], &a[curr]);
    buildHeap(a,largest,size);
  }
}
void HeapSort(int a[], int size)
{
  int i;
  for(i= size/2 - 1;i >= 0; --i)
    buildHeap(a,i,size);
  for (i = size - 1; i >= 0; i--)
  {
    swap(&a[0], &a[i]);
    buildHeap(a, 0, i);
  }
}

//