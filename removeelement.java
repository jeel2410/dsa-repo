class Solution {
    public int removeElement(int[] nums, int val) {
        int seq=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=val){
                
                nums[seq]=nums[i];
                seq++;
            }
        }
        return seq;
    }
}
