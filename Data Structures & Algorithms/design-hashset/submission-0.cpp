class MyHashSet {
public:
    vector<bool> myHash;
    MyHashSet() {
    myHash.resize(10000001,false);
        
    }
    
    void add(int key) {
        myHash[key]=true;
    }
    
    void remove(int key) {
        myHash[key]=false;
        
    }
    
    bool contains(int key) {
        return myHash[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */