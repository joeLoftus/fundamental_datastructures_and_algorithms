#include"ArrayList.h"

ArrayList::ArrayList() {
    arraySize = 1;
    desiredSize = 1;
    array = new int[arraySize];
}

void ArrayList::resize(float halfOrDouble){
    int* temp;
    temp = new int[int(desiredSize*halfOrDouble)];
    for (int i=0; i<desiredSize; i++)
        temp[i] = array[i];
    delete[] array;   
    array = temp;
    desiredSize = int(desiredSize*halfOrDouble);
    std::cout << desiredSize << std::endl;
}

void ArrayList::insert(int index, int val) {
	if (index > arraySize) {
		return;
	}	
	if ((arraySize+1) > desiredSize) {
		resize(2);
    }
	for(int i=arraySize; i>index; i--) {
		array[i] = array[i-1];
	}
	array[index] = val;
    arraySize++;
}

void ArrayList::remove(int index){
    if (index > arraySize) {
		return;
	}	
	if ((arraySize-1) == desiredSize/2) {
		resize(0.5);
    }
    for (int i =index; i<desiredSize; i++){
        array[i] = array[i+1];
    }
    array[desiredSize-1] = -1;
    arraySize -= 1;
	
}
int ArrayList::get(int position) {
  return array[position];
}

int ArrayList::getSize() {
  return arraySize;
}