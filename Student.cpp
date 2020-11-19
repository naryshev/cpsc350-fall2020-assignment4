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
#include "Student.h"

using namespace std;

Students::Students() {
    windowTime = 0;
    entryTime = 0;
    queueTime = 0;
    idleTime = 0;
}

Students::Students(int t, int e) {
    windowTime = t;
    entryTime = e;
    queueTime = 0;
    idleTime = 0;
}

Students::~Students() {

}
