class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int cnt = 0;
        unordered_map<string, int> freq;
        for(string st : words){
            string p = st;
            reverse(p.begin(), p.end());
            
            if(freq[p] > 0){
                cnt += 4;
                freq[p]--;
            }
            
            else{
                freq[st]++;
            }
            
        }
        for(auto it: freq){
            cout<<it.first<<" "<<it.second<<endl;
            if(it.first[0] == it.first[1] && it.second > 0){
                return cnt += 2;
            }
            
        }
        cout<<cnt;
        
        return cnt;
        
    }
};