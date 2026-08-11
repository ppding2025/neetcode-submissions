class LRUCache {
public:
    list<pair<int,int>> lru;
    unordered_map<int,list<pair<int,int>>::iterator> mp;
    int cap;
    
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        
        if (!mp.count(key)){

            return -1;
        }
        
        auto it=mp[key];
        
        int v=it->second;
        lru.erase(it);
        lru.push_back({key,v});
        mp[key]=prev(lru.end());
        return v;
    }
    
    void put(int key, int value) {
       
        if (mp.count(key)){
            auto it =mp[key];
             lru.erase(it);
             
             
             
        }
        lru.push_back({key,value});
        mp[key]=prev(lru.end());
           
        
        
        if (lru.size()>cap){
            int v=lru.front().first;
            lru.pop_front();
            mp.erase(v);

            
        }
        
    }
};
