#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    char oper;

    printf("請輸入運算式(ex.3+2): ");
    scanf("%d %c %d", &a, &oper, &b);

    switch (oper)
    {
    case '+':
        printf("%d+%d = %d\n", a, b, a+b);
        break;

    case '-':
        printf("%d-%d = %d\n", a, b, a-b);
        break;

    case '*':
        printf("%d*%d = %d\n", a, b, a*b);
        break;

    case '/':
        printf("%d/%d = %d\n", a, b, a/b);
        break;
    
    default:
        printf("無法辨認的運算式");
        break;
    }

    return 0;
}