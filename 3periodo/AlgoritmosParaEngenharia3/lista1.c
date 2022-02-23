#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// (Exercicio1)
// Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu
// volume (v = 4/3*PI*R3).
double volumeEsferaPorRaio(double raio)
{
    double pi = 3.14, volume;
    volume = ((4/3) * pi * pow(raio, 3));
    return volume;
}

// (Exercicio2)
// Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e
// uma letra. Se a letra for A o procedimento calcula a média aritmética das notas do
// aluno e se for P, a sua média ponderada (pesos: 5, 3 e 2).
double calcularMediaAluno(double na, double nb, double nc, char proc)
{
    double media = 0;

    if (proc == 'A' || proc == 'a')
    {
        media = (na + nb + nc) / 3;
    } else if (proc == 'P' || proc == 'p')
    {
        int pa = 5, pb = 3, pc = 2;
        media = ((na * pa) + (nb * pb) + (nc * pc)) / (pa + pb + pc);
    }

    return media;
}

// (Exercicio3)
// Faça um procedimento que recebe por parâmetro os valores necessário para o
// cálculo da fórmula de báskara. Obtenha as raízes, caso seja possível calcular.
double *calcularBascara(double a, double b, double c)
{   
    static double resultados[2];
    double delta = pow(b, 2) - (4 * a * c);

    if (delta > 0) 
    {
        double raizDelta = sqrt(delta);
        double divisorValor = a * 2;
        double x1 = (-b + raizDelta) / divisorValor;
        double x2 = (-b - raizDelta) / divisorValor;
        resultados[0] = x1;
        resultados[1] = x2;
    }

    return resultados;
}

// (Exercicio4)
// Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e
// retorna essa idade expressa em dias.
int calcularIdadePessoaDias(int anos, int meses, int dias)
{
    for (int i = 0; i < anos; i++) meses += 12;

    for (int i = 0; i < meses; i++) dias += 30;

    return dias;
}

// (Exercicio5)
// Faça um procedimento que recebe a idade de um nadador por parâmetro e
// retorna, também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:
// Idade                           Categoria
// 5 a 7 anos                      Infantil A
// 8 a 10 anos                     Infantil B
// 11-13 anos                      Juvenil A
// 14-17 anos                      Juvenil B
// Maiores de 18 anos (inclusive)  Adulto
char *pegarCategoriaNadadorPelaIdade(int idade)
{
    static char * categoria;

    if (idade >= 5 && idade <= 7)
    {
        categoria = "Infantil A";
    }
    else if (idade >= 8 && idade <= 10)
    {
        categoria = "Infantil B";
    }
    else if (idade >= 11 && idade <= 13)
    {
        categoria = "Juvenil A";
    }
    else if (idade >= 14 && idade <= 17)
    {
        categoria = "Juvenil B";
    }
    else if (idade >= 18)
    {
        categoria = "Adulto";
    }

    return categoria;
}

// (Exercicio6)
// Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou
// negativo. A função deve retornar um valor booleano.
bool eNumeroPositivo(int numero)
{
    return numero >= 0;
}

// (Exercicio7)
// Escreva um procedimento que recebes 3 valores reais X, Y e Z e que verifique se
// esses valores podem ser os comprimentos dos lados de um triângulo e, neste
// caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um
// triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de
// cada lado de um triângulo é menor do que a soma do comprimento dos outros dois
// lados. O procedimento deve identificar o tipo de triângulo formado observando as
// seguintes definições:
//      ● Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
//      ● Triângulo Isósceles: os comprimentos de 2 lados são iguais.
//      ● Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.

char *pegarTipoTriangulo(int x, int y, int z)
{
    if (x)
}

void rodarExercicio1()
{
    printf("EXERCICIO 1\n");
    double raio, volume;
    printf("Informe um raio: ");
    scanf("%lf", &raio);
    volume = volumeEsferaPorRaio(raio);
    printf("O volume de uma esfera com raio %lf e %lf.\n", raio, volume);
}

void rodarExercicio2()
{
    printf("\nEXERCICIO 2\n");
    char procedimento;
    double notaA, notaB, notaC, media;
    printf("Informe as notas 1,2 e 3 do aluno no formato (NOTA1 NOTA2 NOTA3): ");
    scanf("%lf%lf%lf", &notaA, &notaB, &notaC);
    printf("Informe o procedimento (a: Media aritmetica/p: media ponderada): ");
    scanf("%s", &procedimento);
    media = calcularMediaAluno(notaA, notaB, notaC, procedimento);
    printf("A media do aluno foi %lf\n", media);
}

void rodarExercicio3()
{
    printf("\nEXERCICIO 3\n");
    int a, b, c;
    double *resultado;
    printf("Informe valores inteiros para (a b c): ");
    scanf("%d%d%d", &a, &b, &c);
    resultado = calcularBascara(a, b, c);

    if (resultado[0], resultado[1] == 0)
    {
        printf("Estes valores nao podem ser resolvidos.\n");
    }
    else
    {
        printf("Resultado da formula de baskara:\nx1=%lf\nx2=%lf\n", resultado[0], resultado[1]);
    }
}

void rodarExercicio4()
{
    printf("\nEXERCICIO 4\n");
    int anos, meses, dias, totalDias;
    printf("Informe a quantidade de anos em (anos meses dias): ");
    scanf("%d%d%d", &anos, &meses, &dias);
    totalDias = calcularIdadePessoaDias(anos, meses, dias);
    printf("A idade da pessoa informada possui %d dias.\n", totalDias);
}

void rodarExercicio5()
{
    printf("\nEXERCICIO 5\n");
    char *categoria;
    int idade;
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);
    categoria = pegarCategoriaNadadorPelaIdade(idade);
    printf("A categoria do nadador e %s.\n", categoria);
}

void rodarExercicio6()
{
    printf("\nEXERCICIO 6\n");
    bool ePositivo;
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    ePositivo = eNumeroPositivo(numero);
    if (ePositivo)
    {
        printf("%d e positivo!\n", numero);
    }
    else
    {
        printf("%d e negativo!\n", numero);   
    }
}

void rodarExercicio7()
{
    printf("\nEXERCICIO 6\n");
}

int main()
{   
    // rodarExercicio1();
    // rodarExercicio2();
    // rodarExercicio3();
    // rodarExercicio4();
    // rodarExercicio5();
    // rodarExercicio6();

    return 0;
}
