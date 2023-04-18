#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> // Komut göstergesinde Türkçe karakterlerin düzgün bir şekilde gösterilmesi için


int main() 
{

    int max;
    int min;

    printf("Tutulan sayı hangi sayıdan daha küçük olsun istiyorsan onu yaz:\n");
    scanf("%d", &max);

    printf("Tutulan sayı hangi sayıdan daha büyük olsun istiyorsan onu yaz:\n");
    scanf("%d", &min);

    int cevap;
    int tahminler = 0;
    int tahmin;


    srand(time(0));

    cevap = (rand() % max) + min;

    printf("Sayı belirlendi :)\n");

    do{
        printf("Tahmininizi giriniz:\n");
        scanf("%d", &tahmin);
            if (tahmin > cevap)
            {
                printf("Daha küçük bir sayı deneyiniz.\n");
            }else if (tahmin < cevap)
            {
                printf("Daha büyük bir sayı giriniz.\n");
            }else {
                printf("Tebrikler, tahmininiz doğru.\n");
            }
        
        tahminler++;

    }while (cevap != tahmin);

    printf("%d. denemede cevabı buldunuz.", tahminler); 


    return 0;
}
