/*
Title     : How Many X's?
Author    : Karnati Sai Aditya
Solved On : 06 Dec 2023
Solved Using : CPP
*/

class Solution {
  public:
   int countX(int L, int R, int X) 
    {
        string str;
        string p = to_string(X);
        int ans{};
        for(int i = L+1; i<R; i++)
        {
            string t = to_string(i);
            str += t;
        }
        for(int i = 0; i<str.length(); i++)
        {
            if(str[i] == p[0])
                ans++;
        }
        return ans;
    }
};

// time complexity: O(n)
// space complexity: O(1)