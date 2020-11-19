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
#include "Student.h"
#include "GenQueue.h"

using namespace std;

class Simulation {
    private:
        int timeEntry;
        int timeAtWindow;
        int numStudentsCT;
        int medianArrayCount;
        int idleArrayCount;

    public:
        Simulation();
        ~Simulation();

        bool importFile(string file);

        //Global Time Tracker
        bool timeTracker(int t);

        //Math for Students
        double mean();
        double median();
        int longestWait();
        int overTen();

        //Math for Windows
        double meanIdle();
        int longestIdle();
        int idleOverFive();

        //Students at Window
        Students* *windowArray;

        //Students in line
        GenQueue<Students*> studentQueue;

        //Line Statistics
        GenQueue<int> waitStats;
        GenQueue<int> idleStats;

        int *medianArrary;
        int *idleArray;

        int totalWindows;
        int totalStudents;
};
