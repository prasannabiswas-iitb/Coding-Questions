class Solution {
public:
    bool isPowerOfTwo(int n) {
        int pow2 = 1;
        for(int i=0; i<=31; i++)
        {
            if(pow2 == n)
                return true;
            if(pow2 < (INT_MAX/2))
                pow2 = pow2 * 2;
        }
        return false;
    }
};