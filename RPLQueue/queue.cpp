/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "queue.h"


void queue::push(float x){
    nums[writeIndex] = x;
    writeIndex++;
    if(writeIndex==size)
        writeIndex = 0;
}

float queue::front(){
    frontIndex = writeIndex;
    return nums[frontIndex];
}
