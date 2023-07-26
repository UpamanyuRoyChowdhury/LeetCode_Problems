class Solution {
public:
// Function to calculate the prefix sum of a matrix
    vector<vector<int>> calculatePrefixSum(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int n = mat[0].size();

        // Create a prefix sum matrix of the same size as the original matrix
        vector<vector<int>> prefixSum(m, vector<int>(n, 0));

        // Initialize the first row and first column of the prefix sum matrix
        prefixSum[0][0] = mat[0][0];
        for (int i = 1; i < m; i++) 
        {
            prefixSum[i][0] = prefixSum[i - 1][0] + mat[i][0];
        }
        for (int j = 1; j < n; j++) 
        {
            prefixSum[0][j] = prefixSum[0][j - 1] + mat[0][j];
        }

        // Calculate the rest of the prefix sum matrix
        for (int i = 1; i < m; i++) 
        {
            for (int j = 1; j < n; j++) 
            {
                prefixSum[i][j] = prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1] + mat[i][j];
            } 
        }
        return prefixSum;
    }

    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) 
    {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> answer(m, vector<int>(n, 0));
        vector<vector<int>> prefixSum = calculatePrefixSum(mat);

        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                // Calculate the submatrix sum using the prefix sum matrix
                int r1 = max(0, i - k);
                int c1 = max(0, j - k);
                int r2 = min(m - 1, i + k);
                int c2 = min(n - 1, j + k);

                // Calculate the sum of elements in the submatrix
                int sum = prefixSum[r2][c2];
                if (r1 > 0) 
                {
                    sum -= prefixSum[r1 - 1][c2];
                }
                if (c1 > 0) 
                {
                    sum -= prefixSum[r2][c1 - 1];
                }
                if (r1 > 0 && c1 > 0) 
                {
                    sum += prefixSum[r1 - 1][c1 - 1];
                }

                // Assign the sum to the answer matrix
                answer[i][j] = sum;
            }
        }
        return answer;
    }
};
