#include "../header/Player.h"
#include "../header/BCOE.h"
#include "../header/CHASS.h"
#include "../header/CNAS.h"

void optionBCOE(int n, BCOE player);
void optionCNAS(int n, CNAS player);
void optionCHASS(int n, CHASS player);

int main() {
    string name = "";
    int major = 0;
    int event= rand() % 4 + 2;
    int event2= rand() % 5 + 6;
    int event3= rand() % 5 + 11;
    int event4= rand() % 5 + 16;
    int event5= rand() % 5 + 21;
    int event6= rand() % 5 + 26;
    int event7= rand() % 5 + 31;
    int event8= rand() % 5 + 36;
    int event9= rand() % 5 + 41;
    int event10= rand() % 5 + 46;
    cout << "Please enter your name: ";
    getline (cin, name);
    
    cout << "Please choose your major (1 - BCOE, 2 - CNAS, 3 - CHASS): ";
    cin >> major;

    while (major > 3 || major < 1) {
        cout << "Error with number choice. Please try again.";
        cin >> major;
    }

    if(major=1){
	BCOE player= new BCOE(100, 0, 0, name);
    	cout<< "Welcome to UCR BCOE student, " << name << ", and I hope you are ready to embark on your journey as a Highlander."<<endl;
	cout<< "Tomorrow is your first day!" << "It is 12am in the morning and you are about to sleep. Please enter an amount of hours you would like to sleep (8-12)" <<endl;
	cin >> sleep;
	while(sleep<8 || sleep >12){
	  cout<< "Tomorrow is your first day!" << "It is 12am in the morning and you are about to sleep. Please enter an amount of hours you would like to sleep (8-12)" <<endl;
	}
	cout<< "Today is your first day! It is " << sleep << "o'clock. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
	cin >> option;
	while(option<1 || option >8){
	 cout<<"There is an error with your input. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
	}

	if(option>=1 && option <=7){
	 optionBCOE(option,player);
	}


	int day=2;
	while(day<51){
	cout<<endl;
	if(day>1 && day<6){
	cout<< "Today is day " << day << ". You are ready to continue Week 1 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
}
	else if(day>=6 && day<11){
	cout<< "Today is day " << day << ". You are ready to continue Week 2 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
	}
	else if(day>=11 && day<16){
        cout<< "Today is day " << day << ". You are ready to continue Week 3 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
	}
	else if(day>=16 && day<21){
        cout<< "Today is day " << day << ". You are ready to continue Week 4 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
	}
	else if(day>=21 && day<26){
        cout<< "Today is day " << day << ". You are ready to continue Week 5 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
	}
	else if(day>=26 && day<31){
        cout<< "Today is day " << day << ". You are ready to continue Week 6 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
	else if(day>=31 && day<36){
        cout<< "Today is day " << day << ". You are ready to continue Week 7 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
	else if(day>=36 && day<41){
        cout<< "Today is day " << day << ". You are ready to continue Week 8 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
	else if(day>=41 && day<46){
        cout<< "Today is day " << day << ". You are ready to continue Week 9 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
	else if(day>=46 && day<51){
        cout<< "Today is day " << day << ". You are ready to continue Week 10 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
 	cin >> option;
        while(option<1 || option >8){
         cout<<"There is an error with your input. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }

        if(option>=1 && option <=7){
         optionBCOE(option,player);
        }
	if(day==event||day==event2||day=event3||day==event4||day==event5||day==event6||day==event7||day==event8||day==event9||day==event10){
		cout<< "Woah!! You had a random event today!! Let's see what it is..." <<endl;
		cout<<endl;
		cout<<endl;
		player.randomEvent();
	}
	day++;
}

	cout<< "Today marks a special day in your journey..." <<endl;
	cout<< name << ", you have successfully completed your survival journey!! There is still much more in store for you in the years to come but you have come such a long way." <<endl;
	cout<< "Good luck with the rest of your endavors and thank you for your time. GO HIGHLANDERS!!" <<endl;
}	
    if(major=2)
	CNAS player= new CNAS(0, 0, 100, name);
	cout<< "Welcome to UCR CNAS student, " << name << ", and I hope you are ready to embark on your journey as a Highlander."<<endl;
	cout<< "Tomorrow is your first day!" << "It is 12am in the morning and you are about to sleep. Please enter an amount of hours you would like to sleep (8-12)" <<endl;
        cin >> sleep;
        while(sleep<8 || sleep >12){
          cout<< "Tomorrow is your first day!" << "It is 12am in the morning and you are about to sleep. Please enter an amount of hours you would like to sleep (8-12)" <<endl;
        }
        cout<< "Today is your first day! It is " << sleep << "o'clock. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        cin >> option;
        while(option<1 || option >8){
         cout<<"There is an error with your input. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }

        if(option>=1 && option <=7){
         optionCNAS(option,player);
        }


        int day=2;
	while(day<51){
        cout<<endl;
        if(day>1 && day<6){
        cout<< "Today is day " << day << ". You are ready to continue Week 1 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
}
        else if(day>=6 && day<11){
        cout<< "Today is day " << day << ". You are ready to continue Week 2 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=11 && day<16){
        cout<< "Today is day " << day << ". You are ready to continue Week 3 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=16 && day<21){
        cout<< "Today is day " << day << ". You are ready to continue Week 4 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=21 && day<26){
        cout<< "Today is day " << day << ". You are ready to continue Week 5 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=26 && day<31){
        cout<< "Today is day " << day << ". You are ready to continue Week 6 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=31 && day<36){
        cout<< "Today is day " << day << ". You are ready to continue Week 7 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=36 && day<41){
        cout<< "Today is day " << day << ". You are ready to continue Week 8 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=41 && day<46){
        cout<< "Today is day " << day << ". You are ready to continue Week 9 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=46 && day<51){
        cout<< "Today is day " << day << ". You are ready to continue Week 10 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        cin >> option;
        while(option<1 || option >8){
         cout<<"There is an error with your input. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }

        if(option>=1 && option <=7){
         optionCNAS(option,player);
        }
	if(day==event||day==event2||day=event3||day==event4||day==event5||day==event6||day==event7||day==event8||day==event9||day==event10){
                cout<< "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                cout<<endl;
                cout<<endl;
                player.randomEvent();
        }
        day++;
}

        cout<< "Today marks a special day in your journey..." <<endl;
        cout<< name << ", you have successfully completed your survival journey!! There is still much more in store for you in the years to come but you have come such a long way." <<endl;
        cout<< "Good luck with the rest of your endavors and thank you for your time. GO HIGHLANDERS!!" <<endl;
}        
    if(major=3)
	CHASS player= new CHASS(0, 100, 0, name);
	cout<< "Welcome to UCR CHASS student, " << name << ", and I hope you are ready to embark on your journey as a Highlander."<<endl;
	cout<< "Tomorrow is your first day!" << "It is 12am in the morning and you are about to sleep. Please enter an amount of hours you would like to sleep (8-12)" <<endl;
        cin >> sleep;
        while(sleep<8 || sleep >12){
          cout<< "Tomorrow is your first day!" << "It is 12am in the morning and you are about to sleep. Please enter an amount of hours you would like to sleep (8-12)" <<endl;
        }
        cout<< "Today is your first day! It is " << sleep << "o'clock. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        cin >> option;
        while(option<1 || option >8){
         cout<<"There is an error with your input. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }

        if(option>=1 && option <=7){
         optionBCOE(option,player);
        }


        int day=2;
	while(day<51){
        cout<<endl;
        if(day>1 && day<6){
        cout<< "Today is day " << day << ". You are ready to continue Week 1 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
}
        else if(day>=6 && day<11){
        cout<< "Today is day " << day << ". You are ready to continue Week 2 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=11 && day<16){
        cout<< "Today is day " << day << ". You are ready to continue Week 3 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=16 && day<21){
        cout<< "Today is day " << day << ". You are ready to continue Week 4 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=21 && day<26){
        cout<< "Today is day " << day << ". You are ready to continue Week 5 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=26 && day<31){
        cout<< "Today is day " << day << ". You are ready to continue Week 6 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=31 && day<36){
        cout<< "Today is day " << day << ". You are ready to continue Week 7 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=36 && day<41){
        cout<< "Today is day " << day << ". You are ready to continue Week 8 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=41 && day<46){
        cout<< "Today is day " << day << ". You are ready to continue Week 9 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        else if(day>=46 && day<51){
        cout<< "Today is day " << day << ". You are ready to continue Week 10 of your UCR journey. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }
        cin >> option;
        while(option<1 || option >8){
         cout<<"There is an error with your input. Please select an option (1=Get Stats, 2=Eat, 3=Sleep, 4=Calculate School Level, 5=Go to class, 6=Study, 7=Droput 8=Continue Game)" <<endl;
        }

        if(option>=1 && option <=7){
         optionBCOE(option,player);
        }
	if(day==event||day==event2||day=event3||day==event4||day==event5||day==event6||day==event7||day==event8||day==event9||day==event10){
                cout<< "Woah!! You had a random event today!! Let's see what it is..." <<endl;
                cout<<endl;
                cout<<endl;
                player.randomEvent();
        }
        day++;
}

        cout<< "Today marks a special day in your journey..." <<endl;
        cout<< name << ", you have successfully completed your survival journey!! There is still much more in store for you in the years to come but you have come such a long way." <<endl;
        cout<< "Good luck with the rest of your endavors and thank you for your time. GO HIGHLANDERS!!" <<endl;
}    
     
	
   return 0;
}

void optionBCOE(int n,BCOE player){
   if(n=1){
	player.getStats();
}
   if(n=2){
	player.eat();
}
   if(n=3){
	cout<<"Select an amount of time you want to sleep (1-12)"<< endl;
	cin>>val;
	while(val<1 || val>12){
		cout<<"Select an amount of time you want to sleep (1-12)"<< endl;
       	        cin>>val;
	}
	player.sleep(val);
}
   if(n=4){
	player.calcSchoolLevel();
}
   if(n=5){
	player.goToClass();
}
   if(n=6){
	cout<<"Select an amount of time you want to study (1-24)
	cin>>val;
        while(val<1 || val>24){
                cout<<"Select an amount of time you want to study (1-12)"<< endl;
                cin>>val;
        }
	player.study(val);
}
   if(n=7){
        cout<<"I am sorry to hear your journey has come to an end."<< endl;
	cout<<"Here are your stats:" <<endl;
	cout<< player.getStats();
	cout<< "I wish you all the best in your future endavors!" <<endl;
	return 0;
}
}



void optionCNAS(int n,CNAS player){
   if(n=1){
        player.getStats();
}
   if(n=2){
        player.eat();
}
   if(n=3){
        cout<<"Select an amount of time you want to sleep (1-12)"<< endl;
        cin>>val;
        while(val<1 || val>12){
                cout<<"Select an amount of time you want to sleep (1-12)"<< endl;
                cin>>val;
        }
        player.sleep(val);
}
   if(n=4){
        player.calcSchoolLevel();
}
   if(n=5){
        player.goToClass();
}
   if(n=6){
        cout<<"Select an amount of time you want to study (1-24)
        cin>>val;
        while(val<1 || val>24){
                cout<<"Select an amount of time you want to study (1-12)"<< endl;
                cin>>val;
        }
        player.study(val);
}
   if(n=7){
        cout<<"I am sorry to hear your journey has come to an end."<< endl;
        cout<<"Here are your stats:" <<endl; 
        cout<< player.getStats();
        cout<< "I wish you all the best in your future endavors!" <<endl;
        return 0;
}
}

void optionCHASS(int n,CHASS player){
   if(n=1){
        player.getStats();
}
   if(n=2){
        player.eat();
}
   if(n=3){
        cout<<"Select an amount of time you want to sleep (1-12)"<< endl;
        cin>>val;
        while(val<1 || val>12){
                cout<<"Select an amount of time you want to sleep (1-12)"<< endl;
                cin>>val;
        }
        player.sleep(val);
}
   if(n=4){
        player.calcSchoolLevel();
}
   if(n=5){
        player.goToClass();
}
   if(n=6){
        cout<<"Select an amount of time you want to study (1-24)
        cin>>val;
        while(val<1 || val>24){
                cout<<"Select an amount of time you want to study (1-12)"<< endl;
                cin>>val;
        }
        player.study(val);
}
   if(n=7){
        cout<<"I am sorry to hear your journey has come to an end."<< endl;
        cout<<"Here are your stats:" <<endl; 
        cout<< player.getStats();
        cout<< "I wish you all the best in your future endavors!" <<endl;
        return 0;
}
}

