#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int tamanhoPadraoVetor = 0;

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
    if (z > (x + y) || x > (y + z) || y > (x + z))
    {
        return "invalido";
    }

    if (x, y == z && y, z == x && x, z == y)
    {
        return "Triangulo Equilatero";
    }
    
    if (x == y || x == z || y == z)
    {
        return "Triangulo Isosceles";
    }

    if (x, y != z && y, z != x && x, z != y)
    {
        return "Triangulo Escaleno";
    }

    return "";
}

// (Exercicio8)
// Faça uma função que leia um número não determinado de valores positivos e
// retorna a média aritmética dos mesmos.
double pegarMediaDeListaNumeros(int *valores)
{   
    int somaValores = 0.00;
    double media;

    for (int i = 0; i < tamanhoPadraoVetor; i++)
    {
        somaValores += valores[i];
    }

    media = somaValores / tamanhoPadraoVetor;
    return media;
}

// (Exercicio9)
// Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e
// retorna X elevado a Z. (sem utilizar funções ou operadores de potência prontos)
int elevarNumeros(int x, int z)
{
    int resultado = 0;
    
    for (int i = 0; i < z; i++)
    {   
        if (resultado == 0)
        {
            resultado = x;
        }
        else {
            resultado = resultado * x;
        }
    }

    return resultado;
}

// (Exercicio10)
// Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o
// número de divisores desse valor.
int verificarQuantidadeDivisores(int numero)
{
    int quantidade = 0;

    for (int i = 1; i < numero; i++)
    {
        if ((numero % i) == 0)
        {
            quantidade++;
        }
    }

    return quantidade;
}

// (Exercicio11)
// Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e
// retorna o somatório desse valor.
int realizarSomatoria(int valor)
{
    return valor + valor;
}

// (Exercicio12)
// Escreva um procedimento que receba um número inteiro. Esta função deve
// verificar se tal número é primo. No caso positivo, a função deve retornar 1, caso
// contrário zero.
int eNumeroPrimo(int numero)
{   
    int resultado = 1;

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            resultado = 0;
            break;
        }
    }

    return resultado;
}

// (Exercicio12)
// Criar uma função que verifique quantas vezes um número inteiro x é divisível por
// um número inteiro y. A função deve retornar -1 caso não seja possível calcular.
int verificarQuantidadeVezesNumeroDivisivel(x, y)
{
    int resultado = -1;

    if ((x % y) == 0)
    {
        return x / y;
    }

    return resultado;
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
    printf("\nEXERCICIO 7\n");
    char *resultado;
    int x, y, z;
    printf("Informe os lados do triangulo (x y z)");
    scanf("%d%d%d", &x, &y, &z);
    resultado = pegarTipoTriangulo(x, y, z);

    if (strcmp(resultado, "invalido") == 0)
    {
        printf("Os valores informados nao formam um triangulo.\n");
    }
    else if (strcmp(resultado, "") == 0)
    {
        printf("Dados informados invalidos,\n");
    }
    else
    {
        printf("O triangulo de lados x=%d, y=%d e z=%d e %s,\n", x, y, z, resultado);
    }
}

void rodarExercicio8()
{
    printf("\nEXERCICIO 7\n");
    int *valores;
    valores = (int*) malloc(0);
    char rodar = 's';
    double media;
    int i = 0;

    while (rodar == 's')
    {
        printf("Informe um numero: ");
        scanf("%d", &valores[i]);
        tamanhoPadraoVetor++;
        realloc(valores, tamanhoPadraoVetor);
        i++;
        printf("Adicionar outro? s/n ");
        scanf("%s", &rodar);
    }

    media = pegarMediaDeListaNumeros(valores);
    printf("A media aritimetica dos valores e %lf\n", media);
}

void rodarExercicio9()
{
    printf("\nEXERCICIO 9\n");
    int x, z, resultado;
    printf("Informe o valores a serem elevados (x z): ");
    scanf("%d%d", &x, &z);
    resultado = elevarNumeros(x, z);
    printf("%d^%d = %d\n", x, z, resultado);
}

void rodarExercicio10()
{
    printf("\nEXERCICIO 10\n");
    int numero, divisores;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    divisores = verificarQuantidadeDivisores(numero);
    printf("O numero %d possuir %d divisores", numero, divisores);
}

void rodarExercicio11()
{
    printf("\nEXERCICIO 11\n");
    int numero, resultado;
    printf("Informe um numero inteiro e positivo: ");
    scanf("%d", &numero);
    if (numero <= 0)
    {
        printf("Numero informado nao e positivo.\n");
    }
    else
    {
        resultado = realizarSomatoria(numero);
        printf("A somatoria do valor %d e %d\n", numero, resultado);
    }
}

void rodarExercicio12()
{
    printf("\nEXERCICIO 12\n");
    int numero, resultado;
    printf("Informe um numero inteiro e positivo: ");
    scanf("%d", &numero);
    resultado = eNumeroPrimo(numero);
    if (resultado == 1)
    {
        printf("E um numero primo\n");
    }
    else
    {
        printf("Numero nao e primo\n");
    }
}

void rodarExercicio13()
{
    printf("\nEXERCICIO 13\n");
    int x, y, resultado;
    printf("Informe dois numeros inteiros (x y): ");
    scanf("%d%d", &x, &y);
    resultado = verificarQuantidadeVezesNumeroDivisivel(x, y);
    if (resultado == -1)
    {
        printf("Numero %d nao e divisivel por %d.\n", x, y);
    }
    else 
    {
        printf("%d pode ser dividido em %d vezes.\n", x, resultado);
    }
}

int main()
{   
    rodarExercicio1();
    rodarExercicio2();
    rodarExercicio3();
    rodarExercicio4();
    rodarExercicio5();
    rodarExercicio6();
    rodarExercicio7();
    rodarExercicio8();
    rodarExercicio9();
    rodarExercicio10();
    rodarExercicio11();
    rodarExercicio12();
    rodarExercicio13();

    return 0;
}
