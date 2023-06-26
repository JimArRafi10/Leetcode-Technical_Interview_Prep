//using Hashmap
class Solution {
public:
    bool isAnagram(string s, string t) {
        
      int n1=s.length();
      int n2=t.length();
      
      if(n1 != n2) {
          return false;
      }
      
      int freq[26] = {0};

      for(int i=0; i< s.length(); i++) {
          freq[s[i]-'a']++;
          freq[t[i]-'a']--;
      }

      for(int i=0; i<26; i++) {
          if(freq[i] != 0) {
              return false;
          }
      }
    return true;

    }  
    
};

//using sort
class Solution {
public:
    bool isAnagram(string s, string t) {
        
      int n1=s.length();
      int n2=t.length();
      int f=1;
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());

      if(s!=t || n1!=n2){
          return false;
      }
      else{
          return true;
      }
     
    }  
    
};


