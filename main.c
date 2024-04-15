#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nEmpresa e seus descontos\n");

    float preco;
    float desconto;
    float preco_reajustado;
    int total_preco = 0;
    float preco_medio;
    float soma_preco = 0;

    while(1)
    {
        printf("\nDigite o preco da mercadoria: ");
        scanf("%f",&preco);

        if(preco <= 0)
            break;

        if(preco < 500)
        {
            desconto = preco * 0.7;
        }

        else if(preco > 500 && preco < 3000)
            {
                desconto = preco * 0.6;
            }

        else
        {
            desconto = preco * 0.5;
        }

        preco_reajustado = preco - desconto;
        printf("Desconto do produto: %2.f\n", desconto);
        printf("Valor promocional: %2.f\n", preco_reajustado);
        total_preco++;
        soma_preco = soma_preco + preco_reajustado;
    }

    if(total_preco > 0)
    {
        preco_medio = soma_preco / total_preco;
        printf("\nMEdia de precos: %.2f", preco_medio);
    }
    else
    {
        printf("\nNenhum preco foi informado");
    }

    return 0;
}
