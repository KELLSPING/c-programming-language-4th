/* ch04-exam-12 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    char lastName[20], firstName[20];

    printf("input last name:");
    scanf("%s", lastName);
    printf("input first name:");
    scanf("%s", firstName);
    printf("firstName lastName:%s %s", firstName, lastName);

    return 0;
}