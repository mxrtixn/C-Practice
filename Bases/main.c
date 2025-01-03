#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    int type, tra;
    int decimal;
    int binary[100];
    int i, j;


 printf("------------Pick The Type Of Base Of Your Number------------\n");
 printf("1:Base Decimale\n");
 printf("2:Base Binaire\n");
 printf("3:Base Octal\n");
 printf("4:Base Hexadecimale\n");
 printf("5:Base BCD");
 printf("\n\n");
printf("---->Pick Your Obtion: ");
scanf("%d", &type);


 printf("\n\n");
 printf("------------Pick The Type Of Base You Would Like To Transfer To------------\n");
 printf("1:Base Decimale\n");
 printf("2:Base Binaire\n");
 printf("3:Base Octal\n");
 printf("4:Base Hexadecimale\n");
 printf("5:Base BCD");
 printf("\n\n");
printf("---->Pick Your Obtion: ");
scanf("%d", &tra);

if(type == 1){
        if(tra == 2){

        printf("\n\n---->Please Enter The Decimal Number: ");
        scanf("%d", &decimal);
        if (decimal == 0){
            printf("\n\n------------------------------------------> Binary = 0<------------------------------------------\n\n");
        }
if(type == 1){
        if(tra == 2){
            while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
  }
}
}
}






    return 0;
}
