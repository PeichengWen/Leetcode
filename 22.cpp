class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s;
        add(v,s,n,n);
        return v;
        
    }
    void add(vector<string> &v,string s,int m,int n){
        if(m==0&&n==0){
             v.push_back(s);
            return;
        }
        if(m>0){
            s+='(';
            add(v,s,m-1,n);
        }
        if(n>m){
            s+=')';
            add(v,s,m,n-1);
        }
    }
};
