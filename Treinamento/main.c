#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 1, num, num02, num03, soma = 0;

      printf("Digite um numero: \n");
      scanf("%i", &num);

        num;
        //Enquanto o loop for menor que o pr�prio n�mero ent�o continuara a efetuar a divis�o
        while(i < num01)  {
            //Condicional se ocorre a divis�o, divulga o imprime o n�mero e acrescenta a soma e caso n�o ocorra, simplesmente h� um incremento.
            if(num % i == 0)  {
                num03 = (num / i);
                printf("\n Divisivel por %i", i);
                soma = soma + i;
                i++;
                    }else{
                        i++;
                    }
        }
        //Ao final do incremento o resultado da soma ter� que ser obrigat�riamente igual ao n�mero original para ser um quadrado perfeito
        //Caso contrario n�o ser�.
            if(soma == num) {
                    printf("\n E um quadrado perfeito: %i", soma);
                        }else{
                            printf("\n Nao e um quadrado perfeito.");
                        }

            return 0;
}
