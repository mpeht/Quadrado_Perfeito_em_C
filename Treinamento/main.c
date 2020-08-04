#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 1, num, num02, num03, soma = 0;

      printf("Digite um numero: \n");
      scanf("%i", &num);

        num;
        //Enquanto o loop for menor que o próprio número então continuara a efetuar a divisão
        while(i < num01)  {
            //Condicional se ocorre a divisão, divulga o imprime o número e acrescenta a soma e caso não ocorra, simplesmente há um incremento.
            if(num % i == 0)  {
                num03 = (num / i);
                printf("\n Divisivel por %i", i);
                soma = soma + i;
                i++;
                    }else{
                        i++;
                    }
        }
        //Ao final do incremento o resultado da soma terá que ser obrigatóriamente igual ao número original para ser um quadrado perfeito
        //Caso contrario não será.
            if(soma == num) {
                    printf("\n E um quadrado perfeito: %i", soma);
                        }else{
                            printf("\n Nao e um quadrado perfeito.");
                        }

            return 0;
}
