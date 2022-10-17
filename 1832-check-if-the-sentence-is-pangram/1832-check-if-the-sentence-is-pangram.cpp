class Solution {
public:
    bool checkIfPangram(string sentence) {
        //create a vector to maintain freq
        vector<int> freq(26,0);
        for(int i = 0; i<sentence.size(); i++){
            //if freq of that letter is 0 then only mark it as appeared otherwise it is already marked
            if(freq[sentence[i] -'a'] == 0){
                freq[sentence[i] -'a'] = 1;
            }
            
        }
        //use another loop to find if there is any letter with 0 freq or not
        for(int i = 0; i<freq.size();i++){
            if(freq[i] == 0){
                return false;
            }
        }
        return true;
        
    }
};