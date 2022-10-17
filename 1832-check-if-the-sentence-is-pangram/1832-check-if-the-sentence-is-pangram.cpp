class Solution {
public:
    bool checkIfPangram(string sentence) {
      unordered_map<char,int> mp;
        for(char s:sentence){
            mp[s]++;
        }
        if(mp.size()<26){
            return false;
        }
        return true;
    }
};