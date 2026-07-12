#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
     int subtractProductAndSum(int n) {
        int sum = 0;
        int pr = 1;
    //     while(n>0){
    //     int digit = n % 10; 
    //         sum += digit;
    //         pr *= digit;
    //         n /= 10;
    // }
    //     return pr - sum;

    // string s = to_string(n);
    // for(int i=0; i<s.length(); i++){
    //     int k = s[i] - '0';
    //     sum+=k;
    //     pr*=k;
    // }
    // return pr - sum;
    // }

    string s = to_string(n);
    for(int i=0; i<s.length(); i++){
        string c = "";
        c+=s[i];
        int k = stoi(c);
        sum+=k;
        pr*=k;
    }
    return pr - sum;
    }
};