// LeetCode #88 - Merge Sorted Array (optimized best case)
// If nums1 already ends with elements larger than nums2, copy nums2 at front.

#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // If nums1's last actual element is <= nums2's first element,
        // just copy nums2 after nums1's elements (best case).
        if (m > 0 && n > 0 && nums1[m - 1] <= nums2[0]) {
            for (int i = 0; i < n; i++) {
                nums1[m + i] = nums2[i];
            }
            return;
        }

        // Otherwise, merge from end as usual
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};
