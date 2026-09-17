class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int size=students.size();
        int c=0;
        while(c!=size){
            size=students.size();
            int st=students[0];
            int sa=sandwiches[0];
            if(st==sa){
            students.erase(students.begin());
            sandwiches.erase(sandwiches.begin());
            c=0;
            }
            else if(st!=sa){
            students.erase(students.begin());
            students.push_back(st);
            c++;
        }
        }
        return c;
    }
};