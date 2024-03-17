class Solution{
  public:
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        vector<int>arr1;
        vector<int>arr2;
        while(head1) arr1.push_back(head1->data),head1=head1->next;
        while(head2) arr2.push_back(head2->data),head2=head2->next;
        sort(arr1.begin(),arr1.end(),greater<int>()),sort(arr2.begin(),arr2.end());
        int i=0,j=0,cnt=0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]+arr2[j]>x)i++ ;
            else if(arr1[i]+arr2[j]==x) cnt++,j++;
            else j++;
        }
        return cnt;
    }
};
