#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;
using int_pair = pair<int, int>;
using int_pair_vector = vector<int_pair>;

string return_result(int_pair_vector &participants_score, int participants)
{
    int_pair temp, previous_temp;

    //first check;
    for (int i = 0; i < participants; i++)
    {
        temp = participants_score[i];
      
        if (temp.first != temp.second)
            return "rated";
    }

    //second check;
    for (int i = 1; i < participants; i++)
    {
        temp = participants_score[i];
        previous_temp = participants_score[i - 1];
        if (temp.first > previous_temp.first)
            return "unrated";
    }

    return "maybe";
}

int main()
{
    int participants, first_score, second_score;
    cin >> participants;
    int_pair_vector participants_score(participants);
    for (int i = 0; i < participants; i++)
    {
        cin >> first_score >> second_score;
        participants_score[i] = (int_pair(first_score, second_score));
    }
    cout << return_result(participants_score, participants) << '\n';

    return 0;
}