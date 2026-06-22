class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> count;
        for(char ch : text){
            count[ch]++;
        }

        int b = count['b'];
        int a = count['a'];
        int l = count['l']/2;
        int o = count['o']/2;
        int n = count['n'];

        return min({b,a,l,o,n});
    }
};