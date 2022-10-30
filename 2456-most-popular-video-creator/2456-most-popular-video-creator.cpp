class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        unordered_map<string,long long> mp;
        unordered_map<string,pair<string,int>> imp;
        long long mx=-1;
        for(int i=0;i<creators.size();i++){
            long long v=views[i];
            if(mp.find(creators[i])==mp.end()){
                mp[creators[i]]=v;
            }
            else{
                mp[creators[i]]+=v;
                
            }
            if(mp[creators[i]]>mx){
                    mx=mp[creators[i]];
                }
            if(imp.find(creators[i])==imp.end()){
                imp[creators[i]]={ids[i],views[i]};
            }
            else{
                if(imp[creators[i]].second<views[i]){
                    imp[creators[i]]={ids[i],views[i]};
                    }
                else if(imp[creators[i]].second==views[i]&&imp[creators[i]].first>ids[i]){
                    imp[creators[i]]={ids[i],views[i]};
                } 
                }
            }
        
        vector<vector<string>> res;

        for(auto i:mp){
            if(i.second==mx){
                res.push_back({i.first,imp[i.first].first});
            }
        }
        return res; 
    }
};