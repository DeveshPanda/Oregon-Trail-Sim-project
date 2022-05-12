#include "../header/Player.h"

Player::Player(int m, int s, int e, const string& n) {
    math = m;
    science = s;
    english = e;
    name = n;
}

void Player::randomEvent() {
    RandomEvent event;
    int number = event.getEventNumber();

    switch(number) {
        case 1:
            cout << "Something" << endl;
    }
}

void Player::checkTime() {
    if (time <= 0) {
        cout << "There is no more time left for today. Starting the next day.";
        time = 24;
    }
    else return;
}

void Player::checkLowStats() {
    if (food < 50) {
        cout << "You're too hungry. You have to eat to regain strength." << endl;
        eat();
    }
    else if (rest < 50) {
        cout << "You're too sleepy. You have to sleep to not fall over while walking." << endl;
        sleep();
    }
    else if (school < 50) {
        cout << "You're doing too poorly. You have to study so you're not dumb." << endl;
        study();
    }
    else return;
}

void Player::getStats() {
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

string Player::getName() {
    return name;
}

string Player::getMajor() {
    return major;
}

void Player::setName(const string& newName) {
    name = newName;
}

void Player::setStats(int f, int sl, int sc, int m, int s, int e) {
    food = f;
    rest = sl;
    school = sc;
    math = m;
    science = s;
    english = e;
}

void Player::goToClass() {
    time -= 5;
}

void Player::eat() {
    if (food <= 90) food += 10;
    else food = 100;
    time -= 1;
}

void Player::sleep(int t) {
    char answer = 'a';
    if (t > time) {
        cout << "You do not have enough time in the day to sleep this much. You can only sleep for " << time << " hours." << endl;
        while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {
            cout << "Would you like to sleep? (Y/N) ";
            cin >> answer;
            if (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N')
                cout << "Please enter a valid answer." << endl;
        }
        if (answer == 'y' || answer == 'Y') {
            cout << "Good night." << endl;
            time = 0;
        }
        else if (answer == 'n' || answer == 'N') {
            return;
        }
    }
    else {
        cout << "You slept for " << t << " hours." << endl;
        time -= t;
        cout << "You have " << time << " hours left in the day.";
    }
    checkTime();
    checkLowStats();
}
