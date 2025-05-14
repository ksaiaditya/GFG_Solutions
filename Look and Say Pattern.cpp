/*
Title     : Look and Say Pattern
Author    : Karnati Sai Aditya
Solved On : 14 May 2025
Solved Using : CPP
*/
class Solution {
    public:
      string countAndSay(int n) {
          string prev = "1";
          for(int i = 2; i <= n; i++){
              string ans = "";
              int j = 0;
              while(j < prev.size()){
                  int cnt = 1;
                  while(j + 1 < prev.size() && prev[j] == prev[j + 1]) {
                      cnt++;
                      j++;
                  }
                  ans += to_string(cnt) + prev[j];
                  j++;
              }
              prev = ans;
          }
          return prev;
      }
  };
  //Time Complexity: O(n^2)
  //Space Complexity: O(1)