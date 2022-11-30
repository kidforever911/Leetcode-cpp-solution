class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();
        if(total % 2 == 0) {
            int left = find(nums1, 0, nums2, 0, total / 2);
            int right = find(nums1, 0, nums2, 0, total / 2 + 1);
            return (left + right) / 2.0;
        } else {
            return find(nums1, 0, nums2, 0, total / 2 + 1);
        }
    }

    int find(vector<int>& nums1, int index1, vector<int>& nums2, int index2, int k) {
        if(nums1.size() - index1 > nums2.size() - index2) return find(nums2, index2, nums1, index1, k);
        if(k == 1) {
            if(index1 == nums1.size()) return nums2[index2];
            else return min(nums1[index1], nums2[index2]);
        }
        if(index1 == nums1.size()) return nums2[index2 + k - 1];
        int s1 = min(index1 + k / 2,(int)nums1.size()), s2 = index2 + k - k / 2;
        if(nums1[s1 - 1] < nums2[s2 - 1]) {
            return find(nums1, s1, nums2, index2, k - (s1 - index1));
        } else {
            return find(nums1, index1, nums2, s2, k - (s2 - index2));
        }
    }
};