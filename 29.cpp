class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(divisor==0) return INT_MAX;
        
        long long res = 0;
        int i = 1;
        if((dividend<=0&&divisor>0)||(dividend>=0&&divisor<0)) i = -1;
        long long end,sor;
        end=abs(dividend);
        sor = abs(divisor);
        while(end>=sor){
            res++;
            end-=sor;
        }
        
        if(i==-1){
            return (0-res);}
        else return res;
    }
};
