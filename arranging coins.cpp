class Solution {
public:
    int arrangeCoins(int n) {
        int k=0;
        int i =1;
        while(n>=i){
            n = n-i;
            k++;
            i++;
        }
        return k;
        
    }
};
