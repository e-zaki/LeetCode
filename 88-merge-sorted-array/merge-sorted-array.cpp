class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0, l = m;
        while (l >= 0 && j < n) {
            if (nums1[i] <= nums2[j]) {
                l--;
            }
            else {
                nums1.insert(nums1.begin() + i, nums2[j]);
                j++;
            }
            i++;
        }
        while (nums1.size() > m + j)
            nums1.pop_back();
        for (; j < n; j++)
        {
            nums1.push_back(nums2[j]);
        }
    }
};