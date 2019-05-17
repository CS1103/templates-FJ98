// Created by felix on 5/17/2019.
#ifndef QUICKSORT_TEMPLATE_MERGESORT_H
#define QUICKSORT_TEMPLATE_MERGESORT_H

#include <vector>
#include <algorithm>

template <class T>
T partition(T arr[], int start, int end){
    T valorPivot = arr[start];
    T posPivot = start;
    for (int pos = start + 1; pos <= end; pos++){
        if (arr[pos] < valorPivot)
        {
            std::swap(arr[posPivot + 1], arr[pos]);
            std::swap(arr[posPivot], arr[posPivot + 1]);
            posPivot ++;
        }
    }
    return posPivot;
}

template <class T>
T quickSort(T arr[], int start, int end)
{
    if (start < end) {
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
    return *arr;
}


#endif //QUICKSORT_TEMPLATE_MERGESORT_H