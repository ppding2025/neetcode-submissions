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
        vector<pair<string,int>>& vt=mp[key];

        if (mp.find(key)==mp.end()){

             return "";

        }

        

        int l=0;
        int r=vt.size()-1;
        string value;
        while(l<=r){

             int mid=(l+r)/2;
             
             if (vt[mid].second==timestamp){

                 return vt[mid].first;

             }
            

             if (vt[mid].second<timestamp){

                    value=vt[mid].first;
                    l=mid+1;

             }
             else{

                  r=mid-1;

             }

        }

        return value;   



    }




};
