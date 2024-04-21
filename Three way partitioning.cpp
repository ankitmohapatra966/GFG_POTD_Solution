class Solution{   
public:
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int n = array.size();
       
        int start = 0, end = n-1;
     
        for (int i=0; i<=end;)
        {
            if (array[i] < a)
                swap(array[i++], array[start++]);
            else if (array[i] > b)
                swap(array[i], array[end--]);
            else
                i++;
        }
    }
};
