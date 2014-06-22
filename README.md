recursion-iteration
===================

Using recursive and iterative algorithm to calculate the factorial of n, that is, n!.

使用递归(recursion)与迭代(iteration)算法计算 n 的阶乘 n!。
因为 n! >= 1，所以函数返回值设置为 unsigned 型的，这样也使得可计算的 n 值更大些，防止溢出。
需要注意的是，程序中会有强制类型转换的情况发生，例如 unsigned int 强制转换为 unsigned long long int。
对于 GCC-64bit：sizeof(long)=8, sizeof(long long)=8.
对于 GCC-32bit：sizeof(long)=4, sizeof(long long)=8.
