class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(divisor==0||(dividend==INT_MIN&&divisor==-1)) return INT_MAX;
        
        long long res = 0;
        int i = 1;
        if((dividend<=0&&divisor>0)||(dividend>=0&&divisor<0)) i = -1;
        long long dend=0,sor=0;
        dend=labs(dividend);
        sor = labs(divisor);
        while(dend>=sor){
            long long temp=sor,multiple=1;
            while(dend>=temp<<1){
                temp<<=1;
                multiple<<=1;
            }
            res+=multiple;
            dend-=temp;
        }
        
        if(i==-1)
            return (0-res);
        else return res;
    }
};
