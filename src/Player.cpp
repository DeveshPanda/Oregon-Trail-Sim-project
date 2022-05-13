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
	    std::string answer;
	    cout << "You're invited to go out with your friends on a weekend, do you accept their offer? yes or no" << endl;
	    cin >> answer;
	    if(answer == "yes" || answer == "Yes") {
	        math -= 10;
 		science -= 10;
 		english -= 10;
	    }
	    if(answer == "no" || answer == "No") {
	        math += 10;
		science += 10;
		english += 10;
	    }
	    if (math < 0) { math = 0; }
            if (science < 0) { science = 0;}
            if (english < 0) { english = 0;}
        case 3:
	    std::string answer;
	    cout << "Oh no you've just received an unexpected quiz from your math professor. Lets check your stats to see if you are prepared." << endl;
	    getStats();
	    if(math > 80) {
	        cout << "You're going to ace this quiz." << endl;
		school += 20;
	    }
            else if(math > 60 && math < 80) {
	        cout << "You might have a shot at this." << endl;
		school += 10;
	    }
	    else if(math < 60 && math > 30) {
		cout << "You might need to study a little more." << endl;
		school -= 10;
	    }
	    else {
		cout << "You're going to fail this quiz." << endl;
		school -= 20;
	    }
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
        sleep(8);
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

void Player::study() {
    int subjectNum;
    int studyHrs;
    int studyGains;
    cout << "what do you choose to study? 1) math 2) science 3) english" << endl;
    cin >> subjectNum
    switch(subjectNum) {
        case 1: 
	    cout << "For how long do you want to study this subject? (answer must be an integer and is in hours)" << endl;
	    while(true) {
	        cin >> studyHrs;
	        if(studyHrs > time) {
		    cout << "You cannot attempt this action you only have " << time << " hours left in the day." << endl;
	        }
                if(studyHrs < time) {
                    studyGains = studyHrs * 2;
		    cout << "You have studied math for " << studyHrs << " hours and have gained " << studyGains << " math experience." << endl;
		    math += studyGains;
		    time -= studyHrs;
                    break;
                }
            }
        case 2: 
	    cout << "For how long do you want to study this subject? (answer must be an integer and is in hours)" << endl;
	    while(true) {
	        cin >> studyHrs;
	        if(studyHrs > time) {
		    cout << "You cannot attempt this action you only have " << time << " hours left in the day." << endl;
	        }
                if(studyHrs < time) {
                    studyGains = studyHrs * 2;
		    cout << "You have studied science for " << studyHrs << " hours and have gained " << studyGains << " science experience." << endl;
		    science += studyGains;
		    time -= studyHrs;
                    break;
 		}
	    }    
        case 3: 
	    cout << "For how long do you want to study this subject? (answer must be an integer and is in hours)" << endl;
	    while(true) {
	        cin >> studyHrs;
	        if(studyHrs > time) {
		    cout << "You cannot attempt this action you only have " << time << " hours left in the day." << endl;
	        }
                if(studyHrs < time) {
                    studyGains = studyHrs * 2;
		    cout << "You have studied english for " << studyHrs << " hours and have gained " << studyGains << " english experience." << endl;
		    english += studyGains;
		    time -= studyHrs;
                    break;
 		}
	    }   
    };
}

