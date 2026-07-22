class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        vector<pair<int,int>> cars;



        
        stack<float> fleet;

        int f=1;
        for (int i=0; i<position.size(); ++i){

              cars.push_back({position[i],speed[i]});


        }
        sort(cars.begin(), cars.end(),greater<>());
        float temp= (float) (target-cars[0].first)/cars[0].second;
        for (int i=1; i<cars.size(); ++i){

              
              
              float time= (float) (target-cars[i].first)/cars[i].second;
              
              if (time>temp){
                   temp=time;
                   f++;

              }
        }

        return f;

    }
};
