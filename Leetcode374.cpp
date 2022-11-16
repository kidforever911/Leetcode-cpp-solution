/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 0, right = n;
        while(left < right) {
            int mid = (long long)left + right >> 1;
            if(guess(mid) <= 0) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};