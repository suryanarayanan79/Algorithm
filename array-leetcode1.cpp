class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            if(leftSum(i,nums) == rightSum(i,nums)){
                return i;
            }
        }
        
        return - 1;
    }
    
    int leftSum(int index , vector<int>& nums){
        int leftSum ;
        for(int i = 0 ; i < index; i++){
            if(i == 0 )
            {
                leftSum = 0;
            }else{
                leftSum += nums[i-1];
            }
        }
        return leftSum;
    }
    int rightSum(int index, vector<int>& nums){
        int rightSum ;
        for(int i = index-1 ; i < nums.size() ; i++){
            rightSum += nums[i];
        }
        return rightSum;
    }
};
