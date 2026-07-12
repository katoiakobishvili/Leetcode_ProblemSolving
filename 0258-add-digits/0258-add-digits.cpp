class Solution {
public:
    int addDigits(int num) {
     int sum=0;
     
        while(num>0){
            int digit = num%10;
            sum+=digit;
            num/=10;
        }
        int sum2 =0;
        for(int i=sum; i>0; i/=10){
            int digit=i%10;
            
            sum2+=digit;
        }
        int sum3 =0;
        for(int i=sum2; i>0; i/=10){
            int digit=i%10;
            
            sum3+=digit;
        }
        return sum3;
    }
    
};