class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        if(word.length()==2){
            if(isupper(word[0]) && isupper(word[1]))return true;
            else if(isupper(word[0]) && islower(word[1]))return true;
            else if(islower(word[0]) && islower(word[1]))return true;
            else return false;
        }
        for(int i=1;i<word.length();i++){
            if(isupper(word[i]))c++;
        }
        if((isupper(word[0])&&c==word.length()-1) || c==0)return true;
        else return false;
    }
};