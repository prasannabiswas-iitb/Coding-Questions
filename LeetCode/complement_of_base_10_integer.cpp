class Solution {
public:
    int bitwiseComplement(int n) {
        int i=0;
        int comp = 0;
        if(n==0)
            return 1;
        while(n!=0)
        {
            if(n%2==0)
            {
                comp = comp + (int)pow(2,i);
            }
            i++;
            n/=2;
        }
        return comp;
    }
};