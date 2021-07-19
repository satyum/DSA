## Bubble Sort
![Bubble sort](https://upload.wikimedia.org/wikipedia/commons/0/06/Bubble-sort.gif)

#### when n=6 
#### j loop is n-i which is 6-1=5
#### since we are starting from 0 therefore n-i-1
                     

```c++

#include <iostream>
using namespace std;


void bubbleSort(int array[], int n) {

   for (int i= 0; i < n-1; ++i) {
    for (int j = 0; j < n - i-1; ++j) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int array[] = {-2, 45, 0, 11, -9};
  int n = sizeof(array) / sizeof(array[0]);
  bubbleSort(array, n);
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(array, n);
}


```

## Selectio sort

![Selection sort](https://algorithm.yuanbin.me/shared-files/images/selection_sort.gif)

```c++
#include <iostream>
using namespace std;


void selectionSort(int array[], int n) {

   for (int i= 0; i < n-1; ++i) {
    for (int j = 0; j < n - i-1; ++j) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int array[] = {-2, 45, 0, 11, -9};
  int n = sizeof(array) / sizeof(array[0]);
  selectionSort(array, n);
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(array, n);
}

```
