class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 2 pointer approach 
        int first=0,n = numbers.size(),last = n-1,sum =0;
        vector<int> ans;
        
        while(first<last){
            
            sum = numbers[first]+numbers[last];
            
            if(sum==target){
                ans.push_back(first+1);
                ans.push_back(last+1);
                break;
            }
            // do binary search here instead to get better complexity than simple n
            if(sum<target){
                first++;
            }
            else{
                last--;
            }
        }
        return ans;
    }
};