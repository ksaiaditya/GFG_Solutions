/*
Title     : Closest Neighbour in BST
Author    : Karnati Sai Aditya
Solved On : 30 May 2025
Solved Using : CPP
*/

class Solution {
  public:
    void preOrder(Node* curr, int k, int& ans){
        if(curr == NULL) return;
        
        if(curr -> data <= k && curr -> data > ans) ans = curr -> data;
        
        if(curr -> data > k) preOrder(curr -> left, k, ans);
        else preOrder(curr -> right, k, ans);
    }
    int findMaxFork(Node* root, int k) {
        int ans = -1;
        preOrder(root, k, ans);
        return ans;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(h) where h is the height of the tree