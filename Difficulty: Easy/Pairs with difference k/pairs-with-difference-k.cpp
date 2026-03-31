// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& arr, int k) {
        int count=0;
      unordered_map<int,int> m;
      for(int i=0;i<arr.size();i++){
          if(m.find(arr[i]+k)!=m.end()){
              count+=m[arr[i]+k];
          }
           if(m.find(arr[i]-k)!=m.end()){
              count+=m[arr[i]-k];
              
          }
          m[arr[i]]++;
      }
      return count;
        
    }
};