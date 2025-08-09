/*
#include <stdio.h>

int main()
{
    int n1, n2;
    double media;
    printf("Informe o primeiro numero:");
    scanf("%d", &n1);
    printf("Informe o segundo numero:");
    scanf("%d", &n2);
    media = (n1 + n2) / 2.0;
    printf("A media eh: %.2lf/n", media);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int numero, quadrado;
    printf("Informe um numero:");
    scanf("%d", &numero);
    quadrado = numero * numero;
    printf("O quadrado do numero eh: %d/n", quadrado);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    double salario, novoSalario, reajuste;
    printf("Informe o salario do funcionario:");
    scanf("%lf", &salario);
    reajuste = salario/100;
    novoSalario = salario + reajuste;
    printf("Novo salario: %.2lf\n", novoSalario);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    double preco, desconto, novoPreco;
    printf("Informe o preco do produto:");
    scanf("%lf", &preco);
    desconto = preco * 0.09;
    novoPreco = preco - desconto;
    printf("Novo preco: %.2lf\n", novoPreco);
    return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    char v1, v2, v3;
    printf("Informe o primeiro caracter:");
    scanf("%c", &v1);
    printf("Informe o segundo caracter:");
    scanf(" %c", &v2);
    printf("Informe o terceiro caracter:");
    scanf(" %c", &v3);
    printf("%c %c %c\n", v1, v2, v3);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int a, b, c, x;

    printf("Informe o valor de a:");
    scanf("%d", &a);
    printf("Informe o valor de b:");
    scanf("%d", &b);
    printf("Informe o valor de c:");
    scanf("%d", &c);
    x = 2*((a-c)/8)-b*5;
    printf("Valor de x: %d/m", x);
    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int v1, v2, som, mult, sub, div, resto;
    printf("Digite o primeiro numero:");
    scanf("%d", &v1);
    printf("Digite o segundo numero:");
    scanf("%d", &v2);

    som = v1 + v2;
    mult = v1 * v2;
    sub = v1 - v2;
    div = v1 / v2;
    resto = v1 % v2;

    printf("\nsoma = %d\nmultiplicacao = %d\nsubtracao = %d\ndivisao = %d\nresto = %d", som, mult, sub, div, resto);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int num;
    printf("Primeiro valor:");
    scanf("%d", &num);
    //num = num +1;
    num += 1;
    printf("Novo valor: %d\n", num);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    double raio, area, perimetro, pi = 3.14159;
    printf("Informe o valor do raio:");
    scanf("%lf", &raio);
    area = pi * raio * raio;
    perimetro = 2*pi*raio;
    printf("Area: %.2lf\n", area);
    printf("Perimetro: %.2lf\n", perimetro);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
    int idade, qntDias;
    printf("Informe sua idade:");
    scanf("%d", &idade);
    qntDias = idade * 365;
    printf("A pessoa viveu %d dias.\n", qntDias);

    return 0;
}
*/
/*
#include <stdio.h>

int main()
{
  double numero, resultado;
  printf("Informe um valor: \n");
  scanf("%lf", &numero);
  resultado = numero *0.04;
  printf("O resultado eh: %.2lf.\n", resultado);

  return 0;
  }
  */
/*
#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, Media;
    printf("Informe a primeira nota:");
    scanf("%d", &nota1);
    printf("Informe a segunda nota:");
    scanf("%d", &nota2);
    printf("Informe a terceira nota:");
    scanf("%d", &nota3);
    Media = (nota1 + nota2 + nota3) / 3;
    printf("A media do aluno eh: %d", Media);
    return 0;
}
*/
#include <stdio.h>

int main()
{
    double velMedia, dist, tempo;
    printf("Informe o tempo:");
    scanf("%lf", &tempo);
    printf("Informe a distancia:");
    scanf("%lf", &dist);
    velMedia = dist / tempo;
    printf("A Velocidade media eh: %.2lf", velMedia);

    return 0;

}
