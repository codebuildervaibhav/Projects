#include <iostream>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <sstream>

using namespace std;

//alarm clock class
class alarm {
private:
    tm askedTime, currentTime, differenceInTime;
    time_t now;
public:
    alarm() //constructor of the class
    {
        now = time(0);
        currentTime = *localtime(&now);
        askedTime = currentTime;
        askedTime.tm_sec = 0;
    }
    void getTime() // function to take input from the user.
    {
        string Time;
        cout<<"Enter time in 24-hour format [HH:MM] : "; getline(cin,Time);
        int pos = 0, h;
        while ((pos = Time.find(':')) != string::npos)
        {
            string token = Time.substr(0,pos);
            stringstream convert (token);
            convert >> askedTime.tm_hour;
            Time.erase(0,pos+1);
        }
        stringstream convert (Time);
        convert >> askedTime.tm_min;
    }
    void timeDifference() // function to calculate difference between current time and asked time.
    {
        int seconds = difftime(mktime(&askedTime),now);
        differenceInTime.tm_min = seconds / 60;
        differenceInTime.tm_hour = differenceInTime.tm_min / 60;
        differenceInTime.tm_min = differenceInTime.tm_min % 60;
        differenceInTime.tm_sec = seconds % 60;
        if (seconds < 0)
        {
            differenceInTime.tm_hour = 24 + differenceInTime.tm_hour - 1;
            differenceInTime.tm_min = 0 - differenceInTime.tm_min;
            differenceInTime.tm_sec = 0 - differenceInTime.tm_sec;
        }
    }
    void start_alarm() // function to start alarm and print the time reaming to hit the desired time.
    {
        while (true)
        {
            system("cls");
            now = time(0);
            currentTime = *localtime(&now);
            timeDifference();
            cout<<"TIME REMAINING:    "<<differenceInTime.tm_hour<<":"<<differenceInTime.tm_min<<":"<<differenceInTime.tm_sec;
            if (differenceInTime.tm_hour == 0 && differenceInTime.tm_min == 0 && differenceInTime.tm_sec == 0)
            
            {
                cout<<endl<<"Time Completed"<<endl<<">>> PRESS CTRL+C or Click on CROSS BUTTON to stop the alarm <<<"<<endl;
                break;
            }
        }
    }
};

int main()
{
    alarm A;
    A.getTime();
    A.start_alarm();
    for (int i = 0; ; i = i + 50)
        Beep(i,1000);
    return 0;
}
