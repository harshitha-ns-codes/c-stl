#include<iostream>
using namespace std;


class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            cout << "not prime";
            return false;
        }

        int cnt = 0;
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                cnt++;
                break; // no need to check further
            }
        }

        if (cnt == 0) {
            cout << "true ";
            return true;
        } else {
            cout << "false";
            return false;
        }
    }
};
