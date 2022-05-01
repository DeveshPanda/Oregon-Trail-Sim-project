#include "../header/Player.h"

Person::Person(int m, int s, int e, const string& n, const string& m) 
 : math(m), science(s), english(e), name(n), major(m)
{ }

void Person::getStats() {
    cout << "Name: " << name << endl;
    cout << "Major: " << major << endl;
    cout << "Food: " << food << endl;
    cout << "Sleep: " << rest << endl;
    cout << "School: " << school << endl;
    cout << "Time remaining: " << time << endl;
    cout << "Math: " << math << endl;
    cout << "Science: " << science << endl;
    cout << "English: " << english << endl;
}

string Person::getName() {
    return name;
}

string Person::getMajor() {
    return major;
}

void Person::setName(const string& newName) {
    name = newName;
}

void Person::setStats(int f, int sl, int sc, int m, int s, int e) {
    food = f;
    rest = sl;
    school = sc;
    math = m;
    science = s;
    english = e;
}

void Person::goToClass() {
    time -= 5;
}

void Person::eat() {
    if (food <= 90) food += 10;
    else food = 100;
    time -= 1;
}
