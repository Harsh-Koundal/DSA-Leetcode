class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(num==1 && sum==1) return "1";
        if(num==1 && sum >= 10) return "";

        string  score = "";
        int remScore = sum;

        for(int i=0;i<num;i++){
            int digit = remScore;
            
            if(remScore >= 9){
                digit = 9;
            }

            
            score += to_string(digit);

            remScore = remScore - digit;
        }
        if(remScore > 0) return "";
        
        return score;
    }
};