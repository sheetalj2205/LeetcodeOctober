class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int cnt = 0;
        
        //use map to store string and its frequency
        unordered_map<string, int> freq;
        for(string st : words){
            
            //first revserse the string
            string p = st;
            reverse(p.begin(), p.end());
            
            //after reversing check that string is in the map or not
            if(freq[p] > 0){
                cnt += 4; //if it is present add 4 to res of both st and p
                freq[p]--; //and decrease its freq by 1
            }
            
            else{
                freq[st]++; //if reverse of that string is not present then simply increase its freq in map
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