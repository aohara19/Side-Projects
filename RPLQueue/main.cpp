#include <iostream>
#include "MovingAverage.h"

using namespace std;

int main(int argc, char *argv[]){
    MovingAverage test(10);
    int y;
    for(int x = 0; x<20; x++){
        cin>>y;
        test<<y;
        cout<<test.getAvg()<<endl;
    }
    
}