class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length() == 1 && magazine.length() == 1){
            if(ransomNote[0] != magazine[0]) return false;
            else return true;
        }
        int count = 0;
        int j = 0;
        int n = ransomNote.size();

        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        
        for(int i=0;i<magazine.size();i++){
            if(magazine[i] == ransomNote[j]){
                count++;
                j++;
            }
        }
        if(count == n) return true;

        return false;
    }
};