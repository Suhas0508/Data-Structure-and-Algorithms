#include <utility>

pair < int, int > swap(pair < int, int > swapValues) {
    
    int temp;
    temp = swapValues.second;
    swapValues.second = swapValues.first;
    swapValues.first = temp;
    return swapValues;
}
