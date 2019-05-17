#include <iostream>
#include "MergeSort.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    const int SIZE = 10;
    int array[SIZE] = {10, 4, 7, 5, 8, 1, 6, 9, 3, 2};

    for (int item : array){
        std::cout << item << " ";
    }std::cout << std::endl;

    quickSort(array, 0, SIZE-1);

    for (int item : array){
        std::cout << item << " ";
    } std::cout<<std::endl;

    return 0;
}