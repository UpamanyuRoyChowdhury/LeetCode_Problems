class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int n = mat[0].size();
        // Sort diagonals starting from the topmost row
        for (int i = 0; i < m; i++) 
        {
            sortEachDiagonal(mat, i, 0);
        }
        // Sort diagonals starting from the leftmost column
        for (int i = 1; i < n; i++) 
        {
            sortEachDiagonal(mat, 0, i);
        }
        return mat;
    }
    void sortEachDiagonal(vector<vector<int>>& mat, int row, int col) 
    {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> diagonalElements;
        // Extract the elements in the diagonal
        while (row < m && col < n) 
        {
            diagonalElements.push_back(mat[row][col]);
            row++;
            col++;
        }
        // Sort the diagonal elements
        sort(diagonalElements.begin(), diagonalElements.end());
        // Place the sorted elements back into the diagonal
        row--;
        col--;
        while (!diagonalElements.empty()) 
        {
            mat[row][col] = diagonalElements.back();
            diagonalElements.pop_back();
            row--;
            col--;
        }
    }
};
