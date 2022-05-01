#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        int food = 100;
        int rest = 100;
        int school = 100;
        int time = 24;
        string name;
        string major;
        int math;
        int science;
        int english;
        void randomEvent();
        void checkTime(); //checks how much time is left; if 0 then reset time to 24 and start a new day in game
        void checkLowStats(); //checks to see if a stat is too low; force player to make the stat go up
    public:
        Person(int, int, int, const string&, const string&);
        void getStats();
        string getName();
        string getMajor();
        void setName(const string&);
        void setStats(int, int, int, int, int, int);
        void goToClass();
        void eat();
        void sleep(int);
        void study();
        virtual void improve() = 0;
        void changeMajor(const string&);
}

#endif
