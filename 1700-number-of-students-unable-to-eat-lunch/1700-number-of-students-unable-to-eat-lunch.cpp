class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int student : students)
         q.push(student);
        
        int i=0,j=0;

        while(!q.empty()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                j=0;
            }else{
                j++;
                q.push(q.front());
                q.pop();
            }
            
            if(j==q.size()){
                return q.size();
            }
        }

        return q.size();
    }
};