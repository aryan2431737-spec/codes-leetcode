class Solution {
  public:
    bool isSparse(int n) {
        if(((n>>1)&n)==0){
        return true;}
        else {
            return false;
            
        }
    }
};