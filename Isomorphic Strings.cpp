class Solution {
  public:
    virtual bool areIsomorphic(string &s1, string &s2) {
      int booked1[26];
      int booked2[26];
      
      for(int i=0; i<26; i++) { booked1[i]=-1; booked2[i]=-1;}
      
      int n=s1.size();
      for(int i=0; i<n; i++){
        int is1=s1[i]-97, is2=s2[i]-97;
        if(booked1[is1]==-1 && booked2[is2]==-1){
          booked1[is1]=is2; booked2[is2]=is1;    
        }
        else if(booked1[is1]!=is2 || booked2[is2]!=is1) return false;
        
      }
      
      return true;
    }
};
