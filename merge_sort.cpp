#include "merge_sort.h"
#include <vector>

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int leftSize  = mid - left + 1;
    int rightSize = right - mid;
    vector<int> leftArr(leftSize);
    vector<int> rightArr(rightSize);
    for (int i = 0; i < leftSize; ++i) leftArr[i]  = arr[left + i];
    for (int j = 0; j < rightSize; ++j) rightArr[j] = arr[mid + 1 + j];
    int leftPtr = 0;
    int rightPtr = 0;
    int mergePtr = left;
    while (leftPtr < leftSize && rightPtr < rightSize) {
        if (leftArr[leftPtr] <= rightArr[rightPtr]) {
            arr[mergePtr++] = leftArr[leftPtr++];
        } else {
            arr[mergePtr++] = rightArr[rightPtr++];
        }
    }
    while (leftPtr < leftSize)  arr[mergePtr++] = leftArr[leftPtr++];
    while (rightPtr < rightSize) arr[mergePtr++] = rightArr[rightPtr++];
}

void merge_sort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}