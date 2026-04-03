/* math library:-contain function related to maths like pow,log,sqrt,abs,ceil,floor 
floor(x): return the largest integer value less than or equal to x */
#include <stdio.h>
#include <math.h>

int main() {
    double x = 3.7;
    printf("floor(%.1f) = %.1f\n", x, floor(x));
    return 0;
}
/*ceil(x): return the smallest integer value greater than or equal to x */
#include <stdio.h>
#include <math.h>

int main() {
    double x = 3.7;
    printf("ceil(%.1f) = %.1f\n", x, ceil(x));
    return 0;
}
/*abs(x): return the absolute value of x */
#include <stdio.h>
#include <math.h>

int main() {
    double x = -3.7;
    printf("abs(%.1f) = %.1f\n", x, abs(x));
    return 0;
}
/*sqrt(x): return the square root of x */
#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0;
    printf("sqrt(%.1f) = %.1f\n", x, sqrt(x));
    return 0;
}
/*log(x): return the natural logarithm of x */
#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0;
    printf("log(%.1f) = %.1f\n", x, log(x));
    return 0;
}
/*pow(x,y): return the value of x raised to the power of y */
#include <stdio.h>
#include <math.h>

int main() {
    double x = 2.0, y = 3.0;
    printf("pow(%.1f, %.1f) = %.1f\n", x, y, pow(x, y));
    return 0;
}