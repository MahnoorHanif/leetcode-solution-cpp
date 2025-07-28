// LeetCode #35 - Search Insert Position
// Return the index where target is found or should be inserted in sorted array.

#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;              // Target found
            else if (nums[mid] < target)
                left = mid + 1;          // Search right half
            else
                right = mid - 1;         // Search left half
        }
        
        // If not found, left is the insert position
        return left;
    }
};
