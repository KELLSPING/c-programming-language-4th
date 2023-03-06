/* ch08-exam-34 */
#include <stdio.h>
#include <stdlib.h>

#define ABS(X) ((X>0)?(X):(-X)) 

int main(void)
{
    printf("ABS(-13.6)=%f\n", ABS(-13.6));

    return 0;
}
