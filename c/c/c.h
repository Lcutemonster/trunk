#include <stdio.h>
int overoffNumFour(int num)
{
    int count=0;
    int i=1;
    for (;i<=num;++i)
    {
        if (4==(i+count)%10)              //��4��1���������������������������������һ�����⣡��������
        {
            ++count;
        }
    }
    return num+count;
}
int main(int argc, char *argv[]) 
{
    int num;
    while(1)
    {
        printf("Please input number:");
        scanf("%d",&num);
        printf("Output numerber: %d\n",overoffNumFour(num));
    }
    return 0;
}

















































