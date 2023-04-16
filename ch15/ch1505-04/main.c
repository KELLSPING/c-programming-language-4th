#include <stdio.h>

int main(void){
    struct status
    {
        unsigned sex:1;
        unsigned marriage:1;
        unsigned age:7;
    };
    struct status tom = {1,0,21};

    if(tom.sex == 0){
        printf("性別:女,");
    }else{
        printf("性別:男,");
    }

    if (tom.marriage)
    {
        printf("未婚,");
    }else{
        printf("已婚,");
    }
    
    printf("%d歲\n", tom.age);

    printf("sizeof(tom)=%d\n", sizeof(tom));

    return 0;
}