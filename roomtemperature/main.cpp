#include <iostream>
#include <chrono>
#include <thread>
#include "temperature.h"

void userInput()
{
    std::cout << "Enter current temperature: ";
    std::cin>>currentTemp;
    std::cout <<std::endl<< "Enter minimum temperature: ";
    std::cin >> minTemp;
    std::cout<<std::endl<<"Enter maximum temperature: ";
    std::cin>>maxTemp;
}

int main(int, char**) {

    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds
    float idealTemp {25};
    userInput();
    temperature myRoom;
    myRoom.setMinTemp(minTemp);
    myRoom.setMaxTemp(maxTemp);

    if(currentTemp<myRoom.getMinTemp())
    {
        while(currentTemp<idealTemp)
        {
            myRoom.heat(&currentTemp);
            std::cout<<"Room Temperature is "<<currentTemp<<std::endl;
            sleep_for(seconds(1));
        }
    }
    else if(currentTemp>myRoom.getMaxTemp())
    {
        while(currentTemp>idealTemp)
        {
            myRoom.cool(&currentTemp);
            std::cout<<"Room Temperature is "<<currentTemp<<std::endl;
            sleep_for(seconds(1));
        }
    }
    return 0;

}
