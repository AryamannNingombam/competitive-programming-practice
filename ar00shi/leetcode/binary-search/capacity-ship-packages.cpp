#include <bits/stdc++.h>
using namespace std; 
    int shipWithinDays(vector<int>& weights, int D) {
        int left = 0, right = 0;
        for (int w: weights) {
            left = max(left, w);
            right += w;
        }
        while (left < right) {
            int mid = (left + right) / 2, requirement = 1, tillnow = 0;
            for (int w: weights) {
                if (tillnow + w > mid) {
                   requirement += 1;
                   tillnow = 0;
                }
                tillnow += w;
            }
            if (requirement > D) left = mid + 1;
            else right = mid;
        }
        return left;
    }


    ///what the actual fuck is going on here