class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }

        int j = 1;
        int temp = n;
        while (temp > 0) {
            temp >>= 1;
            j <<= 1;
        }
        j -= 1;

        int compli = ~n;
        int finally = compli & j;
        return finally;
    }
};
