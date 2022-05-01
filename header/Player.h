#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        int food;
        int sleep;
        int school;
        int time;
        string name;
        string major;
        int math;
        int science;
        int english;
        void randomEvent();
    public:
        void getStats();
        string getName();
        void setName(const string&);
        void setStats(int, int, int, int, int, int);
        void goToClass();
        void eat();
        void sleep();
        void study();
        virtual void improve() = 0;
        void changeMajor(const string&);
}

#endif
