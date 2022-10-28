class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<int>> mp;
        
        for(int i = 0; i<strs.size(); i++){
            string st = strs[i];
            sort(st.begin(), st.end());
            mp[st].push_back(i);
        }
        for(auto it : mp){
            vector<string> level;
            for(int i = 0; i<it.second.size(); i++){
                level.push_back(strs[it.second[i]]);
            }
            ans.push_back(level);
        }
        // set<string> st;
        // for(int i = 0; i<strs.size(); i++){
        //     string str = strs[i];
        //     sort(str.begin(), str.end());
        //     st.insert(str);
        // }
        // for(auto it : st){
        //     vector<string> level;
        //     for(int i = 0; i<strs.size(); i++){
        //       string str = strs[i];
        //       sort(str.begin(), str.end());
        //       if(it == str){
        //           level.push_back(strs[i]);
        //       }
        //  }
        //     ans.push_back(level);
        // }
        return ans;
    }
};