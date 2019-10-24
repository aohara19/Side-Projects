

#ifndef MOVINGAVERAGE_H
#define MOVINGAVERAGE_H


#include "queue.h"

class MovingAverage {
    public:
    MovingAverage(int size);
    ~MovingAverage();
    void operator<<(const float val);
    float getAvg();
    
    queue * elements;
    float avg;
    int nElements;
};
    

#endif /* MOVINGAVERAGE_H */

