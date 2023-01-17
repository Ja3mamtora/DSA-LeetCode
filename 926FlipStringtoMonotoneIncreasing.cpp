class Solution {
public:
    int minFlipsMonoIncr(string s) {
       int num_flips=0,ones=0;
       for(auto x: s){
           if(x=='1')
           ones++;
           else if(ones>0){
               num_flips++;
               ones--;
           }
       }
       return num_flips;
    }
};