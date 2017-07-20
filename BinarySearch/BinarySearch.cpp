#include <iostream>

int binarySearch(int *array, int size, int desiredValue){
    int first =0;
    int last = size -1;
    
    while (first <= last){
        int middle = (last + first)/2;
        if (array[middle] == desiredValue)
            return middle;
        else if (desiredValue < array[middle]) 
            last = middle - 1;
        else
            first = middle + 1;
    }
    return -1;
}

int main(){
    int array[] = {4, 6, 34, 49, 50, 80, 207};
    int size = sizeof(array)/sizeof(array[0]);
    
    std::cout << binarySearch(array, size, 50) << std::endl;
    return 0;
}