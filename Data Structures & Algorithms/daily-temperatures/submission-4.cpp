class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result;
        
        for (int i=0; i<temperatures.size(); ++i){
              
                int index=i+1;
                
              
              while (index<temperatures.size() && temperatures[i]>=temperatures[index]){

                
                index++;
              }
              
              if (index==temperatures.size()){

                result.push_back(0);
              }
              else{
                
                result.push_back(index-i);
              }
        }
        return result;
    }
};
