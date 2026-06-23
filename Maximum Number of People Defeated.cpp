class Solution {
    public:
    int maxPeopleDefeated(int p) {
        // code here
        int c = 0;
        for(int i=1;p>=i*i;i++){
            p = p-(i*i);
            c++;
        }
        return c;
    }
};
