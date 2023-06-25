class MyHashMap {
    vector <vector <int>> map;
public:
    MyHashMap() 
    {
        
    }
    
    void put(int key, int value) 
    {
        if (get(key) == -1)
        {
            vector <int> group;
            group.push_back(key);
            group.push_back(value);
            map.push_back(group);
        }
        else
        {
            for (int i = 0; i < map.size(); i++)
            {
                if (map[i][0] == key)
                {
                    map[i][1] = value;
                }
            }
        }
    }
    
    int get(int key) 
    {
        for (int i = 0; i < map.size(); i++)
        {
            if (map[i][0] == key)
            {
                return map[i][1];
            }
        }
        return -1;
    }
    
    void remove(int key) 
    {
        for (int i = 0; i < map.size(); i++)
        {
            if (map[i][0] == key)
            {
                map.erase(map.begin() + i);
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
