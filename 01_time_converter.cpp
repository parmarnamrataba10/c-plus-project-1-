#include <iostream>

using namespace std;

class TimeConverter
{
public:
    void secondsToTime(int totalSeconds)
    {
        int hours = totalSeconds / 3600;
        int minutes = (totalSeconds % 3600) / 60;
        int seconds = totalSeconds % 60;

        cout << "HH:MM:SS => "
             << hours << ":" << minutes << ":" << seconds << endl;
    }

    void timeToSeconds(int hours, int minutes, int seconds)
    {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Total seconds: " << totalSeconds << endl;
    }
};

int main()
{
    TimeConverter t1;

    int totalSeconds;
    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    t1.secondsToTime(totalSeconds);

    int hours, minutes, seconds;

    cout << "\n Enter hours: ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter seconds: ";
    cin >> seconds;

    t1.timeToSeconds(hours, minutes, seconds);

    return 0;
}