class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        string n1 = "";
        string n2 = "";

        for(int num=num1;num<=num2;num++){

        n1 = to_string(num);

        for(int i=1;i<n1.size()-1;i++){
            if(n1[i]>n1[i-1] && n1[i]>n1[i+1])
            count++;

            else if(n1[i]<n1[i-1] && n1[i]<n1[i+1])
            count++;
        }

        }

        return count;
    }
};