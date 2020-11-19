/*
Daniel Naryshev
2327209
dnaryshev@chapman.edu

Eshaan Vora
2318955
evora@chapman.edu

Assignment 4 - Registrar Office
*/

#include <iostream>
#include <string>
#include "assignment4.h"

using namespace std;

int main(int argc, char** argv) {
    //Simulation reg;

    if(argc >= 2) {
        string file = argv[1];

        int currTime = 0;
        int openWindows = 0;

        bool active = true;

            //check if file valid

            //Move from queue to window array
            //check if queue is empty

      //output
      cout << "Calculations" << endl;
      cout << "1. Mean Student Wait Time: " << endl; //reg.mean() << endl;
      cout << "2. Median Student Wait Time: " << endl; //reg.median()<< endl;
      cout << "3. Longest Student Wait Time: " << endl; //reg.longestWait()<< endl;
      cout << "4. Students Waiting Over Ten Minutes: " << endl; //reg.overTen()<< endl;
      cout << "5. Mean Window Idle Time: " << endl; //reg.meanIdle() << endl;
      cout << "6. Longest Window Idle Time: " << endl;//reg.longestIdle()<< endl;
      cout << "7. Idle Time Over Five Minutes: " << endl; //reg.idleOverFive()<< endl;

    }else {
        cout << "File Not Found" << endl;
    }
    return 0;
}
