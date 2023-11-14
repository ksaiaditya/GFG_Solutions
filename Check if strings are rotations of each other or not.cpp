/*
Title     : Check if strings are rotations of each other or not
Author    : Karnati Sai Aditya
Solved On : 14 Nov 2023
Solved Using : CPP
*/

class Solution
{
    public:
    bool areRotations(string s1,string s2)
    {
        if(s1.size() != s2.size()){
            return false;
        }
        string temp = s1+s1;
        return (temp.find(s2) != string::npos);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)
