/*
使用递归(recursion)与迭代(iteration)算法计算 n 的阶乘 n!。
因为 n! >= 1，所以函数返回值设置为 unsigned 型的，这样也使得可计算的 n 值更大些，防止溢出。
需要注意的是，程序中会有强制类型转换的情况发生，例如 unsigned int 强制转换为 unsigned long long int。
对于 GCC-64bit：sizeof(long)=8, sizeof(long long)=8.
对于 GCC-32bit：sizeof(long)=4, sizeof(long long)=8.
*/
/* Using recursive and iterative algorithm to calculate the factorial of n, that is, n!. */

#include <stdio.h>
#include <stdlib.h>

unsigned int calc_recursion(unsigned int num)
{
    unsigned int result = 0;
    if(num - 1 > 0)
        {
            result = num * calc_recursion(num - 1);
            num--;
        }
    else
        result = 1;

    return result;
}

unsigned int calc_iteration(unsigned int num)
{
    unsigned int i;
    unsigned int result = 1;
    for(i=num;i>=1;i--)
    {
        result = result * i;
    }

    return result;
}

unsigned long long calc_recursion_ll(unsigned int num)
{
    unsigned long long result = 0;

    if(num - 1 > 0)
        {
            result = num * calc_recursion_ll(num - 1);
            num--;
        }
    else
        result = 1;

    return result;
}

unsigned long long calc_iteration_ll(unsigned int num)
{
    unsigned int i;
    unsigned long long result = 1;
    for(i=num;i>=1;i--)
    {
        result = result * i;
    }

    return result;
}

int main(int argc, char** argv)
{
    unsigned int the_num = 12;
    unsigned int the_ll_num = 20;

    printf("Using recursion algorithm to calculate the %d! = %d\n",the_num,calc_recursion(the_num));
    printf("Using iteration algorithm to calculate the %d! = %d\n",the_num,calc_iteration(the_num));
    printf("\n");
    printf("The sizeof(unsigned long) = %d in your compiler, but it may be different in other compiler such as GCC-64bit.\n",sizeof(unsigned long));
    printf("The sizeof(unsigned long long) = %d in your compiler.\n",sizeof(unsigned long long));
    printf("\n");
    printf("Using recursion algorithm to calculate the %d! = %llu (unsigned long long int)\n",the_ll_num,calc_recursion_ll(the_ll_num));
    printf("Using iteration algorithm to calculate the %d! = %llu (unsigned long long int)\n",the_ll_num,calc_iteration_ll(the_ll_num));

    return 0;
}
