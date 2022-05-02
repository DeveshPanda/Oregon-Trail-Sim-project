 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# UCR Survival Journey RPG
 > Your author list below should include links to all members GitHub (remove existing author).
 
 > Authors: \<[Devesh Panda](https://github.com/DeveshPanda)\>\<[Joseph D'Angelo](https://github.com/joey8angelo)\>\<[Jose Mena](https://github.com/jmena016)\>\<[Satya Rajendra](https://github.com/sraje010)\>
 
 > You will be forming a group of **FOUR** students and working on an interesting project. The project has 4 phases, each one with specific requirements. A list of proposed project ideas that have been successful in previous quarters is listed in the project specifications document on Canvas. You can select an idea from the list, start thinking about the features you will implement, what design patterns can help you implement them, and why. If you want to propose your own original idea, you will have to contact an instructor to discuss the project and obtain written permission before you submit your project proposal (Phase 1). Your project needs to implement at least one design pattern iteratively, which you will have to justify in later phases.The project work should be divided almost equally among team members. You can of course help each other, but it needs to be clear who will be responsible for which features. Additionally, you are expected to follow Scrum patterns, specifically the use of a Scrum (Project) board, Sprints, and Scrum meetings. While Daily Scrums are not required we highly encourage you to practice them.

 
 > ## Expectations
 > * Incorporate **at least one** design pattern
 >   * It is recommended that you include a design pattern that we will teach this session (Composite, Strategy, or Visitor)
 > * Your project should be implemented in C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.
 > * Each member of the group must actively participate in the Github Project board and reviewing commited code.
> * All project phases are to be submitted to this GitHub repository. You should modify this README file to reflect the different phases of the project. In addition, you should regularly hold sprint meetings with your group. You will need to hold two scrum/check-in meetings with your lab TA/reader in two different weeks in addition to the final demo.


## Project Description
Creating this project interested our group because we have all had fond experiences with RPG’s and thought it would be interesting to create our own RPG. Another reason this project is important is because it allows us to have our first experience with creating a large computer science-related project in a team, while using industry standard tools and techniques such as Github and Scrum. For the project language, we are using C++. We are also using Kanban/Scrum to coordinate our work, Git and Github to help us track our changes and make sure they are correct, and PuTTY and Hammer to actually input and test our code. 

For the program’s input, it’s just different character’s on the user’s keyboard that represent different actions their character can take. The output will consist of text that is used to show the user what is going on in the program. One major feature of the program is that there are choices that the user can make that would affect the outcome of the story. Said choices can lead the user to finding multiple different endings, which is also another feature. Some choices include eating, sleeping, or going to class, all of which affect your stats in some way. Stats are another feature that the user is able to interact with, which help them decide what their next move should be. Stats can also block you from doing certain things. For example, if a stat is too low in a certain subject you won’t be able to do your homework for the subject until you attend office hours for the subject. In the game you can also choose which UCR college you would like to be a part of, which are essentially classes you can find in any RPG game. The colleges are what the stats are based off of, and each college has randomized stats excluding their own stat, which will start off at the maximum. Additionally, there is a certain amount of time in a day within the game, meaning the player must carefully plan what they want to do each day. Each college also has required classes they need to pass by the game’s standard to graduate, which is one of the possible endings. Finally, there are random events that can occur that will occur when trying to perform a normal action.

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members

## Class Diagram
![image](https://user-images.githubusercontent.com/58212666/166180186-28d38096-25a9-407a-bf1b-08b7d81399ea.png)

The base Player class is our foundation which carries most of our user's methods and private members so that for the rest of our derived classes BCOE, CHASS, and CNAS Major can inherit them as well as receive a Colleges class to support our abstract class (Player) within its private data members for additional user features. Some methods of user interaction includes the improve(), study(), and goToClass() functions which play a role in character progression and story continuity. A few features that separate our derived from our base are some hard coded stats that define our Major classes and the polymorphic functions such as "improve()" and "introduction()" which helps to distinguish our user's Major and stats. Finally our Colleges class is to help keep class count of our user for progression purposes though this one is still up for revision. 

Description:
 > Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design pattern(s) did you use? For each pattern you must explain in 4-5 sentences:
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design pattern(s) you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
