class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int index = digits.size() - 1;

        do {
            if (digits[index] < 9) {
                ++digits[index];
                return digits;
            }
            digits[index] = 0;
        } while (--index >= 0);

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
