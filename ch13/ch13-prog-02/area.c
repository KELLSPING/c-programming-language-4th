#include "area.h"
#include "show.h"

double area(double r)
{
    show(r);
    return (PI * pow(r, 2.0));
}