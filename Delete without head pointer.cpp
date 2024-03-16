class Solution
{
    public:
    void deleteNode(Node *del_node)
    {
       *del_node=*del_node->next;
    }

};
