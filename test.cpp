#include "gtest/gtest.h"
#include "header/Player.h"
#include "header/CNAS.h"
#include "header/BCOE.h"
#include "header/CHASS.h"
#include <string>

TEST(PlayerFunctions, schoolLevel) {
    BCOE user(10, 40, 5, "N/A");
    int schoolLvl = user.calcSchoolLevel();
    EXPECT_EQ(schoolLvl, 18);
}


TEST(PlayerFunctions, checkTime) {
    std::stringstream output;
    BCOE user(0, 0, 0, "N/A");
    user.checkTime(output);
    std::string str = output.str();
    EXPECT_EQ(str, "");
}

TEST(PlayerFunctions, checkLowStats) {
    std::stringstream output;
    BCOE user(0, 0, 0, "N/A");
    user.checkLowStats(output);
    std::string str = output.str();
    EXPECT_EQ(str, "\nYou're too dumb. You have to study so you're not dumb.\n");
} 

TEST(PlayerFunctions, getStats) {
    std::stringstream output;
    BCOE user(0, 0, 0, "Jack");
    user.setStats(50, 50, 20, 10, 80, 40);
    user.getStats(output);
    std::string str = output.str();
    EXPECT_EQ(str, "Name: Jack\nMajor: BCOE\nTime remaining: 24/24\nFood: 50/100\nSleep: 50/100\nSchool: 43/100\nMath: 10/100\nScience: 80/100\nEnglish: 40/100\n");
}

TEST(Exceptions, Player) {
    std::stringstream output;
    try {
        BCOE user(-3, -7, 0, "N/A");
    }
    catch (const char* s) {
	output << "[ERROR]: " << s << endl;
    }
    std::string str = output.str();
    EXPECT_EQ(str, "[ERROR]: Cannot instantiate with negative values!\n");
}

TEST(Exceptions, setStats) {
    std::stringstream output;
    BCOE user(0, 0, 0, "N/A");
    try {
	user.setStats(0, 8, -2, 4, -9, 10);
    }
    catch(const char* s) {
	output << "[ERROR]: " << s << endl;
    }
    std::string str = output.str();
    EXPECT_EQ(str, "[ERROR]: Cannot set stats with negative values!\n");
}

TEST(RandomEventFunction, getEventNumber) {
    RandomEvent rand;
    int randNum = rand.getEventNumber();
    EXPECT_TRUE(randNum > 0 && randNum < 12);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
