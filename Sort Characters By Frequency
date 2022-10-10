class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i= 0;i< s.length(); i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i : mp){
            pq.push({i.second,i.first});
        }
        string ans = "";
        while(!pq.empty()){
            pair<int,char> p = pq.top();
            pq.pop();
            while(p.first--){
                ans+=p.second;
            }
        }
        return ans;
    }
};
