#include <stdio.h>
#include <stdlib.h>

int main()
{
      int sayi, toplam, i,j;

      for(i = 1; i<10000;i++){
            toplam = 0;

            for(j = 1;j<i;j++){
                  if(i % j == 0) toplam += j;
            }

            if(toplam == i) printf("%d\n",i);
      }
}
