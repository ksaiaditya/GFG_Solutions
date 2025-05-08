"""
Title     : Missing element of AP
Author    : Karnati Sai Aditya
Solved On : 08-05-2025
Solved Using : Java
"""
class Solution {
    public int findMissing(int[] arr) {
        int a = arr[0];
        int d = arr[1]-arr[0];
        int n = arr.length;
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] == a+d*mid){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return a+d*low;
    }
}
// Time Complexity: O(log n)
// Space Complexity: O(1)
// The code uses binary search to find the missing element in an arithmetic progression (AP).