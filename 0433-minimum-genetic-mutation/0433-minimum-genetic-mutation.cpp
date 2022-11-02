class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        //create a queue 
        queue<string> q;
        int steps = 0;
        //take map to check if that node is visited or not
        unordered_map<string, int> mp;
        
        //first push start string to queue
        q.push(start);
        mp[start] = 1;
        
        //iterate till q is empty
        while(!q.empty()){
            //iterate queue from the back as size of queue always varies
            for(int i = q.size(); i>0; i--){
              //mark this string as visited
              string st = q.front();
              q.pop();
              //now iterate this string and check if it is equal to end string or not
              if(st == end){
                return steps;
              }
                //replace each char with A,C,G,T
                for(int j = 0; j<8; j++){
                    char ch = st[j];
                    
                    //iterate A,C,G,T alternatively
                    for(int k = 0; k<4; k++){
                        st[j] = "ACGT"[k];
                        
                        //check if that string is already present in map and bank or not
                        if(!mp[st] && find(bank.begin(), bank.end(), st) != bank.end()){
                            q.push(st);
                            mp[st] = 1;
                        }
                    }
                    //backtrack
                    st[j] = ch;
                }   
            }
            steps+=1;
        }
        return -1;
    }
};