/*
题目描述

输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，
例如，如果输入如下矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
*/

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
      if(matrix.empty())
        return NULL;
      vector<int> res;
      int m = matrix.size() - 1;
      int n = matrix[0].size - 1;
      int x = 0, y = 0;
      int i, j;
      while(1)
      {
        // 从左向右
        for(j = y; j <= n; j++)
          res.push_back(matrix[x][j]);
        if(++x > m)
          break;
        // 从上到下
        for(i = x; i <= m; i++)
          res.push_back(matrix[i][n]);
        if(y > --n)
          break;
        // 从右向左
        for(j = n; j >= y;  j--)
          res.push_back(matrix[m][j]);
        if(x > --m)
          break;
        // 从下向上
        for(i = m; i >= x; i--)
          res.push_back(matrix[y][i]);
        if(++y > n)
          break;
      }
      return res;
    }
};
