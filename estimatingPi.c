#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double getRandomNumber(double lower_limit, double upper_limit);
double calculatePi(int maxIteration);



int main()
{
    int max_iteration = 100;
    srand(time(NULL));
    double pi = calculatePi(max_iteration);
    printf("Estimated Pi=%.3lf for %d iteration\n", pi, max_iteration);

    return 0;
}



double getRandomNumber(double lower_limit, double upper_limit)
{


return (float)rand()/RAND_MAX * (upper_limit - lower_limit) + lower_limit;

}



double calculatePi(int maxIteration)
{

double x, y;
int inside_the_circle = 0;
for(int i = 0; i < maxIteration; i++)
{

x = getRandomNumber(-1, 1);
y = getRandomNumber(-1, 1);

if (x*x + y*y <= 1)
{
    inside_the_circle++;
}

}

return (inside_the_circle * 4.0)/maxIteration;

}





