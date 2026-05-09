class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>index(2);
        int st =0,end=numbers.size()-1;
        while(st<=end){
            if(numbers[st]+numbers[end]==target){
                index={st+1,end+1};
                return index;
            }
            if(numbers[st]+numbers[end]<target){
                st++;
            }
            else{
                end--;
            }
        }
        return index;
    }
};
