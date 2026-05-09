
// Approach 1
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int columnNum=0;

        for(int i=0;i<n;i++){
            int val=columnTitle[i]-'A'+1;
            columnNum=columnNum*26+val; 
        }
        return columnNum;
    }
};

// Approach 2

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.length();
        int columnNum=0;

        for(int i=n-1;i>=0;i--){
            int m=columnTitle[i]-'A'+1;
            columnNum+=( pow(26,(n-1-i))*m);  
        }
        return columnNum;
    }
};
