class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle{{1}};
        for (int i = 2; i <= numRows; ++i) {
            vector<int> row;
            for (int j = 1; j <= i; j++) {
                if (j == 1 || j == i) row.push_back(1);
                else row.push_back(triangle[i - 2][j - 2] +
                                   triangle[i - 2][j - 1]);
            }
            triangle.push_back(row);
        }
        return triangle;
    }
};
