#include <cstring>
#include <iostream>
using namespace std;

void printArray(int arr[], int len) {
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void selectionSort(int arr[], int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[j] < arr[i]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

void bubbleSort(int arr[], int len) {
  int counter = 1;
  while (counter < len) {
    for (int i = 0; i < len - counter; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    counter++;
  }
}

void resetArray(int arr[], int len) {
  int temp_arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  memcpy(arr, temp_arr, sizeof(temp_arr));
  cout << "Array After Reset : ";
  printArray(arr, len);
}

void insertionSort(int arr[], int len) {
  for (int i = 1; i < len; i++) {
    int current = arr[i];
    int j = i - 1;
    while (arr[j] > current && j >= 0) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current;
  }
}

int main() {
  int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  int len = sizeof(arr) / sizeof(int);

  cout << "Array Before Sorting : ";
  printArray(arr, len);

  selectionSort(arr, len);

  cout << "Array After Selection Sort : ";
  printArray(arr, len);

  resetArray(arr, len);

  bubbleSort(arr, len);
  cout << "Array After Bubble Sort : ";
  printArray(arr, len);

  resetArray(arr, len);

  insertionSort(arr, len);
  cout << "Array After Insertion Sort : ";
  printArray(arr, len);
}