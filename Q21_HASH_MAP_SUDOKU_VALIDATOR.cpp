//https://binarysearch.com/problems/Sudoku-Validator

//MEDIUM

bool solve(vector<vector<int>>& matrix) {
    unordered_map<int, int> mp1, mp2;
    int i, j, k, ii, jj, ele;

    for (i = 0; i < 9; ++i) {
        for (j = 0; j < 9; ++j) {
            int row_ele = matrix[i][j];
            int col_ele = matrix[j][i];

            if (row_ele > 9 || row_ele < 1 || mp1[row_ele]) return false;
            if (col_ele > 9 || col_ele < 1 || mp2[col_ele]) return false;

            mp1[row_ele] = 1;
            mp2[col_ele] = 1;
        }

        mp1.clear();
        mp2.clear();
    }

    mp1.clear();

    for (i = 0; i < 9; i += 3) {
        for (j = 0; j < 9; j += 3) {
            for (ii = i; ii < i + 3; ++ii) {
                for (jj = j; jj < j + 3; ++jj) {
                    ele = matrix[ii][jj];

                    if (ele > 9 || ele < 0 || mp1[ele]) return false;
                    mp1[ele] = 1;
                }
            }
            mp1.clear();
        }
    }

    return true;
}