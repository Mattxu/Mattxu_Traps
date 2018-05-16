//实现往数组中赋值的操作，首先看一段编译错误的代码
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char buf[5];
    
    *(buf++) = 'b';    /* Error[Pe137]: expression must be a modifiable lvalue */
    printf("%s", buf);
    
    return 1;
}
//分析得知，数组名是数组的首地址，是一个常量，常量是不可以出现在赋值号=左边作为左值的，所以不能进行++或者--等操作。

//修改之后的代码
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char buf[5];
    char *buff1 = NULL;
  
    buff1 = buf;
    
    *(buff1++) = 'b';    
    printf("%s", buf);
    
    return 1;
}


