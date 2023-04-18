#include <stdio.h>
#include <stdlib.h>


int main() 
{

char girdi[35];

printf("işleminizi yazınız:");
fgets(girdi,35,stdin);

for (i = 0; i < sizeof(girdi); i++)
if (girdi[i] == '('){
 girdi[i] = 

}else if ( girdi[i] == '0' || girdi[i] == '1' || girdi[i] == '2' || girdi[i] == '3' || girdi[i] == '4' || girdi[i] == '5' || girdi[i] == '6' ||  girdi[i] == '7' || girdi[i] == '8' || girdi[i] == '9'){
 
}else if (girdi[i] == '+')
{
   return girdi[i-1] + girdi[i+1];
}else if (girdi[i] == '-')
{
   return girdi[i-1] - girdi[i+1];
}else if (girdi[i] == '*')
{
   return girdi[i-1] * girdi[i+1];
}else if (girdi[i] == '/')
{
   return girdi[i-1] / girdi[i+1];
}














































    return 0;
}