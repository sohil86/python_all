//Full Working Program
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>//required to use 'rand()'
#include <time.h>//required to use 'srand(time(NULL))'


int main()
{
srand(time(NULL));//required for "randomness"

 int r;
 r=rand()%10000;
	sleep(1);
 //printf("%i",r);

return (r);
}