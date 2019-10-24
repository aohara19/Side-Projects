/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   queue.h
 * Author: allis
 *
 * Created on September 22, 2019, 8:57 PM
 */

#ifndef QUEUE_H
#define QUEUE_H

// SimpleVector class template

#include <iostream>


class queue{
private: 
    float val;
    int size;
    int frontIndex;
    int writeIndex = 0;
    float *nums;
public:
    queue(int){
        size = s;
        nums = new float[size];
    };
    ~queue(){
        delete nums;
    }
    void push(float);
    //void pop();
    float front();
};



#endif