/*
Title     : Isomorphic Strings
Author    : Karnati Sai Aditya
Solved On : 11 Nov 2023
Solved Using : CPP
*/

class Solution {
public:
    bool areIsomorphic(string str1, string str2) {
        if (str1.size() != str2.size())
            return false;

        unordered_map<char, char> mp1, mp2;
        for (int i = 0; i < str1.size(); i++) {
            if (mp1.count(str1[i]) == 0)
                mp1[str1[i]] = str2[i];
            if (mp2.count(str2[i]) == 0)
                mp2[str2[i]] = str1[i];

            if ((mp1[str1[i]] != str2[i]) || (mp2[str2[i]] != str1[i]))
                return false;
        }
        return true;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)