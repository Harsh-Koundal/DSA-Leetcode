class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        map<int,int> asteroidss;
        for(int asteriod : asteroids)
        asteroidss[asteriod]++;

        long long planet = mass;

       for(auto p : asteroidss){
    int massOfAsteroid = p.first;
    int freq = p.second;

    for(int i = 0; i < freq; i++){
        if(planet < massOfAsteroid)
            return false;

        planet += massOfAsteroid;
    }
}
        return true;
    }
};