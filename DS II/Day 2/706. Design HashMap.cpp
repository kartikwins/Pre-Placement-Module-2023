class MyHashMap {
    int map[1000000+1];
    void set(){
        for(int i = 0; i < 1000001; i++)  map[i] = -1;
    }
    
public:
    MyHashMap() {
        set();
    }
    
    void put(int key, int value) {
        map[key] = value;
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key] = -1;
    }
};