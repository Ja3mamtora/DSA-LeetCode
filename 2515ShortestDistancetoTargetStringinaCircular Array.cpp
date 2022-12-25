class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int  mini = INT_MAX;
        for(int i=0;i<words.size();i++)   
        {
            if(words[i]==target)
            {
                if(mini > abs(startIndex - i))
                    mini = abs(startIndex - i);
                if(i < startIndex)
                {
                    if(mini > i+words.size()-startIndex)
                        mini = i+words.size()-startIndex;
                }
                else
                {
                    if(mini > startIndex+words.size()-i)
                        mini = startIndex+words.size()-i;
                }
            }
        }
        if(mini == INT_MAX)
            mini = -1;
        return mini;
    }
};
