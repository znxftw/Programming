// Function to swap two integers
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

// Insertion Sort
void insertionSort(int a[], int size)
{
  int i,j;
  for(i = 1 ; i < size ; ++i )
  {
    j=i;
    while(j > 0 && a[j] < a[j-1] )
    {
      swap(&a[j],&a[j-1]);
      --j;
    }
  }
}

// Quick Sort
int partition(int a[], int lb, int ub)
{
  int low=lb,high=ub,pivot=a[lb];
  while(low<high){
    while(a[low] <= pivot && low < ub)
      ++low;
    while(a[high] > pivot)
      --high;
    if(low<high)
      swap(&a[high],&a[low]);
  }
  swap(&a[lb],&a[high]);
  return high;
}
void QuickSort(int a[], int lb, int ub)
{
  if(lb >= ub)
    return;
  int part=partition(a,lb,ub);
  QuickSort(a,lb,part-1);
  QuickSort(a,part+1,ub);
  return;
}

// Selection Sort
void selectionSort(int a[], int size)
{
  int min=0,i,j;
  for(i = 0 ; i < size ; ++i )
  {
    min = i;
    for(j = i + 1 ; j < size ; ++j)
      min=a[min]<a[j]?min:j;
    if(min != i)
      swap( &a[min] , &a[i] );
  }
}