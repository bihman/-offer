/*
题目描述

大家都知道斐波那契数列，现在要求输入一个整数n，请你输出斐波那契数列的第n项。
n<=39
*/

// 注：该题不能用递归的方法求解，否则会超时

class Solution {
public:
    int Fibonacci(int n) {
      if(n == 0 || n == 1)
        return n;
      int a = 0, b = 1, sum = 0;
      for(int i = 2; i <= n; i++)
      {
        sum = a + b;
        a = b;
        b = sum;
      }
      return sum;
    }
};
