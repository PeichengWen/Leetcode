class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        int lenth = 0, maxlenth = 0;
        stack<int> a;
        for(int i=0;i<n;i++){
            lenth = 0;
            if(s[i]=='('){
                a.push(i);
            }else if(s[i]==')'){
                if(a.empty()) continue;
                else{
                    a.pop();
                    if(a.empty())
                        lenth = i+1;
                    else
                        lenth=i-a.top();
                }
            }
            maxlenth=max(maxlenth,lenth);
        }
        return maxlenth;
    }
};
