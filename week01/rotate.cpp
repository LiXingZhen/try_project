class Solution {
public:
    // void rotate(vector<int>& nums, int k) {
    //     int size = nums.size();
    //     vector<int> result(size);
    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //         result[(i + k) % size] = nums[i];
    //     }
    //     nums.assign(result.begin(),result.end());
    // }
void reverse(vector<int>& nums,int start,int end)
{
    while (start < end)
    {
        swap(nums[start],nums[end]);
        start += 1;
        end -= 1;
    }
}
void rotate(vector<int>& nums, int k)
{
    k %= nums.size();
    reverse(nums,0,nums.size() - 1);
    reverse(nums,0,k-1);
    reverse(nums,k,nums.size() -1);
}
};
