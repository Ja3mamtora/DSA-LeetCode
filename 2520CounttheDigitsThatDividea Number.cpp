class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int c=0;
        int i=0;
        while(num!=0){
        int r=num%10;
            if(n%r==0){
                c++;
            }
            i++;
            num=num/10;
        }
        return c;
    }
};