#include "../header/Player.h"
#include "../header/BCOE.h"
#include "../header/CHASS.h"
#include "../header/CNAS.h"

int main() {
    string name = "";
    int major = 0;
    cout << "Please enter your name: ";
    getline (cin, name);
    
    cout << "Please choose your major (1 - BCOE, 2 - CNAS, 3 - CHASS): ";
    cin >> major;

    while (major > 3 || major < 1) {
        cout << "Error with number choice. Please try again.";
        cin >> major;
    }

    if(major=1){
	BCOE player1= new BCOE(100, 0, 0, name);
    	cout<< "Welcome to UCR BCOE student, " << name << ", and I hope you are ready to embark on your journey as a Highlander."<<endl;
	cout<< "Today is your first day!" << "It is 8am in the morning and you are ready to start the day. " <<endl;
	cout<< "Please select an option (1=Check Time, 2=Check Low Stats, 3=Get Stats, 4=Continue Game)" <<endl;
	cin >> option;
	if(option=1){
	  player1.checkTime();
	  cout << endl;
          cout<< "Please select an option (1=Check Time, 2=Check Low Stats, 3=Get Stats, 4=Continue Game)" <<endl;
	}
    }	
    if(major=2)
	CNAS player2= new CNAS(0, 0, 100, name);
	cout<< "Welcome to UCR BCOE student, " << name << ", and I hope you are ready to embark on your journey as a Highlander."<<endl;
        cout<< "Today is your first day!" << "It is 8am in the morning and you are ready to start the day. " <<endl;
    if(major=3)
	CHASS player3= new CHASS(0, 100, 0, name);
	cout<< "Welcome to UCR BCOE student, " << name << ", and I hope you are ready to embark on your journey as a Highlander."<<endl;
        cout<< "Today is your first day!" << "It is 8am in the morning and you are ready to start the day. " <<endl;
    
     
	
    return 0;
}
