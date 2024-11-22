#include <stdio.h>
#include <stdlib.h>

typedef int *p_vetor;

p_vetor criarVetor(unsigned int qtd_itens)
{
  p_vetor vetor;
  vetor = malloc(sizeof(int) * qtd_itens);
  return vetor;
}

void preencherVetor(p_vetor vetor, unsigned int qtd_itens){

    for (int i = 0; i < qtd_itens; i++)
   {
      scanf("%d", &vetor[i]);
    }
}
void imprimirHistograma(p_vetor vetor, unsigned int qtd_itens)
{

    for (int i = 0; i < qtd_itens; i++)

    {
     printf("%d ", vetor[i]);
     for (int j = 0; j < vetor[i]; i++)

        {
         printf("*");

        }
        printf("\n");

    }

}

void destruirVetor(p_vetor vetor)

{

    free(vetor);

}
int main()

{    // dados
   unsigned int qtd_categorias = 0;
   p_vetor categorias;


   // 1 - Ler quantidade de categorias
    scanf("%u", &qtd_categorias);
  // 2 - Alocar memoria para o vetor
    categorias = criarVetor(qtd_categorias);
 // 3 - Preencher o vetor com os dados
   preencherVetor(categorias, qtd_categorias);
 // 4 - Imprimir histograma
   imprimirHistograma(categorias, qtd_categorias);
 // 5 - Desalocar vetor
   destruirVetor(categorias);
    
    
    return 0;
}
