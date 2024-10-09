class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n = mat.size();
        Node *head, *rowHead, *curRow, *newNode;
        for( int i=0; i<n; i++ ) {
            for( int j=0; j<n; j++ ) {
                newNode = new Node( mat[i][j] );
                if( i==0 && j==0 )
                    curRow = rowHead = head = newNode;
                else if( j==0 )
                    curRow = rowHead = rowHead->down = newNode;
                else
                    curRow = curRow->right = newNode;
            }
        }
        rowHead = curRow = head;
        Node *nxtRow = curRow->down;
        while( nxtRow ) {
            while( curRow ) {
                curRow->down = nxtRow;
                nxtRow = nxtRow->right;
                curRow = curRow->right;
            }
            curRow = rowHead = rowHead->down;
            nxtRow = curRow->down;
        }
        return head;
    }
};
