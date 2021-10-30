//https://leetcode.com/problems/design-front-middle-back-queue/

deque <int> q;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        q.push_front(val);
     }
    
    void pushMiddle(int val) { 
         q.insert(q.begin()+ q.size()  /2,val );
    }
    
    void pushBack(int val) {
        q.push_back(val);
    }
    
    int popFront() {
        if(q.size()==0) return -1;
       int a=q.front();
        q.pop_front();
        return a;
        
    }
    
    int popMiddle() {
        if(q.size()==0) return -1;
          int a=q.at( (q.size()-1)/2);
        q.erase(q.begin()+(q.size()-1)/2);
        return a;
    }
    
    int popBack() {
        if(q.size()==0) return -1;
        
        int a=q.back();
        q.pop_back();
        return a;
    }
