class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> lt;
       
        for (int i=0; i<position.size(); ++i){
        lt.push_back({position[i],speed[i]});
        
        } 

        sort(lt.begin(),lt.end(),greater<pair<int,int>>());
        float time=(float)(target-lt[0].first)/lt[0].second;  //casting float
        int count=1;
        for (int j=1; j< lt.size();++j){
            float temp= (float)(target-lt[j].first)/lt[j].second;

            if (temp>time){
               time=temp;
               count++;
               
            }
            
        }
        return count;


    }
};
