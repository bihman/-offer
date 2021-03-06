/*
题目描述

输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
*/


// 该题使用位运算，时间复杂度优

class Solution
{
public:
  int NumberOf1(int n)
  {
    int count = 0;
    while(n)
    {
      count++;
      n = n & (n - 1);
    }
    return count;
  }
};
