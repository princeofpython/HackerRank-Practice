#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};
#include <queue>

class LRUCache:protected Cache{
    public:
    queue<Node*> q;
    LRUCache(int cap){
        cp =cap;
    } 
    ~LRUCache(){
        mp.clear();
        while(!q.empty()){
            delete q.front();
            q.pop();           
        }
    }
    virtual void set(int key, int value) override{
        auto i = mp.find(key);
        if (i!= mp.end())
            {i->second->value = value; }
        else{
            Node *node = new Node(key, value);
            if(q.size()>=cp){
                node = q.front();               
                mp.erase(node->key);
                q.pop();
                delete node;
                
            }
            Node * no = new Node(key, value);
            q.push(no);
            mp.insert(pair<int, Node*>(key, no));
        }
    }

    virtual int get (int key) override {
        auto it = mp.find(key);
        if(it != mp.end()){
            return it->second->value;

        }
        else
            return -1;
    }

};
int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
