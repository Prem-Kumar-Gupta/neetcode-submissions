class Solution {
public:
    int findLucky(vector<int>& arr) {
         int largest = -1;
         map<int,int>frq;
         for(int i  =  0 ; i <arr.size();i++){
            frq[arr[i]]++;
         }
         for(auto it =frq.begin();it!=frq.end();it++){
            if(it->first==it->second){
                if(largest<it->first){
                    largest=it->first;
                }
            }
         }
         return largest;
    }
};