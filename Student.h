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

using namespace std;

class Students {
    private:

    public:
        Students();
        Students(int t, int e);
        ~Students();

        int windowTime;
        int entryTime;
        int queueTime;
        int idleTime;
};
