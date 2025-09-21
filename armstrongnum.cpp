class Solution {
public:
    bool isArmstrong(int n) {

        int dup = n;
        int sum = 0;

        while(n > 0){
            int ld = n % 10;
            sum = sum + (ld*ld*ld);
            n = n/10;

            

        }

        return(sum == dup);
        

    }
};