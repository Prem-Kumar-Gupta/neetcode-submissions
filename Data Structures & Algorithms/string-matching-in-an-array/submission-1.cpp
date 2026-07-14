class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        string subString="";
        for (int i =0;i<words.size();i++){
            string str=words[i];
            for (int j =0;j<words.size();j++){

                if(str==words[j]){
                    continue;
                }
                if(words[j].contains(str)){
                    subString=words[j];
                    ans.push_back(words[i]);
                    break;
                }
            }
        }
        return ans;
    }
};