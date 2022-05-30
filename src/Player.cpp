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
            cout << "You fell and hit your head: -5 in math, science, and english.";
            math -= 5;
            science -= 5;
            english -= 5;
            if (math < 0) { math = 0; }
            if (science < 0) { science = 0;}
            if (english < 0) { english = 0;}
	case 2:
	    cout << "You have an emergency outside of school: -15 in math, science, and english.";
	    math -=15;
	    science -=15;
	    english -=15;
	    if(math < 0) { math = 0;}
            if(science < 0) { science = 0;}
	    if(english < 0) { english =0;}
    };
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
        cout << "You're too dumb. You have to study so you're not dumb." << endl;
        study();
    }
}

void Player::getStats() {
    cout << "Name: " << name << endl;
    cout << "Major: " << major << endl;
    cout << "Time remaining: " << time << "/24" << endl;
    cout << "Food: " << food << "/100" << endl;
    cout << "Sleep: " << rest << "/100" <<endl;
    cout << "School: " << school << "/100" << endl;
    cout << "Math: " << math << "/100" << endl;
    cout << "Science: " << science << "/100" << endl;
    cout << "English: " << english << "/100" <<endl;
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
    char answer = 'a';
    if (5 > time) {
        cout << "You do not have enough time in the day to study for the full time. You can only study for " << time << " hours." << endl;
        while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {
            cout << "Would you like to study for the remaining time? (Y/N): ";
            cin >> answer;
            if (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N')
                cout << "Please enter a valid answer." << endl;
        }
        if (answer == 'y' || answer == 'Y') {
            if (math <= (100 - 5 * time)) math += (5 * time);
            else math = 100;
            if (science <= (100 - 5 * time)) science += (5 * time);
            else science = 100;
            if (english <= (100 - 5 * time)) english += (5 * time);
            else english = 100;
            cout << "You studied for " << time << " hours." << endl;
            cout << "Your math level is now " << math << "/100." << endl;
            cout << "Your science level is now " << science << "/100." << endl;
            cout << "Your english level is now " << english << "/100." << endl;
            time = 0;
        }
        else if (answer == 'n' || answer == 'N') {
            return;
        }
    }
    else {
        cout << "You studied for 5 hours." << endl;
        if (math <= 75) math += 25;
        else math = 100;
        if (science <= 75) science += 25;
        else science = 100;
        if (english <= 75) english += 25;
        else english = 100;
        time -= 5;
        cout << "Your math level is now " << math << "/100." << endl;
        cout << "Your science level is now " << science << "/100." << endl;
        cout << "Your english level is now " << english << "/100." << endl;
        cout << "You have " << time << " hours left in the day." << endl;
    }
    checkTime();
    checkLowStats();
}

void Player::eat() {
    if (food <= 90) food += 10;
    else food = 100;
    time -= 1;
    cout << "You ate for 1 hour." << endl;
    cout << "Your hunger level is now " << food << "/100." << endl;
    cout << "You have " << time << " hours left in the day." << endl;
    checkTime();
    checkLowStats();
}

void Player::sleep(int t) {
    char answer = 'a';
    if (t > time) {
        cout << "You do not have enough time in the day to sleep this much. You can only sleep for " << time << " hours." << endl;
        while (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N') {
            cout << "Would you like to sleep? (Y/N): ";
            cin >> answer;
            if (answer != 'y' || answer != 'Y' || answer != 'n' || answer != 'N')
                cout << "Please enter a valid answer." << endl;
        }
        if (answer == 'y' || answer == 'Y') {
            if (rest <= (100 - 5 * time)) rest += (5 * time);
            else rest = 100;
            cout << "You slept for" << time << " hours." << endl;
            time = 0;
            cout << "Your rest level is now " << rest << "/100." << endl;
        }
        else if (answer == 'n' || answer == 'N') {
            return;
        }
    }
    else {
        cout << "You slept for " << t << " hours." << endl;
        time -= t;
        if (rest <= (100 - 5 * t)) rest += (5 * t);
        else rest = 100;
        cout << "Your rest level is now " << rest << "/100." << endl;
        cout << "You have " << time << " hours left in the day." << endl;
    }
    checkTime();
    checkLowStats();
}
