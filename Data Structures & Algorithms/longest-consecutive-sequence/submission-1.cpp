class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int longest=0;
        for(auto x:nums){
            s.insert(x);
        }
        for(auto n:nums){
            if(s.find(n-1)==s.end()){
                int c=1;
                int x=n;
                while(s.find(x+1)!=s.end()){
                    x++;
                    c++;
                }
            longest=max(longest,c);
            }
        }
        return longest;
    }
};
