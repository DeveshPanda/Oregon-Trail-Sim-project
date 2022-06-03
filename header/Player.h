#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <iomanip>
#include "RandomEvent.h"

using namespace std;

class Player {
    protected:
        int food = 100;
        int rest = 100;
        int school = 100;
        int time = 24;
        string name;
        string major;
        int math;
        int science;
        int english;
        int dayNumber;
        int weekNumber;
        void checkTime(); //checks how much time is left; if 0 then reset time to 24 and start a new day in game
	void checkTime(ostream&);
        void checkLowStats(); //checks to see if a stat is too low; force player to make the stat go up
	void checkLowStats(ostream&);
        void getDayAndWeek(); 
	void getDayAndWeek(ostream&);
    public:
        Player(int, int, int, const string&);
        void randomEvent();
        int getFood() { return food; }
        int getRest() { return rest; }
        int calcSchoolLevel(); //calculates school variable based on math, science, and english variables
        int getMath() { return math; }
        int getScience() { return science; }
        int getEnglish() { return english; }
        int getDayNumber() { return dayNumber; }
        int getWeekNumber() { return weekNumber; }
        void getStats();
	void getStats(ostream&);
        string getName();
        string getMajor();
        void setName(const string&);
        void setStats(int, int, int, int, int, int);
        void goToClass();
        void eat();
        void sleep(int);
        void study(int);
        virtual void intro() = 0;
        void changeMajor(const string&);
        void checkProgress();
};

#endif

