#include <iostream>
#include <vector>
#include "heap_sort.cpp"
#include "merge_sort.cpp"
#include "visualisation.cpp"
using namespace std;

void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> data = {12, 11, 13, 5, 6, 7};

    cout << "Original array: ";
    printArray(data);

    heapSort(data);
    cout << "Sorted array using Heap Sort: ";
    printArray(data);

    // vector<int> data2 = {12, 11, 13, 5, 6, 7};
    // mergeSort(data2, 0, data2.size() - 1);
    // cout << "Sorted array using Merge Sort: ";
    // printArray(data2);

    // return 0;
}
