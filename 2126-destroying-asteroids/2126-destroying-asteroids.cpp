class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());

        long long planet = mass;

        for(int asteriod : asteroids){
            if(planet < asteriod)
              return false;
            
            planet += asteriod;
        }
        return true;
    }
};