#include <algorithm>
#include <cassert>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    string makeGood(string s) { 
        string ans;
        
        for (int i=0; i<s.size(); i++) {
            ans.push_back(s[i]);
            
            while (ans.size() && (ans.back() == s[i+1]+32 || ans.back() == s[i+1]-32)) {
                ans.pop_back();
                i++;
            }
        }
        return ans;
    }
};

int main(int argc, char* argv[]) {
    /*Initialize Solution Object*/
    Solution sol;

    /*Test case 1*/
    // std::vector<int> nums{20,1,15,3,10,5,8};
    string s = "leEeetcode";
    string ans = sol.makeGood(s);
    cout << ans << endl;
    assert("leetcode" == ans);

    return 0;
}