class DataStream {
public:
int data,target,count=0;
 DataStream(int value, int k) {
        data=value;
        target=k;
    }
    
    bool consec(int num) {
        if(num!=data){
            count=0;
            return false;
        }
        count++;
        if(count>=target)
        return true;
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */