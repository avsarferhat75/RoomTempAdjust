#pragma once

float minTemp, maxTemp, currentTemp;
void userInput();
int userInputforTest();

class temperature
{
    public:
        void heat(float *temp){*temp+=0.5;}
        void cool(float *temp){*temp-=0.5;}
        void setMinTemp(float temp){minTemp=temp;}
        void setMaxTemp(float temp){maxTemp=temp;}
        float getMinTemp(){return minTemp;}
        float getMaxTemp(){return maxTemp;}

    private:
        float minTemp;
        float maxTemp;

};