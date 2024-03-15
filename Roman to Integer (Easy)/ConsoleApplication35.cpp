class Solution {
public:
    int value(char r) {
        if (r == 'I') return 1;
        if (r == 'V') return 5;
        if (r == 'X') return 10;
        if (r == 'L') return 50;
        if (r == 'C') return 100;
        if (r == 'D') return 500;
        if (r == 'M') return 1000;
        return -1;
    }

    int romanToInt(string s) {
        int total = 0;
        int prev = 0;
        for (char c : s) {
            int current = value(c);
            total += (current > prev) ? (current - 2 * prev) : current;
            prev = current;
        }
        return total;
    }
};