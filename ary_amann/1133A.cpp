#include <iostream>
#include <string>

using namespace std;

int convert_to_minutes(int hours, int mins)
{
    return hours * 60 + mins;
}

void convert_to_hours(int mins)
{
    const int hours = mins / 60;
    const int minutes = mins % 60;
    if (hours>=10){
        cout << hours;
    }else{
        cout << 0 << hours;
    }
    cout << ":";
    if (minutes>=10){
        cout << minutes;
    }else{
        cout << 0 << minutes;
    }
    return;
}

int main()
{
    string time1, time2;
    cin >> time1 >> time2;
    const int hour1 = (time1[0] - '0') * 10 + (time1[1] - '0');
    const int hour2 = (time2[0] - '0') * 10 + (time2[1] - '0');
    const int min1 = (time1[3] - '0') * 10 + (time1[4] - '0');
    const int min2 = (time2[3] - '0') * 10 + (time2[4] - '0');
    const int first_minutes = convert_to_minutes(hour1, min1);
    const int second_minutes = convert_to_minutes(hour2, min2);
    const int mid_time = (first_minutes + second_minutes) / 2;
    convert_to_hours(mid_time);

    return 0;
}