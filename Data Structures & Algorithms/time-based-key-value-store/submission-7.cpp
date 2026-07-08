class TimeMap {

private:
  unordered_map<string,vector<pair<string,int>>> mp;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({value,timestamp});

    }
    
    string get(string key, int timestamp) {
        //vector<pair<int,string>> vt;
             
            if (mp.find(key)==mp.end()){

                 return "";
            
            }

            
            string ans;
            for (auto it : mp[key]) {
            int time = it.second;
            string value = it.first;

            if (time <= timestamp) {
                ans = value;
            } 
            else {
                break;
            }
            }

            return ans;


            } 
        };
        
    

  
  



