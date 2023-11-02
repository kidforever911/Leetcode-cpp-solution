/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length();
        int left = 0, right = n - 1;
        while(left < right) {
            int mid = left + right >> 1;
            if(mountainArr.get(mid) > mountainArr.get(mid + 1)) right = mid;
            else left = mid + 1;
        }
        int M = right;
        left = 0, right = M;
        while(left < right) {
            int mid = left + right >> 1;
            if(mountainArr.get(mid) >= target) right = mid;
            else left = mid + 1;
        }
        if (mountainArr.get(right) == target) return right;
        left = M + 1, right = n - 1;
        while(left < right) {
            int mid = left + right >> 1;
            if(mountainArr.get(mid) <= target) right = mid;
            else left = mid + 1;
        }
        if(mountainArr.get(right) == target) return right;
        return -1;
    }
};