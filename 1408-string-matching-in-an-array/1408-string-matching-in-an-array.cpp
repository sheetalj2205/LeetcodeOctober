class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(string word : words){
            for(string j : words){
                if(word == j){
                    continue;
                }
                if(j.find(word) != -1){
                    ans.push_back(word);
                    break;
                }
            }
        }
        return ans;
    }
};