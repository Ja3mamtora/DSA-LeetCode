class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        for(auto x:asteroids){
            if(mass<x)return false;
            else mass=mass+x;
        }
        return true;
    }
};