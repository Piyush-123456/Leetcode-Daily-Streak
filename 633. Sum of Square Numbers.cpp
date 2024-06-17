class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c);
        while (left <= right) {
            long long sum = left * left + right * right;
            if (sum == c) {
                return true;
            }
            if (sum < c) {
                left++;
            }
            if (sum > c) {
                right--;
            }
        }
        return false;
    }
};
