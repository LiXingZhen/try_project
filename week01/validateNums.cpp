class Solution {
public:
    bool isAnagram(string s, string t) {
    //   if(s.length() != t.length()){
    //       return false;
    //   }
    //   sort(s.begin(),s.end());
    //   sort(t.begin(),t.end());
    //   return s == t;

    /* 哈希表 */
      if(s.length() != t.length()){
          return false;
      }
      vector<int>result(26,0);
      for(auto &ch : s)
      {
          result[ch - 'a']++;
      }
      for(auto &ch : t)
      {
          result[ch - 'a']--;
          if( result[ch - 'a'] < 0)
          {
              return false;
          }
      }
      return true;
    }
};
