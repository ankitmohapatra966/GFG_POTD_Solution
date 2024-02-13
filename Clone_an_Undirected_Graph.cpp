class Solution { 
public: 
    Node* cloneGraph(Node* node) {   
        if(!node) return NULL; 
        unordered_map<Node*, Node*> mp; 
        queue<Node*> q;  
        q.push(node);          
        mp[node] = new Node(node->val); 
        while(!q.empty()){ 
            Node* tmp = q.front(); 
            q.pop(); 
            for(auto &x : tmp->neighbors){ 
                if(!mp.count(x)) mp[x] = new Node(x->val), q.push(x);  
                mp[x]->neighbors.push_back(mp[tmp]); 
            } 
        } 
        return mp[node];
    }
};