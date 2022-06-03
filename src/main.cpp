#include "../header/Player.h"
#include "../header/BCOE.h"
#include "../header/CHASS.h"
#include "../header/CNAS.h"

int main() {
    string name = "";
    int major = 0;
    int option = 0;
    int event1 = rand() % 4 + 2;
    //int event2 = rand() % 5 + 6;
    //int event3 = rand() % 5 + 11;
    //int event4 = rand() % 5 + 16;
    //int event5 = rand() % 5 + 21;
    //int event6 = rand() % 5 + 26;
    //int event7 = rand() % 5 + 31;
    //int event8 = rand() % 5 + 36;
    //int event9 = rand() % 5 + 41;
    //int event10 = rand() % 5 + 46;
    bool r1 = true;
    bool r2 = true;
    bool r3 = true;
    bool r4 = true;
    bool r5 = true;
    bool r6 = true;
    bool r7 = true;
    bool r8 = true;
    bool r9 = true;
    bool r10 = true;

    cout << "Please enter your name: ";
    getline (cin, name);

    cout << "Please choose your major (1 - BCOE, 2 - CNAS, 3 - CHASS): ";
    cin >> major;

    while (major > 3 || major < 1) {
        cout << "Error with number choice. Please try again." << endl;
        cout << "Please choose your major (1 - BCOE, 2 - CNAS, 3 - CHASS): ";
        cin >> major;
    }
    Player* player;
    cout << "I hope you are ready to embark on your journey as a Highlander! ";
    if (major == 1) {
        player = new BCOE(100, 30, 30, name);
        player->intro(); 
    }
    else if (major == 2) {
        player = new CNAS(30, 100, 30, name);
        player->intro();
    }
    else if (major == 3) {
        player = new CHASS(30, 30, 100, name);
        player->intro();
    }

    cout << endl << "Tomorrow is your first day! It is 12am in the morning and you are about to sleep. Please enter the amount of hours you would like to sleep (8-12): ";
    int sleep;
    cin >> sleep;
    while(sleep < 8 || sleep > 12) {
        cout << "Tomorrow is your first day! It is 12am in the morning and you are about to sleep. Please enter the amount of hours you would like to sleep (8-12): ";
        cin >> sleep;
    }
    cout << "Today is your first day! It is " << sleep << " o'clock." << endl;
    cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
    cin >> option;
    cout << endl;
    if (option == 0) option = -1;
    while (option != 0) {
        switch(player->getWeekNumber()) {
            case 1:
                if (player->getDayNumber() == event1 && r1) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r1 = false;
                }
                break;
            case 2:
                if (player->getDayNumber() == event1 && r2) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r2 = false;
                }
                break;
            case 3:
                if (player->getDayNumber() == event1 && r3) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r3 = false;
                }
                break;
            case 4:
                if (player->getDayNumber() == event1 && r4) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r4 = false;
                }
                break;
            case 5:
                if (player->getDayNumber() == event1 && r5) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r5 = false;
                }
                break;
            case 6:
                if (player->getDayNumber() == event1 && r6) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r6 = false;
                }
                break;
            case 7:
                if (player->getDayNumber() == event1 && r7) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r6 = false;
                }
                break;
            case 8:
                if (player->getDayNumber() == event1 && r8) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r8 = false;
                }
                break;
            case 9:
                if (player->getDayNumber() == event1 && r9) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r9 = false;
                }
                break;
            case 10:
                if (player->getDayNumber() == event1 && r10) {
                    cout << "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                    cout << endl;
                    cout << endl;
                    player->randomEvent();
                    r10 = false;
                }
                break;
            default:
                cout << "Nothing random happened today..." << endl;
                break;
        }

        if (player->getWeekNumber() > 10) {
            cout << "Today marks a special day in your journey..." << endl;
            cout << name << ", you have successfully completed your survival journey!! There is still much more in store for you in the years to come but you have come such a long way." << endl;
            cout << "Good luck with the rest of your endavors and thank you for your time. GO HIGHLANDERS!!" << endl;
            option = 0;
        }
        else if (option == 1) {
            player->getStats();
            cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
            cin >> option;
            cout << endl;
            if (option == 0) option = -1;
        }
        else if (option == 2) {
            player->eat();
            cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
            cin >> option;
            cout << endl;
            if (option == 0) option = -1;
        }
        else if (option == 3) {
            int val = 0;
            cout << "Select the amount of time you want to sleep (1-24): ";
            cin >> val;
            while (val < 1 || val > 24) {
                cout << "Select the amount of time you want to sleep (1-24): ";
                cin >> val;
            }
            player->sleep(val);
            cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
            cin >> option;
            cout << endl;
            if (option == 0) option = -1;
        }
        else if (option == 4) {
            player->goToClass();
            cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
            cin >> option;
            cout << endl;
            if (option == 0) option = -1;
        }
        else if (option == 5) {
            int val = 0;
            cout << "Select an amount of time you want to study (1-24): ";
            cin >> val;
                while (val < 1 || val > 24){
                    cout << "Select an amount of time you want to study (1-24): ";
                    cin >> val;
                }
            player->study(val);
            cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
            cin >> option;
            cout << endl;
            if (option == 0) option = -1;
        }
        else if (option == 6) {
            cout << "I am sorry to hear your journey has come to an end." << endl;
            cout << "Here are your final stats: " << endl;
            player->getStats();
            cout << "I wish you all the best in your future endavors!" << endl;
            option = 0;
        }
        else if (option == 7) {
            player->checkProgress();
            cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
            cin >> option;
            cout << endl;
            if (option == 0) option = -1;
        }
        else if (option == 8) {
            char transferChoice = 'a';
            if ((static_cast<double>(player->calcSchoolLevel())) == 100) {
                cout << "You are eligible to transfer. Would you like to transfer? (Y/N): ";
                cin >> transferChoice;
                while (transferChoice != 'y' && transferChoice != 'Y' && transferChoice != 'n' && transferChoice != 'N') {
                    cout << "Please enter a valid choice." << endl;
                    cout << "Would you like to transfer? (Y/N): ";
                    cin >> transferChoice;
                }
                if (transferChoice == 'y' || transferChoice == 'Y') {
                    cout << "Congratulations on transferring!" << endl;
                    option = 0;
                }
                else {
                    cout << "You have decided to stay at UCR." << endl;
                    cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
                    cin >> option;
                    cout << endl;
                    if (option == 0) option = -1;
                }
            }
            else {
                cout << "You are not eligible for transfer. Check your progress to see how close you are to transferring." << endl;
                cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
                cin >> option;
                cout << endl;
                if (option == 0) option = -1;
            }
        }
        else {
            cout << endl << "Please select an option (1 - Get Stats, 2 - Eat, 3 - Sleep, 4 - Go to class, 5 - Study, 6 - Dropout, 7 - Check Progress, 8 - Transfer): ";
            cin >> option;
            cout << endl;
            if (option == 0) option = -1;
        }
    }

    cout << endl << "Congratulations on completing the game!" << endl;
    delete player;

    return 0;
}
