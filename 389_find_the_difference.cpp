// Approach 1

class Solution {
public:
    char findTheDifference(string s, string t) {
        int dif=t[t.length()-1];
        for(int i=0;i<s.length();i++){
            dif=dif+t[i]-s[i];
        }
        char ans=dif;
        return ans;
    }
};

// Approach 2

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=t[t.length()-1];
        for(int i=0;i<s.length();i++){
            ans=ans^s[i]^t[i];
        }
        return ans;
        
    }
};
