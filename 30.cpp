class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        vector<int> res;
        
        if(words.size()==0) return res;
        int nsize = s.size();
        int len = words[0].size();
        if(len>nsize) return res;
        int i=0;
        
        while((i+len)<=nsize){
            unordered_map<string,int> hash;
            for(int m=0;m<words.size();m++){
                hash[words[m]]++;
            }
            string temp;
            int pos = i;
            for(int j=0;j<len;j++){
                temp+=s[i+j];
            }
            while(hash.find(temp)!=hash.end()){
                
                hash[temp]--;
                i+=len;
                string temp;
                for(int j=0;j<min(len,(nsize-i));j++){
                    temp+=s[i+j];
                }
                unordered_map<string,int>::iterator itr;
                for(itr=hash.begin();itr!=hash.end();itr++){
                    if(itr->second!=0) break;
                }
                if(itr==hash.end()) res.push_back(i);
            }
            i+=len;
            
            
            
        }
        return res;
    }
};
