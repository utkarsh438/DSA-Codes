#include <stdio.h>
#include<math.h>

 int main () {
 float temp, c;
    scanf("%f", &temp);
    
    c = ((temp-32)*5)/9;
    
    printf("%.2f", c);
    
    return 0;
 }