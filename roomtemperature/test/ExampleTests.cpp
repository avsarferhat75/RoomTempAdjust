#include <gtest/gtest.h>
#include "../temperature.h"

int userInputforTest()
{
    std::cout << "Enter current temperature: ";
    std::cin>>currentTemp;
    std::cout <<std::endl<< "Enter minimum temperature: ";
    std::cin >> minTemp;
    std::cout<<std::endl<<"Enter maximum temperature: ";
    std::cin>>maxTemp;
    if(currentTemp < minTemp) return 0;
    else if(currentTemp > maxTemp) return 1;
    else return 2;
}

TEST(ExampleTest,userInputforTest)
{
    int result = userInputforTest();
    if(result==0) std::cout<<"Room is heating up";
    else if(result==1)std::cout<<"Room is cooling down";
    else if(result==2)
    {
        std::cout<<"Room temperature is already between the ranges!";
        EXPECT_EQ(true,false);
    }
}