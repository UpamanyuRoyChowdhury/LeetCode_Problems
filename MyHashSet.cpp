class MyHashSet {
private: 
    vector <int> set;
public:
    MyHashSet() 
    {}

    void add(int key) 
    {
        if (!contains(key)) 
        {
            set.push_back(key);
        }
    }
    
    void remove(int key) 
    {
        auto found = find(set.begin(), set.end(), key);
        int index = distance(set.begin(), found);
        if (found != set.end()) {
            set.erase(set.begin() + index);
        }
    }
    
    bool contains(int key) 
    {
        auto found = find(set.begin(), set.end(), key);
        if (found != set.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

