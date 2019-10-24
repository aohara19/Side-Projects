// MovingAverage.cpp
// Author: Ian Heidenberger
// Made minor changes in order to word with the new queue class that I wrote
//
// MovingAverage creates an n-deep sliding average.

#include "MovingAverage.h"

MovingAverage::MovingAverage(int size){
    nElements = size;
    elements = new queue(size);
    for(int i=0;i<size;i++){ elements->push(0); }
    avg = 0.0f;
}

MovingAverage::~MovingAverage(){
    delete elements;
}

void MovingAverage::operator<<(const float val){
    avg += (val - elements->front()) / nElements;
    elements->push(val);
}

float MovingAverage::getAvg(){
    return avg;
}
