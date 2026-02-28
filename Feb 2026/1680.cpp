#include <string>
using namespace std;
const long long mod = 1e9 + 7;

class Solution {
public:

    long long binaryToDecimal(string s) {
        long long result = 0;

        for (int i = 0; i < s.size(); i++) {
            result = (result * 2) % mod;
            result = (result + (s[i] - '0')) % mod;
        }

        return result;
    }

    string detb(int i){
        string vals = "";
        long long temp = i;

        while(temp > 1){
            if(temp % 2 == 0) vals += '0';
            else vals += '1';
            temp = temp / 2;
        }

        if(temp == 1) vals += '1';

        reverse(vals.begin(), vals.end());
        return vals;
    }

    int concatenatedBinary(int n) {
        string ans = "";

        for(int i = 1; i <= n; i++){
            string val = detb(i);
            ans += val;
        }

        return binaryToDecimal(ans);
    }
};

class Solution {
public:
    int M = 1e9+7;
    int concatenatedBinary(int n) {
        
        long result = 0;
        
        for(int i = 1; i<=n; i++) {
            int digits = log2(i) + 1;
            
            result = (((result << digits)%M) + i)%M;
        }
        
        return result;
        
    }
};
