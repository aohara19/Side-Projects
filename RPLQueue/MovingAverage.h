//Made minor changes in order to word with the new queue class that I wrote

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

