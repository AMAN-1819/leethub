class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int rows = points.size();
        int cols = points[0].size();

        // Initialize DP array with the first row of points
        vector<long long> dp(points[0].begin(), points[0].end());

        // Iterate over each row, starting from the second row
        for (int i = 1; i < rows; i++) {
            vector<long long> left(cols), right(cols);

            // Fill left array (maximum values from left to right)
            left[0] = dp[0];
            for (int j = 1; j < cols; j++) {
                left[j] = max(left[j - 1], dp[j] + j);
            }

            // Fill right array (maximum values from right to left)
            right[cols - 1] = dp[cols - 1] - (cols - 1);
            for (int j = cols - 2; j >= 0; j--) {
                right[j] = max(right[j + 1], dp[j] - j);
            }

            // Compute new dp array
            for (int j = 0; j < cols; j++) {
                dp[j] = points[i][j] + max(left[j] - j, right[j] + j);
            }
        }

        // The result is the maximum value in the last row of dp
        return *max_element(dp.begin(), dp.end());
    }
};
