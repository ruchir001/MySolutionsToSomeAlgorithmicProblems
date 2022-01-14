#include <iostream>
using namespace std; 

void reheapup(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2
 
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        // Recursively reheapup the affected sub-tree
        reheapup(arr, n, largest);
    }
}
// main function to do heap sort
void heapSort(int arr[], int n)
{
	// Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        reheapup(arr, n, i);
    // One by one extract an element from heap
    for (int i=n-1; i>=0; i--)
    {
        // Move current root to end
        swap(arr[0], arr[i]);
        // call max reheapup on the reduced heap
        reheapup(arr, i, 0);
    }
}
 
/* A utility function to print array of size n */
void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    int n;
    cout<<"Enter the number of elements  ";
    cin>>n;
	int arr[n];
	cout<<"\nEnter the elements\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
    heapSort(arr, n);
    cout << "\nSorted array is \n";
    printArray(arr, n);
}
