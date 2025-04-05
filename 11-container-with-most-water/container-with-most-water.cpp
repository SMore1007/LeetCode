class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0; // Initialize the left pointer at the start
        int right = height.size() - 1; // Initialize the right pointer at the end
        int maxArea = 0;       // Variable to keep track of the maximum area

        while (left < right) {
            // Calculate the area formed by the lines at the left and right
            // pointers
            int currentArea = min(height[left], height[right]) * (right - left);

            // Update maxArea if the current area is larger
            maxArea = max(maxArea, currentArea);

            // Move the pointer that points to the shorter line
            if (height[left] < height[right]) {
                left++; // Move left pointer to the right to find a taller line
            } else {
                right--; // Move right pointer to the left to find a taller line
            }
        }

        return maxArea; // Return the maximum area found
    }
};
