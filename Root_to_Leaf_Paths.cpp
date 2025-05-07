/*
Title     : Root to Leaf Paths
Author    : Karnati Sai Aditya
Solved On : 07 May 2025
Solved Using : CPP
*/

class Solution
{
public:
    vector<vector<int>> Paths(Node *root)
    {
        if (root == NULL)
            return {};
        vector<vector<int>> allPaths;
        vector<int> currentPath;
        findPaths(root, currentPath, allPaths);
        return allPaths;
    }
private:
    void findPaths(Node *root, vector<int> &currentPath, vector<vector<int>> &allPaths)
    {
        if (!root)
            return;
        currentPath.push_back(root->data);
        if (!root->left && !root->right)
        {
            allPaths.push_back(currentPath);
        }
        else
        {
            findPaths(root->left, currentPath, allPaths);
            findPaths(root->right, currentPath, allPaths);
        }
        currentPath.pop_back();
    }
};
// Time complexity: O(N), where N is the number of nodes in the tree. We visit each node once.
// Space complexity: O(H), where H is the height of the tree. The space is used for the recursion stack and the current path.