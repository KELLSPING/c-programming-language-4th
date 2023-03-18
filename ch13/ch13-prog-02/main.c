/* ch13-prog-02 */
#include <stdio.h>
#include <stdlib.h>
#include "./peri.h"
#include "./area.h"

#include "./hello.h"

int main()
{
    hello();
    printf("area(2.2)=%5.2f\n", area(2.2));
    printf("peri(1.4)=%5.2f\n", peri(1.4));
    return 0;
}
