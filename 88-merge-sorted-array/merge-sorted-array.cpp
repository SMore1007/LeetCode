class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
       // Pushed it into single array
        for(int i = 0; i < n; i++)
        {
            nums1[m+i] = nums2[i];
        }

        // Now sort the nums1 array
        for(int i = 0; i < m+n; i++)
        {
            for(int j = 0; j < (m+n - i-1); j++)
            {
                if(nums1[j] > nums1[j+1])
                {
                    int temp = nums1[j];
                    nums1[j] = nums1[j+1];
                    nums1[j+1] = temp;
                }
            }
        }
    }
};