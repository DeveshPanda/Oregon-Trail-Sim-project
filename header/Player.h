#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <iomanip>
#include "RandomEvent.h"

class Player {
    protected:
        int food = 100;
        int rest = 100;
        int school = 100;
        int time = 24;
        std::string name;
        std::string major;
        int math;
        int science;
        int english;
        int dayNumber;
        int weekNumber;
        virtual void checkTime(ostream&); //checks how much time is left; if 0 then reset time to 24 and start a new day in game
        virtual void checkLowStats(ostream&); //checks to see if a stat is too low; force player to make the stat go up
        virtual void getDayAndWeek(ostream&); 
    public:
        Player(int, int, int, const std::string&);
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
        std::string getName();
        std::string getMajor();
        void setName(const std::string&);
        void setStats(int, int, int, int, int, int);
        void goToClass();
        void eat();
        void sleep(int);
        void study(int);
        virtual void intro() = 0;
        void changeMajor(const std::string&);
        void checkProgress();
};

#endif
