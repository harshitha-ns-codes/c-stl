#include <vector>   // Include vector header
using namespace std; // Or use std::vector everywhere

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> result;
        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};