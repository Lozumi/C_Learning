/* 定义常量和函数 */
#include <stdio.h>
 
#define A 10
#define B 5
#define C 6
int multiply(void);
int nouse(void);

int main()
{
    int sum = multiply();
    printf("Hello, World! \n" "The result is:%lu",sum);
    return 0;
}

int multiply()
{
    int sum = A*B*C;
    return sum;
}

int nouse()
{
    int nousex = 0;
    return nousex;
}
