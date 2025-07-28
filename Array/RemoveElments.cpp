/ LeetCode #27 - Remove Element
// Remove all occurrences of val from nums in-place and return new length.

#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // index for placing elements not equal to val
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k++] = nums[i];  // keep this element
            }
        }
        
        return k;  // new length without val
    }
}
