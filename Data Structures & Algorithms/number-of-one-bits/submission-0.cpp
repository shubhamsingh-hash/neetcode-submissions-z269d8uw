class Solution {
public:
    int hammingWeight(uint32_t n) {
        int a=0;
        while(n>0){
            int bit=n&1;
            if(bit==1){
                a++;
            }
            n>>=1;
        }
        return a;

    }
};
