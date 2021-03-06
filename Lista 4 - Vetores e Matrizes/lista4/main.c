#include "main.h"

/** 39 exercicio de vetores
*          | |
*          | |
*         \   /
*          \ /
*           '
*/

/** Exercicio 1
*   Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
*   O programa deve executar os seguintes passos:
*   (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
*   (b) Armazene em uma variável inteira (simples) a soma entre os valores das posiç˜oes
*       A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
*   (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
*   (d) Mostre na tela cada valor do vetor A, um em cada linha.
*/
void ex01() {
    int a[6] = {1, 0, 5, -2, -5, 7}, i = 0, soma = 0;
    for( i = 0 ; i < 6 ; i++) printf(" a[%d] -> %2d \n",i,a[i]);
    puts("");
    soma = a[0] + a[1] + a[5];
    printf(" a[0] + a[1] + a[5] = %d \n",soma);
    puts("");
    a[4] = 100;
    for( i = 0 ; i < 6 ; i++) printf(" a[%d] -> %2d \n",i,a[i]);
}

/** Exercicio 02
*   Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
void ex02() {
    int a[6] = {0}, i = 0;

    for( i = 0 ; i < 6 ; i++) {
        printf(" %d -> _\b",i+1);
        scanf(" %d",&a[i]);
    }
    puts("");
    for( i = 0 ; i < 6 ; i++) printf(" a[%d] -> %2d \n",i,a[i]);
}

/** Exercicio 03
    Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
    componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
    10 elementos cada. Imprimir todos os conjuntos.
*/
void ex03() {
    float num[10] = {0.0}, mult[10] = {0.0};
    int i, tam = 10;

    for( i = 0 ; i < tam ; i++) {
        printf(" %d -> _\b",i+1);
        scanf(" %f",&num[i]);
        mult[i] = num[i] * num[i];
    }

    puts("");
    for( i = 0 ; i < tam ; i++) {
        printf(" v1[%d] = %.2f \n",i,num[i]);
    }

    puts("");
    for( i = 0 ; i < tam ; i++) {
        printf(" v2[%d] = %.2f \n",i,mult[i]);
    }
}

/** Exercicio 04
*   Faça um programa que leia um vetor de 8 posiç˜oes e, em seguida, leia também dois valores
*   X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
*   deverá escrever a soma dos valores encontrados nas respectivas posiç˜oes X e Y .
*/
void ex04() {
    int v[8]= {0}, x = 0, y = 0, i = 0, soma = 0;
    printf(" Insira 8 valores...\n");
    for( i = 0 ; i < 8 ; i++) {
        printf(" %d -> _\b",i+1);
        scanf(" %d",&v[i]);
    }
    printf(" valor de x = _\b");
    scanf(" %d",&x);
    printf(" valor de y = _\b");
    scanf(" %d",&y);
    soma = v[x-1]+ v[y-1];
    printf(" Soma de v[%d] + v[%d] = %d + %d = %d \n",x,y,v[x-1],v[y-1],soma);
}

/** Execicio 05
*   Leia um vetor de 10 posiç˜oes. Contar e escrever quantos valores pares ele possui.
*/
void ex05() {
    int v[10] = {1,20,33,400,555,6000,7777,800,90,10}, i = 0, qtPares = 0;

    for( i = 0 ; i < 10 ; i++) {
        if(v[i] % 2 == 0) qtPares++;
    }
    printf("\n #> Foram encontrados %d numero pares.\n",qtPares);
}

/** Exercicio 06
*   Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
*   ser impresso o maior e o menor elemento do vetor.
*/
void ex06() {
    int v[10] = {0}, i = 0, maior_valor = INT_MIN, menor_valor = INT_MAX;

    for( i = 0 ; i < 10 ; i++) {
        printf(" Valor %d -> _\b",i+1);
        scanf(" %d",&v[i]);
        if(maior_valor < v[i]) maior_valor = v[i];
        if(menor_valor > v[i]) menor_valor = v[i];
    }
    printf("\n #> Maior valor = %d\n #> Menor valor = %d\n",maior_valor,menor_valor);
}

/** Exercicio 07
*   Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
*   Imprima o vetor, o maior elemento e a posiç˜ao que ele se encontra.
*/
void ex07() {
    int v[10] = {}, i = 0, maior_valor = INT_MIN, posicao_maior_valor  = -1;

    for ( i = 0 ; i < 10 ; i++) {
        printf(" Valor %d -> _\b",i+1);
        scanf(" %d",&v[i]);
        if(maior_valor < v[i]) {
            maior_valor = v[i];
            posicao_maior_valor = i;
        }
    }

    for( i = 0 ; i < 10 ; i++) {
        printf("\n V[%2d] = %d",i+1,v[i]);
        if(posicao_maior_valor == i) printf(" <- Maior valor");
    }
}

/** Exercicio 08
* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos
* na ordem inversa.
*/
void ex08() {
    int v[6] = {}, v_inv[6] = {}, i = 0;
    int n = 6;
    for( i = 0 ; i < n ; i++) {
        printf(" Valor %d -> _\b",i+1);
        scanf(" %d",&v[i]);
        //v_inv[n-i] = v[i];
    }

    for( i = 0 ; i < n  ; i++) {
        v_inv[n-i-1] = v[i];
    }

    for( i = 0 ; i < n ; i++) {
        printf(" V_inv[%2d] = %d\n",i+1,v_inv[i]);
    }
}

/** Exercicio 09
*   Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores
*   lidos na ordem inversa.
*/
void ex09() {
    int v[6] = {}, i = 0;
    puts(" Insira valores inteiros pares...");
    for( i = 0 ; i < 6 ; i++ ) {
        printf(" Valor %d -> _\b",i+1);
        scanf(" %d",&v[i]);
        if(v[i] % 2 != 0) {
            printf(" O numero tem de ser par...\n");
            i--;
        }
    }
    puts("\n Impresao inversa:");
    for( i = 5 ; i >= 0 ; i-- )
        printf(" Valor %d -> %d\n",i+1,v[i]);
}

/** Exercicio 10
*   Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
*   e imprima a média geral.
*/
void ex10() {
    float notas[15] = {}, media = 0, soma = 0;
    int i = 0;
    for( i = 0 ; i < 15 ; i++) {
        printf(" Nota do aluno %2d -> _\b",i+1);
        scanf(" %f",&notas[i]);
    }
    for( i = 0 ; i < 15 ; i++) soma+= notas[i];
    media = soma / 15;

    printf(" Media = %.2f",media);
}

/** Exercicio 11
*   Faça um programa que preencha um vetor com 10 números reais, calcule e mostre a
*   quantidade de números negativos e a soma dos números positivos desse vetor.
*/
void ex11() {
    int v[10] = {}, quatidade_negativos = 0, soma_positivos = 0, i = 0;
    for( i = 0 ; i < 10 ; i++) {
        printf(" Valor %2d = _\b",i+1);
        scanf("%d",&v[i]);
        if(v[i] < 0) quatidade_negativos++;
        if(v[i] > 0) soma_positivos += v[i];
    }

    printf(" Quantidade de valores negativos = %d \n",quatidade_negativos);
    printf(" Soma dos positivos = %d \n",soma_positivos);
}

/** Exercicio 12
*   Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
*   juntamente com o maior, o menor e a média dos valores.
*/
void ex12() {
    int v[5] = {}, maior = INT_MIN, menor = INT_MAX, soma = 0, i = 0;

    for( i = 0 ; i < 5 ; i++) {
        printf(" v[%d] = _\b",i);
        scanf("%d",&v[i]);
        if(maior < v[i]) maior = v[i];
        if(menor > v[i]) menor = v[i];
        soma += v[i];
    }
    puts("\n Valores inseridos:");
    for( i = 0 ; i < 5 ; i++)
        printf(" v[%d] = %d \n",i,v[i]);
    printf(" Maior valor = %d \n",maior);
    printf(" Menor valor = %d \n",menor);
    printf(" Media = %0.2f \n",soma / 5.0);
}

/** Exercicio 13
*   Fazer um programa para ler 5 valores e, em seguida, mostrar a posiç˜ao onde se encontram
*   o maior e o menor valor.
*/
void ex13() {
    int v[5] = {}, maior[2] = {0,INT_MIN}, menor[2] = {0,INT_MAX}, i = 0;

    for( i = 0 ; i < 5 ; i++) {
        printf(" v[%d] = _\b",i);
        scanf("%d",&v[i]);
        if(maior[1] < v[i]) {
            maior[0] = i;
            maior[1] = v[i];
        }
        if(menor[1] > v[i]) {
            menor[0] = i;
            menor[1] = v[i];
        }
    }
    puts("");
    printf(" Maior valor v[%d] = %d \n",maior[0],maior[1]);
    printf(" Menor valor v[%d] = %d \n",menor[0],menor[1]);
}

/** Exercicio 14
*   Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais
*   e os escreva na tela.
*/
void ex14() {
    const int n = 10;
    int v[10] = {1,7,4,1,7,1,6,7,8,5}, v_Rep[5] = {}, i = 0, j = 0, k = 0,l = 0;

    for( i = 0 ; i < n-1 ; i++ ) {
        for( j = i + 1 ; j < n ; j++ ) {
            if(v[i] == v[j]) {
                for( k = 0 ; v_Rep[k] != 0 ; k++) {
                    if(v_Rep[k] == v[i]) break;
                }
                if( k == l) {
                    v_Rep[l] = v[i];
                    l++;
                }
            }
        }
    }
    printf(" Valores repetidos :\n");
    for( i = 0; v_Rep[i] != 0; i++) printf(" %d -> %d \n",i,v_Rep[i]);
}

/** Exercicio 15
*   Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando elementos
*   repetidos.
*/
void ex15() {
    int vetor[20] = {1,2,7,8,9,3,2,2,3,4,2,2,3,4,5,2,2,3,4,5},n = 20, n_elem = n, i = 0, j = 0, k = 0;

    for( i = 0 ; i < n_elem ; i++ ) {
        for( j = n-1 ; j > i ; j--) {

            if(vetor[i] == vetor[j]) {
                n_elem--;
                for(k = j ; k < n-1 ; k++) {
                    vetor[k] = vetor[k+1];
                }
                vetor[n-1] = 0;
            }
        }
    }
    for( i = 0 ; i < n_elem ; i++) printf(" v[%d] = %d \n",i,vetor[i]);
}

/** Exercicio 16
*   Faça um programa que leia um vetor de 5 posiç˜oes para números reais e, depois, um
*   código inteiro.
*   -> Se o código for zero, finalize o programa;
*   -> Se for 1, mostre o vetor na ordem direta;
*   -> se for 2, mostre o vetor na ordem inversa.
*   -> Caso, o código for diferente de 1 e 2 escreva uma mensagem informando que o código é inválido.
*/
void ex16() {
    float v[]= {1.2, 2.5, 4.5, 9.5, 7.5};
    int op = -1, n = 5,i = 0;

    while(1) {
        system("cls");
        puts(" Escolha uma opcao:");
        puts(" 0 - Sair");
        puts(" 1 - Imprime pela ordem de entrada");
        puts(" 2 - Imprime pela ordem inversa de entrada");
        printf(" $>_\b");
        scanf(" %d",&op);
        getchar();
        switch(op) {
        case 0:
            exit(0);
            break;
        case 1:
            for( i = 0 ; i < n ; i++) printf(" v[%d] = %.2f \n",i,v[i]);
            printf(" Press any ENTER to continue...");
            getchar();
            break;
        case 2:
            for( i = n-1 ; i >=0  ; i--) printf(" v[%d] = %.2f \n",i,v[i]);
            printf(" Press any ENTER to continue...");
            getchar();
            break;
        default:
            puts(" Codigo invalido...");
            printf(" Press any ENTER to continue...");
            getchar();
        }
    }
}

/** Exercicio 17
*   Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem
*   valores negativos.
*/
void ex17() {
    int v[10] = {-1,5,-4,8,-7,-8,45,1362,-84,56}, i = 0, n = 10;

    for( i = 0 ; i < n ; i++) {
        if(v[i] < 0) v[i] = 0;
    }

    for( i = 0 ; i < n ; i++) printf(" v[%d] = %d \n",i,v[i]);
}

/** Exercicio 18
*   Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
*   múltiplos de um número inteiro x num vetor e mostre-os na tela.
*/
void ex18() {
    int v[10] = {10,20,8,15,17,45,1362,84,56,51}, i = 0, n = 10, contador = 0, num = 0;

    printf(" Valor = _\b");
    scanf(" %d",&num);
    printf(" Multiplos de %d : \n",num);
    for( i = 0 ; i < n ; i++) {
        if(v[i] % num == 0) {
            printf(" %d \n",v[i]);
            contador++;
        }
    }
    printf(" Numero de multiplos = %d \n",contador);
}

/** Execicio 19
*   Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5 * i)%(i+1), sendo
*   i a posiç˜ao do elemento no vetor. Em seguida imprima o vetor na tela.
*/
void ex19() {
    int v[50] = {}, i = 0;

    for( i = 0 ; i < 50 ; i++) {
        v[i] = (i + 5 * i)%(i + 1);
    }


    for( i = 0 ; i < 50 ; i++) {
        printf(" v[%2d] = %d\n",i,v[i]);
    }
}

/** Exercicio 20
*  Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um
*  vetor com 10 posições. Preencha um segundo vetor apenas com os números ímpares
*  do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.
*/
void ex20() {
    int v[10] = {}, v_imp[10] = {}, num = 0, i = 0, j = 0;
    puts(" Introduzir numeros inteiros no intervalo [0,50]:");
    for( i = 0 ; i < 10 ; i++) {
        printf("v[%d] $>_\b",i);
        scanf("%d",&num);
        if(num < 0 || num > 50) {
            printf(" Valor invalido... \n");
            i--;
        } else {
            v[i] = num;
        }
    }

    for( i = 0 ; i < 10 ; i++) {
        if(v[i] % 2 != 0)
            v_imp[j++] = v[i];
    }

    puts("\n Vetor inteiro:");
    for( i = 0 ; i < 10 ; i+=2) {
        printf(" v[%d] = %d : v[%d] = %d \n",i,v[i],i+1,v[i+1]);
    }

    puts("\n Vetor de impares:");
    for( i = 0 ; i < j  ; i+=2) {
        printf(" Impares[%d] = %d : Impares[%d] = %d \n",i,v_imp[i],i+1,v_imp[i+1]);
    }
}

/** Exercicio 21
*   Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros
*   cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
*   do vetor C.
*/
void ex21() {
    int vA[10] = {1,20,300,4000,50000,600000,70000,8000,900,10}, vB[10] = {15,30,60,120,240,480,960,1920,3840,7680}, vC[10] = {};
    int i = 0;

    for( i = 0 ; i < 10 ; i++) {
        vC[i] = vA[i] - vB[i];
    }

    for( i = 0 ; i < 10 ; i++) {
        printf(" v[%d] = %d \n",i,vC[i]);
    }
}

/** Exercicio 22
*   Faça um programa que leia dois vetores de 10 posiç˜oes e calcule outro vetor contendo,
*   nas posições pares os valores do primeiro e nas posiç˜oes impares os valores do segundo.
*/
void ex22() {
    int vA[10] = {3,6,9,12,15,18,21,24,27,30}, vB[10] = {7,14,21,28,35,42,49,56,63,70}, vC[10] = {};
    int i = 0;

    for( i = 0 ; i < 10 ; i++) {
        if( i % 2 == 0) {
            vC[i] = vA[i];
        } else {
            vC[i] = vB[i];
        }
    }

    for( i = 0 ; i < 10 ; i++) {
        printf(" v[%d] = %d \n",i,vC[i]);
    }
}

/** Exercicio 23
*   Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto
*   escalar entre eles. Os conjuntos têm 5 elementos cada. Imprimir os dois conjuntos e o
*   produto escalar, sendo que o produto escalar é dado por: x1 * y1 + x2 * y2 + ... + xn * yn.
*/
void ex23() {
    float v1[]= {1.5, 1.6, 1.8, 1.4, 1.8}, v2[]= {3.5, 5.5, 0.5, 12.6, 11.85}, prod_escalar = 0;
    int n = 5, i = 0;

    for( i = 0 ; i < n ; i++) {
        prod_escalar += v1[i] * v2[i];
    }

    puts("\n Conjunto 1:");
    for( i = 0 ; i < n ; i++) {
        printf(" v1[%d] = %0.2f \n",i,v1[i]);
    }
    puts("\n Conjunto 2:");
    for( i = 0 ; i < n ; i++) {
        printf(" v2[%d] = %0.2f \n",i,v2[i]);
    }
    printf("\n Produto escalar = %0.2f \n",prod_escalar);
}

/** Exercicio 24
*   Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o
*   número do aluno e o segundo representando a sua altura em metros. Encontre o aluno
*   mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente
*   com suas alturas.
*/
void ex24() {
    int n_Aluno[] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    float altura[] = {1.50, 1.10, 2.0, 1.20, 1.40, 2.05, 1.25, 1.73, 1.75, 1.78};
    int ind_maior = 0, ind_menor = 0;
    int i = 0, n = 10;

    for( i = 1 ; i < n ; i++ ) {
        if(altura[ind_maior] < altura[i]) {
            ind_maior = i;
        }
        if(altura[ind_menor] > altura[i]) {
            ind_menor = i;
        }
    }
    printf(" O aluno numero %d com a altura %.2f e o mais alto \n",n_Aluno[ind_maior],
           altura[ind_maior]);
    printf(" O aluno numero %d com a altura %.2f e o mais baixo \n",n_Aluno[ind_menor],
           altura[ind_menor]);
}

/** Exercicio 25
*   Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais
*   que n˜ao s˜ao múltiplos de 7 ou que terminam com 7.
*/
void ex25() {
    int v[100] = {}, n = 100, i = 0, j = 0;

    for( i = 0 ; i <= n ; i++) {
        if(i % 7 == 0 || i % 10 == 7) {
            n++;
        } else {
            v[j] = i;
            j++;
        }

    }

    for( i = 0 ; i < 100 ; i++) {
        printf(" v[%2d] = %d \n",i,v[i]);
    }
}

/** Exercicio 26
*   Faça um programa que calcule o desvio padr˜ao de um vetor v contendo n = 10 números,
*   onde m é a media do vetor.
*
*   Desvio Padrão = sqrt( (1 / (n-1)) * Somatorio(1->n)(v[i] - m)^2 )
*/
void ex26() {

    int v[10] = {22, 24, 26, 23, 21, 22, 20, 24, 28, 30}, n = 10, soma = 0, i = 0;
    double m = 0, somatorio = 0, desvio_padrao = 0;

    for( i = 0 ; i < n ; i++) soma +=  v[i];
    m = soma / n;
    printf(" Valor medio do vetor = %0.2f \n",m);

    for( i = 0 ; i < n ; i++ ) somatorio += pow(v[i] - m, 2);
    printf(" Valor somatorio = %0.2f \n",somatorio);

    desvio_padrao = sqrt( somatorio / ( n - 1) );

    printf(" O desvio padrao = %.2f \n",desvio_padrao);
}

/** Exercicio 27
*   Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos
*   que s˜ao primos e suas respectivas posições no vetor.
*/
void ex27() {
    int n = 10;
    int v[10] = {123, 15, 54, 564, 6545, 5, 1, 2, 10, 11};
    int i = 0;
    for(i = 0 ; i < n ; i++) {
        if(isprime(v[i]) == 1) printf("%d \n",v[i]);
    }
}

/** Exercicio 28/b //pequeno erro - fiz para primos e não primos
*   Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
*   Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada
*   um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos s˜ao
*   utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
*/
void ex28b() {
    int n = 10;
    int v[10]= {11,7,3,4,5,-6,7344,82,943,10};
    int v1[10]= {}, v2[10]= {}, i =0, p1 = 0, p2 = 0, prime = 0;

    for( i = 0; i < n ; i++) {
        prime = isprime(v[i]);
        if(prime == 1) {
            v1[p1++] = v[i];
        } else if(prime == 0) {
            v2[p2++] = v[i];
        }
    }
    puts("Prime:");
    for(i = 0; i < p1 ; i++) {
        printf("%d \n",v1[i]);
    }
    puts(" ");
    puts("Not Prime:");
    for(i = 0; i < p2 ; i++) {
        printf("%d \n",v2[i]);
    }
}

/** Exercicio 28
*   Leia 10 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2.
*   Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada
*   um dos vetores v1 e v2 têm no máximo 10 elementos, mas nem todos os elementos s˜ao
*   utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.
*/
void ex28() {
    int n = 10;
    int v[10]= {11,7,3,4,5,-6,7344,82,943,10};
    int v1[10]= {}, v2[10]= {}, i =0, p1 = 0, p2 = 0;

    for( i = 0; i < n ; i++) {
        if(isodd(v[i])) {
            v1[p1++] = v[i];
        } else if(iseven(v[i])) {
            v2[p2++] = v[i];
        }
    }

    puts("Odd:");
    for(i = 0; i < p1 ; i++) {
        printf("%d \n",v1[i]);
    }
    puts(" ");
    puts("Even:");
    for(i = 0; i < p2 ; i++) {
        printf("%d \n",v2[i]);
    }

}

/** Exercicio 29
 * Faça um programa que receba 6 números inteiros e mostre:
 * Os números pares digitados;
 * A soma dos números pares digitados;
 * Os números ímpares digitados;
 * A quantidade de números ímpares digitados;
 */
void ex29() {
    int i = 0, aux = 0;
    int numPares = 0, par[6] = {0}, soma = 0 ;
    int numImpares = 0, impares[6] = {0};

    puts("Inserir 6 valores inteiros: ");
    for( i = 0 ; i < 6 ; i++) {
        printf("valor %i #_>_\b",i+1);
        scanf(" %d", &aux);

        if(aux == 0) {

        } else if( aux % 2 == 0 ) {
            par[numPares] = aux;
            numPares++;
            soma += aux;
        } else {
            impares[numImpares] = aux;
            numImpares++;
        }
    }

    puts(" ");
    puts(" Numeros pares:");
    for( i = 0 ; i < numPares ; i++) {
        printf(" %d ",par[i]);
    }
    printf("\n total: %d",soma);

    puts("\n");
    puts(" Numeros impares:");
    for( i = 0 ; i < numImpares ; i++) {
        printf(" %d ",impares[i]);
    }
    printf("\n Numero de impares: %d\n",numImpares);
}

/** Exercicio 30
* Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uni˜ao
* entre os 2 vetores anteriores, ou seja, que contém os números dos dois vetores. N˜ao
* deve conter números repetidos.
*/
void exec_ex30(int a[], int b[], int c[], int NAB, int *NC) {
    int i = 0, j = 0;

    for(i = 0; i < NAB ; i++) {
        c[i] = a[i];
        (*NC)++;
    }

    for(i = 0 ; i < NAB ; i++) {
        for(j = 0 ; j < *NC ; j++) {
            if(b[i] == c[j]) break;
        }

        if(j == *NC) {
            c[j] = b[i];
            (*NC)++;
        }
    }
}

void ex30() {
    int vetorA[10] = {1,2,3,4,5,6,7,8,9,10};
    int vetorB[10] = {1,20,30,4,55,6,77,8,94,10};
    int vetorC[20] = {0};
    int i = 0, Nab = 10, Nc = 0;

    exec_ex30(vetorA,vetorB,vetorC,Nab,&Nc);

    printf("Vetor A\t*\tVetor B\n");
    for(i = 0 ; i < Nab ; i++) {
        printf("%2d\t*\t%2d\n",vetorA[i],vetorB[i]);
    }
    puts("*****************************\n*****************************");
    printf(" Vetor C\n");
    for(i = 0 ; i < Nc ; i++)
        printf(" %2d\n",vetorC[i]);

}

/** Exercicio 31
* Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
* intersecção entre os 2 vetores anteriores, ou seja, que contém apenas os números que
* estão em ambos os vetores. Não deve conter números repetidos.
*/
void exec_ex31(int a[], int b[], int c[], int NAB, int *NC) {
    int i = 0, j = 0, k = 0;

    for(i = 0 ; i < NAB ; i++) {
        for(j = 0 ; j < NAB ; j++) {
            if(a[i] == b[j]) {
                for( k = 0 ; k < *NC ; k++) {
                    if(a[i] == c[k]) break;
                }
                if(k == *NC) {
                    c[*NC] = b[j];
                    (*NC)++;
                }

            }
        }
    }

}
void ex31() {
    int vetorA[10] = {1,2,3,3,3,6,7,3,9,10};
    int vetorB[10] = {1,20,6,3,55,7,7,8,9,3};
    int vetorC[10] = {0};
    int i = 0, Nab = 10, Nc = 0;

    exec_ex31(vetorA,vetorB,vetorC,Nab,&Nc);
    for(i = 0 ; i < Nc ; i++)
        printf(" %d \n",vetorC[i]);
}

/** Exercicio 32
* Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuário não
* informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
* abaixo:
* a) Soma entre x e y: soma de cada elemento de x com o elemento da mesma posicão em y.
* b) Produto entre x e y: multiplicação de cada elemento de x com o elemento da mesma posição em y.
* c) Diferença entre x e y: todos os elementos de x que não existam em y.
* d) Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
* e) União entre x e y: todos os elementos de x, e todos os elementos de y que não estão em x.
*/
// Soma entre x e y: soma de cada elemento de x com o elemento da mesma posicão em y.
void ex32a(int a[], int b[], int n) {
    int i = 0;
    for( i = 0 ; i < n ; i++)
        printf("%2d + %2d = %2d\n",a[i],b[i],a[i]+b[i]);
}
// Produto entre x e y: multiplicação de cada elemento de x com o elemento da mesma posição em y.
void ex32b(int a[], int b[], int n) {
    int i = 0;
    for( i = 0 ; i < n ; i++)
        printf("%2d X %2d = %2d \n",a[i],b[i],a[i]*b[i]);
}
// Diferença entre x e y: todos os elementos de x que não existam em y.
void ex32c(int a[], int b[], int n) {
    int i = 0, j = 0;
    for( i = 1 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            if(a[i] == b[j]) break;
            else if(j == n-1) printf("%d\n",a[i]);
        }
    }
}
// Interseção entre x e y: apenas os elementos que aparecem nos dois vetores.
void ex32d(int a[], int b[], int n) {
    int i = 0, j = 0;
    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            if(a[i] == b[j]) printf("%d \n",a[i]);
}
// União entre x e y: todos os elementos de x, e todos os elementos de y que não estão em x.
void ex32e(int a[], int b[], int n) {
    ex32c(a,b,n);
    ex32c(b,a,n);
}

void ex32() {
    int vetorA[] = {10,9,8,7,6,5,4,3,2,1};
    int vetorB[] = {1,2,4,6,8,10,12,14,16,18};
    int numero_elementos = 10;

    printf("A) Soma:\n");
    ex32a(vetorA,vetorB,numero_elementos);
    puts("");
    printf("B) Produto:\n");
    ex32b(vetorA,vetorB,numero_elementos);
    puts("");
    printf(" Elementos de x que nao existem em y:\n");
    ex32c(vetorA,vetorB,numero_elementos);
    puts("");
    printf("Elementos que aparecem nos dois vetores:\n");
    ex32d(vetorA,vetorB,numero_elementos);
    puts("");
    printf("Elementos que aparecem so existam num dos dois vetores:\n");
    ex32e(vetorA,vetorB,numero_elementos);
    puts("");
}

/** Exercicio 33
 * Faça um programa que leia um vetor de 15 posições e o compacte, ou seja, elimine as
 * posições com valor zero. Para isso, todos os elementos à frente do valor zero, devem ser
 * movidos uma posição para trás no vetor.
 */
int ex33a(int a[], int n) {
    int i = 0, j = 0, fim = n;

    for( i = 0 ; i < fim ; i++) {
        if(a[i] == 0) {
            for( j = i ; j < fim ; j++) {
                a[j] = a[j+1];
            }
            fim--;
            i--;
        }
    }
    return fim;
}

void ex33() {
    int v[15] = {1,0,3,4,0,0,0,0,9,0,11,0,13,0,0};
    int n = 15, i = 0;
    n = ex33a(v,n);
    for( i = 0 ; i < n ; i++) {
        printf("%d \n",v[i]);
    }
}

/** Exercicio 34
 * Faça um programa para ler 10 números DIFERENTES a serem armazenados em um
 * vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos,
 * sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa
 * dever á pedir para ele digitar outro número. Note que cada valor digitado pelo usuário
 * deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram
 * fornecidos. Exibir na tela o vetor final que foi digitado.
 */
void ex34() {
    int v[10] = {0};
    int aux = 0, i = 0, j = 0, n = 10;

    puts("Inserir 10 inteiros nao repetidos:\n");
    printf("Insira o %d valor: ",i+1);
    scanf("%d",&v[0]);

    for( i = 1 ; i < n ; i++) {
        printf("Insira o %d valor: ",i+1);
        scanf("%d",&aux);
        for( j = 0 ; j < i ; j++) {
            if(v[j] == aux) {
                i--;
                puts("Esse valor ja existe");
                break;
            } else if(j == i-1) {
                v[i] = aux;
            }
        }
    }
    puts("Vetor final...");
    for( i = 0 ; i < n ; i++)
        printf("v[%.2d] : %d\n",i+1,v[i]);
}

/** Exercicio 35 - alterei o exercicio original...
 * Faça um programa que leia dois números a e b (positivos menores que 10000) e:
 *  -> Crie um vetor onde cada posição é um algarismo do número. Inverta o numero
 *      inserido e guarde num vetor;
 *  -> Crie um vetor que seja a soma de a e b. Usando o vetor soma inverta o resultado,
 *     ao apresentar os resultado não mostre os zeros a esquerda do primeiro algarismo não nulo.
 * Dica: some as posições correspondentes. Se a soma ultrapassar 10, subtraia 10 do
 * resultado e some 1 à próxima posição.
 */
void ex35print(int v[], int n) {
    int i = 0, flag = 0, value = 0;
    for(i = 0 ; i < n ; i++) {
        value = v[i];
        if(value != 0) flag = 1;
        if(flag == 1) {
            printf("[%d] -> %d\n",i+1,v[i]);
        }
    }
}
void ex35printNum(int v[], int n) {
    int i = 0, flag = 0, value = 0;
    for(i = 0 ; i < n ; i++) {
        value = v[i];
        if(value != 0) flag = 1;
        if(flag == 1) {
            printf("%d",v[i]);
        }
    }
}
void ex35convert(int num, int v[], int n) {
    int i = 0, aux = 0;
    while(1) {
        aux = num % 10;
        v[i++] = aux;
        num /= 10;
        if(num < 10 ) {
            v[i] = num;
            break;
        }
    }
}

void ex35soma(int a[], int b[], int result[],int n) {
    int i = 0, aux = 0, rest = 0;
    for(i  = 0 ; i < n ; i++) {
        aux = rest + a[i] + b[i];
        if(aux > 10) {
            aux -= 10;
            rest = 1;
        }
        result[i] = aux;
    }
}
void ex35invert(int v[], int n) {
    int i = 0, j = n, aux = 0;
    for(i = 0, j = n-1 ; i != j ; i++, j--) {
        aux = v[j];
        v[j] = v[i];
        v[i] = aux;
    }
}


void ex35() {
    int num[2]= {0}, n = 5;
    int a[5] = {0}, b[5] = {0}, result[5] = {0};
    int flag = 0;
    while(flag < 2) {
        printf("Valor %d:",flag+1);
        scanf("%d",&num[flag]);
        if(num[flag]>10000)
            printf("O numero tem de ser menor que 10 000\n");
        else
            flag++;
    }

    ex35convert(num[0],a,n);
    ex35convert(num[1],b,n);
    ex35soma(a,b,result,n);

    //puts("Vetor 1");
    //ex35print(a,n);

    //puts("Vetor 2");
    //ex35print(b,n);

    //puts("Vetor Reslt");
    //ex35print(result,n);

    printf(" %d + %d = ",num[0],num[1]);

    //puts("Vetor Reslt - invert");
    ex35invert(result,n);
    ex35printNum(result,n);
    puts(" ");
}

/** Exercicio 36
 * Leia um vetor com 10 números reais, ordene os elementos deste vetor, e no final escreva
 * os elementos do vetor ordenado.
 */
void ex36recebeValores(float v[], int n) {
    int i = 0;
    puts("Inserir 10 numeros reais:");
    for( i = 0 ; i < n ; i++) {
        printf("v[%d] = _\b",i);
        scanf("%f",&v[i]);
    }
}
void ex36Swap(float *px, float *py) {
    int aux;
    aux = *px;
    *px = *py;
    *py = aux;
}
void ex36SequencialSort(float array[], int n) {
    int i = 0, j = 0;
    for( i = 0 ; i < n-1 ; i++)
        for(j = i+1 ; j < n ; j++)
            if(array[i] > array[j])
                ex36Swap(&array[i], &array[j]);
}

void ex36() {
    float v[10] = {0};
    int n = 10, i = 0;

    ex36recebeValores(v,n);
    ex36SequencialSort(v,n);

    puts("\nVetor ordenado:");
    for( i = 0 ; i < n ; i++) {
        printf("v[%d] = %.2f\n",i,v[i]);
    }
}

/** Exercicio 37
 * Considere um vetor A com 11 elementos onde A1 < A2 < ... < A6 > A7 > A8 > ... > A11,
 * ou seja, está ordenado em ordem crescente até o sexto elemento, e a partir
 * desse elemento está ordenado em ordem decrescente. Dado o vetor da questão anterior,
 * proponha um algoritmo para ordenar os elementos.
 */
void ex37() {
    int v[10] = {1,2,3,4,5,10,9,8,7,6};
    int n = 10, i = 0, j = 0, aux = 0 ;

    for(i = n/2, j = n-1 ; i != j ; i++, j--) {
        aux = v[i];
        v[i] = v[j];
        v[j] =aux;
    }
    for( i = 0 ; i < n ; i++) {
        printf("v[%d] = %d \n",i,v[i]);
    }
}

/** Exercicio 38
 * Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente esses
 * valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
 * final na tela os valores em ordem.
*/
void ex38InsertionSort(int v[], int n) {
    int i = 0, next = 0, temp = 0;
    for( i = 0 ; i < n ; i++) {
        temp = v[i];
        for(next = i ; next > 0 && v[next-1] > temp ; next--) {
            v[next] = v[next-1];
        }
        if(next != i) {
            v[next] = temp;
        }
    }
}

void ex38() {
    int v[10] = {0}, n = 10;
    int i = 0;
    puts("Insira 10 valores inteiros...");
    for( i = 0 ; i < n ; i++ ) {
        printf("v[%d] = _\b",i);
        scanf("%d",&v[i]);
        ex38InsertionSort(v,i+1);
    }
    for( i = 0; i < n ; i++) {
        printf("%d \n",v[i]);
    }
}

/** Exercicio 39
 * Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
 * linhas do chamado Triangulo de Pascal:
 *
 * 1
 * 1 1
 * 1 2 1
 * 1 3 3 1
 * 1 4 6 4 1
 * 1 5 10 10 5 1
 * ...
 */
void ex39Pascal(int n) {
    int filas = n+1, i = 0, j = 0;
    int a[50] = {1}, x[50] = {1};

    for(i = 1 ; i <= filas ; i++) {
        for( j = 0 ; j < i ; j++) {
            if(j == 0 || j == (i-1)) {
                x[j] = 1;
            } else {
                x[j] = a[j] + a[j-1];
            }
            printf(" %4d ",x[j]);
        }
        for( j = 0 ; j < i ; j++) {
            a[j] = x[j];
        }
        puts("");
    }
}
void ex39() {
    int n = 0;
    puts("\tTriangulo de Pascal");
    printf(" Insira um numero: _\b");
    scanf(" %d",&n);
    ex39Pascal(n);
}

/** 25 exercicio de Matriz
*          | |
*          | |
*         \   /
*          \ /
*           '
*/

/** Exercicio 01
* Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/
void exM01() {
    int m[4][4] = {
        {1,3,5},
        {7,9,11},
        {13,15,17}
    };
    int n = 4, i = 0, j = 0, contador = 0;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(m[i][j] > 10) contador++;
        }
    }
    printf("Existem %d numero maiores que 10",contador);
}

/** Exercicio 02
* Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
* elementos. Escreva ao final a matriz obtida.
*/
void exM02() {
    int m[5][5], n = 5;
    int i = 0, j = 0;

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            m[i][j] = 0;

    for(i = 0 ; i < n ; i++) m[i][i] = 1;

    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++)
            printf(" %d ",m[i][j]);
        puts("");
    }
}

/** Exercicio 03
* Faça um programa que preenche uma matriz com o produto do valor da linha e da coluna
* de cada elemento. Em seguida, imprima na tela a matriz.
*/
void exM03() {
    int m[5][5], n = 5;
    int i = 0, j = 0 ;

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            m[i][j] = 0;

    for(i = 0 ; i < n ; i++)
        for(j = 0 ; j < n ; j++)
            m[i][j] = i*j;

    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            printf("%4d",m[i][j]);
        }
        puts("");
    }
}

/** Exercicio 04
* Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac¸ não (linha e a coluna) do
* maior valor.
*/
void exM04() {
    int m[4][4], n = 5;
    int max[3] = {0}, i = 0, j = 0;
    max[0] = INT_MIN;

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            m[i][j] = 0;

    /*Ler valores e encontra o maior*/
    printf("Preencha a matriz %d x %d \n",n,n);
    for(i = 0; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            printf("m[%d][%d] = _\b",i,j);
            scanf("%d",&m[i][j]);
            if(max[0] < m[i][j]) {
                max[0] = m[i][j];
                max[1] = i;
                max[2] = j;
            }
        }
        puts("");
    }
    /*Imprime a matriz e informa a posicao do maior valor*/
    puts("\n Matriz:");
    for(i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            printf(" %4d ",m[i][j]);
        }
        puts("");
    }
    printf("O maior valor encontra-se na posicao [linha] [coluna] = [%d] [%d]\n",max[1],max[2]);
}


/** Exercicio 05
* Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca
* desse valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem
* de “não encontrado”.
*/
void exM05() {
    int m[5][5], n = 5;
    int i = 0, j = 0, num = 0;

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            m[i][j] = 0;

    /*Ler valores e encontra o maior*/
    printf("Preencha a matriz %d x %d \n",n,n);
    for(i = 0; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {
            printf("m[%d][%d] = _\b",i,j);
            scanf("%d",&m[i][j]);
        }
        puts("");
    }

    printf("Valor a pesquisar = _\b");
    scanf("%d",&num);

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            if( m[i][j] == num) {
                printf("Posicao [linha][coluna] = [%d][%d]\n",i,j);
                break;
            }
        }
        if( i == n) printf(" Valor nao encontrado...\n");
    }
}

/** Exercicio 06
* Leia duas matrizes 3 x 3 e escreva uma terceira com os maiores valores de cada posição
* das matrizes lidas.
*/
void exM06() {
    int n = 3;
    int mA[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mB[][3] = {{10,0,35},{41,1,1},{5,15,9}};
    int mC[3][3];
    int i = 0, j = 0;

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            mC[i][j] = 0;

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            mC[i][j] = ( mA[i][j] > mB[i][j])? mA[i][j] : mB[i][j];
        }
    }

    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %3d ",mC[i][j]);
        }
        puts("");
    }
}

/** Exercicio 07
* Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são da forma:
* A[i][j] = 2*i + 7*j - 2 se i < j;
* A[i][j] = 3*i^2 - 1 se i = j ;
* A[i][j] = 4*i^3 - 5*j^2 + 1 se i > j.
*/
void exM07() {
    int a[10][10], n = 10;
    int i = 0, j = 0;

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            a[i][j] = 0;

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            if(i < j) {
                a[i][j] = 2 * i + 7 * j;
            } else if( i == j ) {
                a[i][j] = 3 * i * i - 1;
            } else {
                a[i][j] = 4 * i * i * i - 5 * j * j + 1;
            }
        }
    }

    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %6d ",a[i][j]);
        }
        puts("");
    }
}

/** Exercicio 08
* Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão acima da
* diagonal principal.
*/
void exM08() {
    int m[][3] = {{1,2,3},{4,5,6},{7,8,9}}, n = 3, soma = 0;
    int i = 0, j = 0;

    for( i = 0 ; i < n ; i++) {
        for( j = i+1 ; j < n ; j++) {
            soma += m[i][j];
        }
    }

    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %6d ",m[i][j]);
        }
        puts("");
    }
    printf("Resultado = %d \n",soma);
}

/** Exercicio 09
* Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão abaixo da
* diagonal principal.
*/
void exM09() {
    int m[][3] = {{1,2,3},{4,5,6},{7,8,9}}, n = 3, soma = 0;
    int i = 0, j = 0;

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < i ; j++) {
            soma += m[i][j];
        }
    }

    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %6d ",m[i][j]);
        }
        puts("");
    }
    printf("Resultado = %d \n",soma);
}

/** Exercicio 10
* Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal
* principal.
*/
void exM10() {
    int m[][3] = {{1,2,3},{4,5,6},{7,8,9}}, n = 3, soma = 0;
    int i = 0, j = 0;

    for( i = 0 ; i < n ; i++) {
        soma += m[i][i];
    }

    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %6d ",m[i][j]);
        }
        puts("");
    }
    printf("Resultado = %d \n",soma);
}


/** Exercicio 11
* Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal
* secundária.
*/
void exM11() {
    int m[][3] = {{1,2,3},{4,5,6},{7,8,9}}, n = 3, soma = 0;
    int i = 0, j = 0;

    for( i = n ; i >= 0 ; i--) {
        soma += m[i][i];
    }

    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %6d ",m[i][j]);
        }
        puts("");
    }
    printf("Resultado = %d \n",soma);
}

/** Exercicio 12
* Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.
*/
void exM12() {
    int m[][3] = {{1,2,3},{4,5,6},{7,8,9}}, n = 3;
    int i = 0, j = 0, aux = 0;

    for(i = 0 ; i < n ; i++) {
        for( j = i + 1 ; j < n ; j++) {
            aux = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = aux;
        }
    }

    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %6d ",m[i][j]);
        }
        puts("");
    }

}

/** Exercicio 13
* Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme
* a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos
* acima da diagonal principal. Imprima a matriz original e a matriz transformada.
*/
void exM13() {
    int m[4][4], n = 4;
    int i = 0, j = 0;

    srand(time(NULL));

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            m[i][j] = rand() % 20 + 1 ;

    for( i = 0 ; i < n ; i++)
        for( j = i+1 ; j < n ; j++)
            m[i][j] = 0 ;


    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %6d ",m[i][j]);
        }
        puts("");
    }
}

/** Exercicio 14
* Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de
* bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados
* de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na
* tela a cartela gerada.
*/
int exM14_insUnic(int m[][5], int n, int num) {
    int i = 0, j = 0;

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            if( m[i][j] == num) return 0;
    return 1;
}

void exM14() {
    int m[5][5], n = 5;
    int i = 0, j = 0, aux;

    srand(time(NULL));

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            aux = rand() % 100;
            printf("%d \n",aux);
            if(exM14_insUnic(m,n,aux)) m[i][j] = aux;
            else j--;
        }
    }
    puts("\n Matriz final:");
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" %6d ",m[i][j]);
        }
        puts("");
    }

}

/* Exercicio 15
* Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha,
* referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de
* respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas
* de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a
* pontuação correspondente a cada aluno.
*/
void exM15() {
    char respostas_prof[10] = {'\0'}, respostas_alunos[5][10];
    int nAlunos = 5, nPerguntas = 10, notaAlunos[5];
    int i = 0, j = 0;

    for( i = 0 ; i < nAlunos ; i++ )
        for( j = 0 ; j < nPerguntas ; j++)
            respostas_alunos[i][j] = '\0';

    puts("Inserira a respostas corretas");
    for(i = 0 ; i < nPerguntas ; i++) {
        printf("Resposta %d =",i + 1);
        char aux = '\0';
        int num = scanf("%[a,b,c,d,e]",&aux);
        limpa();
        if( num == 1) respostas_prof[i] = aux;
        else i--;
    }
    puts("");

    puts("Inserira a respostas dos alunos");
    for(i = 0 ; i < nAlunos ; i++) {
        printf("Aluno n %d\n",i+1);
        for( j = 0 ; j < nPerguntas ; j ++) {
            printf("Resposta %d =",j + 1);
            char aux = '\0';
            int num = scanf("%[a,b,c,d,e]",&aux);
            limpa();
            if( num == 1) respostas_alunos[i][j] = aux;
            else j--;
        }
    }

    //respostas certas as perguntas
    for( i = 0 ; i < nAlunos ; i ++) {
        int soma = 0;
        for( j = 0 ; j < nPerguntas ; j++) {
            if(respostas_alunos[i][j] == respostas_prof[j]) soma++;
        }
        notaAlunos[i] = soma;
    }

    //vetor com a respostas certas do teste
    puts("");
    puts("Respostas correctas");
    for( i = 0 ; i < nPerguntas ; i++)
        printf("[%d] -> %c ",i+1,respostas_prof[i]);
    puts("");

    //matriz com as respostas do alunoa
    puts("Respostas alunos");
    for( i = 0 ; i < nAlunos ; i++) {
        for( j = 0 ; j < nPerguntas ; j++) {
            printf("[%d] -> %c ",i+1,respostas_alunos[i][j]);
        }
        puts("");
    }

    //imprime as notas do alunos
    puts("Classificacao final");
    for( i = 0 ; i < nAlunos ; i ++) {
        ;
        printf("O aluno [%d] -> %d \n",i+1,notaAlunos[i]);
    }
    puts("");
}


/** Exercicio 16
* Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b,
* c, d ou e), em uma turma com 3 alunos. Cada questão vale 1 ponto. Leia o gabarito, e
* para cada aluno leia sua matricula (número inteiro) e suas respostas. Calcule e escreva:
* Para cada aluno, escreva sua matrícula, suas respostas, e sua nota. O percentual de
* aprovação, assumindo média 7.0.
*/

int validaInsert(char v[], int n, int key) {

    for( n = n ; n > 0 ; n--) {
        if(v[n-1] == key) return 1;
    }
    return 0;
}

void exM16() {


    int n_al = 3, numero_perguntas = 10;


    char matriz_correcao[10] = {'\0'};
    char op_respostas[5] = {'a','b','c','d','e'}, resposta = '\0';
    int n_op_resp = 5;

    char respostas_alunos[3][10];
    int dados_alunos[3][2], numero = 0 ; //numero de aluno e id da tabela das respostas

    int cotacao = 1, media_minima = 7, media_aluno = 0;

    int i = 0, j = 0;


    //limpar matriz respostas
    for( i = 0 ; i < n_al; i++)
        for( j = 0 ; j <= numero_perguntas; j++)
            respostas_alunos[i][j] = 0;

    //limpar matriz dados aluno
    for( i = 0 ; i < n_al; i++)
        for( i = 0 ; i < 2; i++)
            dados_alunos[i][j] = 0;




    //Receber a Matriz Correcao
    puts("Inserir as respostas corretas:");
    for( i = 0 ; i < numero_perguntas ; i++) {
        printf("Pergunta %d = _\b",i+1);
        scanf(" %c",&resposta);
        limpa();
        if(!validaInsert(op_respostas, n_op_resp, resposta)) {
            puts("Erro no valor de entrada insira o valor correctamente:");
            i--;
        } else {
            matriz_correcao[i] = resposta;
        }
    }
    puts("");
    for( i = 0 ; i < numero_perguntas ; i++)
        printf(" [%d] -> %c ",i+1, matriz_correcao[i]);
    puts("\n");

    // Receber os dados de cada aluno
    for( i = 0 ; i < n_al ; i++) {
        printf("Inserir o numero identificacao do aluno = _\b");
        if(!scanf("%d",&numero)) {
            limpa();
            puts("Erro no valor de entrada insira o valor correctamente:");
            i--;
        } else {
            limpa();
            dados_alunos[i][0] = numero;
            dados_alunos[i][1] = i;
            for(j = 0 ; j < numero_perguntas ; j++) {
                printf("Pergunta %d = _\b",j+1);
                scanf(" %c",&resposta);
                limpa();
                if(!validaInsert(op_respostas, n_op_resp, resposta)) {
                    puts("Erro no valor de entrada insira o valor correctamente:");
                    j--;
                } else {
                    respostas_alunos[i][j] = resposta;
                }
            }
        }

    }
    puts("");
    for( i = 0 ; i < n_al ; i++) {
        printf(" Respostas do aluno numero -> %d \n",dados_alunos[i][0]);
        for( j = 0 ; j < numero_perguntas ; j++) {
            printf(" [%d] -> %c ",j+1, respostas_alunos[dados_alunos[i][1]][j]);
        }
        puts("");
    }
    puts("");

// Corrigir o teste, atribuir nota e verificar se o aluno esta aprovado

    for( i = 0 ; i < n_al ; i++) {
        printf(" Resultado final do aluno numero -> %d \n",dados_alunos[i][0]);
        media_aluno = 0;
        for( j = 0 ; j < numero_perguntas ; j++) {
            if(respostas_alunos[dados_alunos[i][1]][j] == matriz_correcao[j]) {
                media_aluno += cotacao;
            }
        }
        media_aluno >= media_minima ? printf(" Aluno aprovado com %d de nota final\n",media_aluno) : printf(" Aluno reprovado com %d de nota final\n",media_aluno);
        puts("");
    }
//END EX M 16
}


/** Exercicio 17
* Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva
* o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja pior nota foi
* na prova 2, e o número de alunos cuja pior nota foi na prova 3. Em caso de empate
* das piores notas de um aluno, o critério de desempate é arbitrário, mas o aluno deve ser
* contabilizado apenas uma vez.
*/
void exM17() {
    float notas[10][3], nota_min[3];
    int i =0, j = 0, numero_notas = 3, numero_alunos = 10;

    for(i = 0 ; i < numero_alunos ; i++)
        for( j = 0 ; j < numero_notas ; j++) {
            nota_min[j] = INT_MAX;
            notas[i][j] = 0.0;
        }

    puts("Inserir as notas do alunos:");
    for(i = 0 ; i < numero_alunos ; i++) {
        printf("Notas do aluno %d:\n",i+1);
        for( j = 0 ; j < numero_notas ; j++) {
            printf("Nota do teste %d : _\b",j+1);
            scanf("%f",&notas[i][j]);

            if(nota_min[j] > notas[i][j]) {
                nota_min[j] = notas[i][j];
            }
        }
    }


//    puts("Notas dos teste:");
//    for(i = 0 ; i < numero_notas ; i++)
//    {
//        printf("Teste %d:\n",i+1);
//        for( j = 0 ; j < numero_alunos ; j++)
//        {
//            printf("Aluno %d = %.02f\n",j+1,notas[j][i]);
//        }
//    }
//
//    puts("Piores Notas");
//    for(i = 0 ; i < numero_notas ; i++)
//    {
//        printf("%0.2f\n",nota_min[i]);
//    }


    puts("Os alunos com as piores notas por teste:");
    for(i = 0 ; i < numero_notas ; i++) {
        printf("\nTeste %d\n Aluno:",i+1);
        for( j = 0 ; j < numero_alunos ; j++) {
            if(notas[j][i] == nota_min[i]) printf(" %d,",j+1);
        }
    }
    puts("");
}


/** Exercicio 18
*   Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números
*   inteiros. Em seguida, gere um array unidimensional pela soma dos números de cada
*   coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
*   5 -8 10
*   1 2 15
*   25 10 7
*   Vai gerar um vetor, onde cada posição é a soma das colunas da matriz. A primeira
*   posição será 5 + 1 + 25, e assim por diante:
*   31 4 3
*/
void exM18() {
    int m3x3[3][3], n = 3, m1x3[3] = {0};
    int i = 0, j = 0;

    for(i = 0 ; i < n ; i++)
        for( j = 0 ; i < j ; j++)
            m3x3[i][j] = 0;

    puts("\nInserir os valore inteiros que compoem a MATRIZ 3x3");
    for(i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" m3x3[%d][%d] = _\b",i,j);
            scanf("%d",&m3x3[i][j]);
        }
    }

    puts("\nMATRIZ 3x3");
    for(i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" [ %d ]",m3x3[i][j]);
        }
        puts("");
    }


    //calculo
    for(i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            m1x3[i] += m3x3[j][i];
        }
    }

    puts("\nMATRIZ 1x3 resultante");
    for(i = 0 ; i < n ; i++) {
        printf(" [ %d ]",m1x3[i]);
    }
    puts("");
}

/** Exercicio 19
*   Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
*   informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
*   -> Primeira coluna: número de matrícula (use um inteiro)
*   -> Segunda coluna: média das provas
*   -> Terceira coluna: média dos trabalhos
*   -> Quarta coluna: nota final
*
*   Elabore um programa que:
*   (a) Leia as três primeiras informações de cada aluno
*   (b) Calcule a nota final como sendo a soma da média das provas e da média dos
*   trabalhos
*   (c) Imprima a matrícula do aluno que obteve a maior nota final (assuma que só existe
*   uma maior nota)
*   (d) Imprima a média aritmética das notas finais
*/
void exM19() {
    int m5x4[5][4], l = 5, c = 4;
    int i = 0, j = 0;
    int media = 0,
        id = 0,//id do aluno com a nota mais alta
        total = 0;

    for( i = 0 ; i < l ; i++)
        for( j = 0 ; j < c ; j++)
            m5x4[i][j] = 0;

    puts("\nInserir os dados dos alunos");
    for(i = 0 ; i < l ; i++) {
        printf("Numero de aluno ja inseridos na base dados: %d\n",i);
        printf(" Numero de aluno:_\b");
        scanf(" %d",&m5x4[i][0]);
        printf(" Media das provas:_\b");
        scanf(" %d",&m5x4[i][1]); //media provas
        printf(" Media dos trabalhos:_\b");
        scanf(" %d",&m5x4[i][2]);//media trabalhos
        media = m5x4[i][1] + m5x4[i][2];
        m5x4[i][3] = media;
        printf(" Media Final do aluno = %d\n",media);
        puts("");
    }

    for(i = 0 ; i < l ; i++) {
        total += m5x4[i][3];
        if(m5x4[id][3] < m5x4[i][3]) id = i;
    }
    printf(" Melhor aluno: \n Numero do aluno %d com %d valores\n",m5x4[id][0],m5x4[id][3]);
    printf(" \nA media de todas as notas: %0.2f valores\n\n",(float)total/l);
}


/** Exercico 20
*   Faça programa que leia uma matriz 3 x 6 com valores reais.
*   (a) Imprima a soma de todos os elementos das colunas ímpares.
*   (b) Imprima a média aritmética dos elementos da segunda e quarta colunas.
*   (c) Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.
*   (d) Imprima a matriz modificada.
*/
void exM20() {
    float m3x6[3][6];
    int l = 3, c = 6;
    int i = 0, j = 0;
    float soma = 0, cont = 0;

    for( i  = 0 ; i < l ; i++) {
        for(j = 0 ; j < c ; j++ ) {
            m3x6[i][j] = ((i + 1) * (j + 1)) / sqrt(i+j+1);
        }
    }

    printf(" Matriz original:\n");
    for( i  = 0 ; i < l ; i++) {
        for(j = 0 ; j < c ; j++ ) {
            printf(" [%0.2f]",m3x6[i][j]);
        }
        puts("");
    }

    soma = 0;
    puts("\n Imprima a soma de todos os elementos das colunas impares.");
    for( i  = 0 ; i < l ; i++) {
        for(j = 0 ; j < c ; j+=2 ) {
            soma += m3x6[i][j];
        }
    }
    printf(" Resultado = %0.2f\n",soma);


    soma = 0;
    cont = 0;
    puts("\n Imprima a media aritmetica dos elementos da segunda e quarta colunas.");
    for( i  = 0 ; i < l ; i++) {
        for(j = 1 ; j < c-1 ; j+=2 ) {
            soma += m3x6[i][j];
            cont++;
        }
    }
    printf(" Media = %0.2f\n",soma/cont);

    puts("\n Substitua os valores da sexta coluna pela soma dos valores das colunas 1 e 2.");
    for( i  = 0 ; i < l ; i++) {
        m3x6[i][5] = m3x6[i][0] + m3x6[i][1];
    }

    printf(" Matriz final:\n");
    for( i  = 0 ; i < l ; i++) {
        for(j = 0 ; j < c ; j++ ) {
            printf(" [%0.2f]",m3x6[i][j]);
        }
        puts("");
    }
}

/** Exercicio 21
*   Faça um programa que leia duas matrizes 2 x 2 com valores reais. Ofereça ao usuário
*   um menu de opções:
*   (a) somar as duas matrizes
*   (b) subtrair a primeira matriz da segunda
*   (c) adicionar uma constante às duas matrizes
*   (d) imprimir as matrizes
*   Nas duas primeiras opções uma terceira matriz 2 x 2 deve ser criada. Na terceira opção
*   o valor da constante deve ser lido e o resultado da adição da constante deve ser armazenado
*   na própria matriz.
*/
void exM21() {
    float m2x2a[2][2], m2x2b[2][2], m2x2soma[2][2], m2x2sub[2][2];
    int i = 0, j = 0, n = 2, constante = 0;

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            m2x2a[i][j] = 0.0;
            m2x2b[i][j] = 0.0;
            m2x2soma[i][j] = 0.0;
            m2x2sub[i][j] = 0.0;
        }
    }

    auto void lerDados(float m[][2], int n) {
        int i = 0, j = 0;
        for( i = 0 ; i < n ; i++) {
            for( j = 0 ; j < n ; j++) {
                printf("[%d][%d] = ",i,j);
                scanf(" %f",&m[i][j]);
            }
        }
    }

    auto void printMatriz(float m[][2], int n) {
        int i = 0, j = 0;
        for( i = 0 ; i < n ; i++) {
            for( j = 0 ; j < n ; j++) {
                printf(" [%0.2f]",m[i][j]);
            }
            puts("");
        }
    }

    printf("Inserir os dados da Matriz A:\n");
    lerDados(m2x2a, n);
    printf("Inserir os dados da Matriz B:\n");
    lerDados(m2x2b, n);
    puts("\n Matriz A original:");
    printMatriz(m2x2a, n);
    puts("\n Matriz B original:");
    printMatriz(m2x2b, n);

    puts("\n");
    // 1 - somar as duas matrizes
    // 2 - subtrair a primeira matriz da segunda
    // 3 - adicionar uma constante às duas matrizes
    printf("Inserir um valor constante a ser adicionado nas duas matrizes: _\b");
    scanf("%d",&constante);
    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            m2x2soma[i][j] = m2x2a[i][j] + m2x2b[i][j];
            m2x2sub[i][j] = m2x2a[i][j] - m2x2b[i][j];
            m2x2a[i][j] += constante;
            m2x2b[i][j] += constante;
        }
    }

    puts("\n Matriz A final:");
    printMatriz(m2x2a, n);
    puts("\n Matriz B final:");
    printMatriz(m2x2b, n);
    puts("\n Matriz Soma das matrizes A e B originais: ");
    printMatriz(m2x2soma, n);
    puts("\n MAtriz Subtracao das matrizes A e B originais:");
    printMatriz(m2x2sub, n);
}


/** Exercicio 22
*   Faça um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A * B
*/
#define N22 3
void exM22() {

    auto void lerDados(int m[][N22], int n) {
        int i = 0, j = 0;
        for( i = 0 ; i < n ; i++) {
            for( j = 0 ; j < n ; j++) {
                printf("[%d][%d] = ",i,j);
                scanf(" %d",&m[i][j]);
            }
        }
    }

    auto void printMatriz(int m[][N22], int n) {
        int i = 0, j = 0;
        for( i = 0 ; i < n ; i++) {
            for( j = 0 ; j < n ; j++) {
                printf(" [%d] ",m[i][j]);
            }
            puts("");
        }
    }

    int m3x3a[N22][N22], m3x3b[N22][N22], m3x3c[N22][N22];
    int i = 0, j = 0, k = 0, n = N22;

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            m3x3a[i][j] = 0;
            m3x3b[i][j] = 0;
            m3x3c[i][j] = 0;
        }
    }


    printf("Inserir os dados da Matriz A:\n");
    lerDados(m3x3a, n);
    printf("Inserir os dados da Matriz B:\n");
    lerDados(m3x3b, n);
    puts("\n Matriz A:");
    printMatriz(m3x3a, n);
    puts("\n Matriz B:");
    printMatriz(m3x3b, n);

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            for( k = 0 ; k < n ; k++) {
                m3x3c[i][j] = m3x3c[i][j] + (m3x3a[i][k] * m3x3b[k][j]);
            }
        }
    }

    puts("\n Matriz A x B:");
    printMatriz(m3x3c, n);

}

/** Exercicio 23
*   Faça um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A^2.
*/
#define N23 3
void exM23() {
    int m3x3a[N23][N23], m3x3b[N23][N23];
    int i = 0, j = 0, k = 0, n = N23;

    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            m3x3a[i][j] = m3x3b[i][j] = 0;

    printf("Inserir os valores:\n");
    for( i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++) {
            printf("[%d][%d] = ",i,j);
            scanf(" %d",&m3x3a[i][j]);
        }

    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            for( k = 0 ; k < n ; k++) {
                m3x3b[i][j] += m3x3a[i][k] * m3x3a[k][j];
            }
        }
    }



    for( i = 0 ; i < n ; i++) {
        for( j = 0 ; j < n ; j++) {
            printf(" [ %3d ] ",m3x3a[i][j]);
        }
        (i == n/2)?printf(" X "):printf("   ");
        for( j = 0 ; j < n ; j++) {
            printf(" [ %3d ] ",m3x3a[i][j]);
        }
        (i == n/2)?printf(" = "):printf("   ");
        for( j = 0 ; j < n ; j++) {
            printf(" [ %3d ] ",m3x3b[i][j]);
        }

        puts("");
    }

}

/** Exercicio 24
*   Na matriz de 20x20 abaixo, quatro números ao longo de uma linha diagonal foram marcadas
*   em negrito. O produto desses números é 26 * 63* 78 * 14 = 1788696.
*
*   08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08
*   49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00
*   81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65
*   52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91
*   22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80
*   24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50
*   32 98 81 28 64 23 67 10 *26 38 40 67 59 54 70 66 18 38 64 70 <-
*   67 26 20 68 02 62 12 20 95 *63 94 39 63 08 40 91 66 49 94 21 <-
*   24 55 58 05 66 73 99 26 97 17 *78 78 96 83 14 88 34 89 63 72 <-
*   21 36 23 09 75 00 76 44 20 45 35 *14 00 61 33 97 34 31 33 95 <-
*   78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92
*   16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57
*   86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58
*   19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40
*   04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66
*   88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69
*   04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36
*   20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16
*   20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54
*   01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48
*
*   Qual é o maior produto de quatro números adjacentes em qualquer direção (cima, baixo,
*   esquerda, direita, ou na diagonal) na matriz de 20x20?
*/
#define N24 20
void exM24() {

    auto void printM24(int m[][N24], int n) {
        int i = 0, j = 0;
        for(i = 0 ; i < n ; i++) {
            for(j = 0 ; j < n ; j++) {
                printf(" [%.2d] ",m[i][j]);
            }
            puts(" ");
        }
    }
    auto void cleanM24(int m[][N24], int n) {
        int i = 0, j = 0;
        for(i = 0 ; i < n ; i++)
            for(j = 0 ; j < n ; j++)
                m[i][j] = 0;
    }

    auto void regista4x4(int m[][N24], int n, int ini_id_xy[], int a[], int b[], int c[], int d[], int vertical_traz) {
        int val1 = a[0], val2 = b[0], val3 = c[0], val4 = d[0];
        int x1 = a[1], x2 = b[1], x3 = c[1], x4 = d[1];
        int y1 = a[2], y2 = b[2], y3 = c[2], y4 = d[2];
        ini_id_xy[0] = x1;
        ini_id_xy[1] = y1;
        cleanM24(m, n);

       if(vertical_traz){
        m[0][3] = val1;
        m[1][2] = val2;
        m[2][1] = val3;
        m[3][0] = val4;
       }else{
        m[x1 - x1 ][y1 - y1] = val1;
        m[x2 - x1 ][y2 - y1] = val2;
        m[x3 - x1 ][y3 - y1] = val3;
        m[x4 - x1 ][y4 - y1] = val4;
       }
    }

    int m20x20[20][20] = {
        {8,  02, 22, 97, 38, 15, 00, 40, 00, 75, 04, 05, 07, 78, 52, 12, 50, 77, 91, 8},
        {49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48, 04, 56, 62, 00},
        {81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30, 03, 49, 13, 36, 65},
        {52, 70, 95, 23, 04, 60, 11, 42, 69, 24, 68, 56, 01, 32, 56, 71, 37, 02, 36, 91},
        {22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
        {24, 47, 32, 60, 99, 03, 45, 02, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
        {32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
        {67, 26, 20, 68, 02, 62, 12, 20, 95, 63, 94, 39, 63,  8, 40, 91, 66, 49, 94, 21},
        {24, 55, 58, 05, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
        {21, 36, 23,  9, 75, 00, 76, 44, 20, 45, 35, 14, 00, 61, 33, 97, 34, 31, 33, 95},
        {78, 17, 53, 28, 22, 75, 31, 67, 15, 94, 03, 80, 04, 62, 16, 14,  9, 53, 56, 92},
        {16, 39, 05, 42, 96, 35, 31, 47, 55, 58, 88, 24, 00, 17, 54, 24, 36, 29, 85, 57},
        {86, 56, 00, 48, 35, 71, 89, 07, 05, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
        {19, 80, 81, 68, 05, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77, 04, 89, 55, 40},
        {04, 52, 0, 83, 97, 35, 99, 16, 07, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
        {88, 36, 68, 87, 57, 62, 20, 72, 03, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
        {04, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18,  8, 46, 29, 32, 40, 62, 76, 36},
        {20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74, 04, 36, 16},
        {20, 73, 35, 29, 78, 31, 90, 01, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57, 05, 54},
        {01, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52, 01, 89, 19, 67, 48}
    }; //obrigado notpad++

    int mMax[N24][N24], ini_id_xy[2]= {0,0};
    int a[3] = {0,0,0}, b[3] = {0,0,0}, c[3] = {0,0,0}, d[3] = {0,0,0};
    int produto = 0, produto_max = 0;
    int n = N24;
    int i = 0, j = 0;

    cleanM24(mMax, N24);

    for( i = 0 ; i < n ; i++) {
        for(j = 0 ; j < n ; j++) {

            /*
            horizontal ->
            */
            if(j < n-3) produto = m20x20[i][j] * m20x20[i][j+1] * m20x20[i][j+2] * m20x20[i][j+3];
            if(produto_max < produto) {
                produto_max = produto;
                a[1] = i;
                a[2] = j;

                b[1] = i;
                b[2] = j+1;


                c[1] = i;
                c[2] = j+2;


                d[1] = i;
                d[2] = j+3;

                a[0] = m20x20[a[1]][a[2]];
                b[0] = m20x20[b[1]][b[2]];
                c[0] = m20x20[c[1]][c[2]];
                d[0] = m20x20[d[1]][d[2]];
                regista4x4(mMax, 4, ini_id_xy, a, b, c, d , 0);
            }

            /*
                Vertical  |
                         \ /
                          '
            */
            if(i < n-3) produto = m20x20[i][j] * m20x20[i+1][j] * m20x20[i+2][j] * m20x20[i+3][j];
            if(produto_max < produto) {
                produto_max = produto;
                                a[1] = i;
                a[2] = j;

                b[1] = i + 1;
                b[2] = j;

                c[1] = i + 2 ;
                c[2] = j;

                d[1] = i + 3;
                d[2] = j;

                a[0] = m20x20[a[1]][a[2]];
                b[0] = m20x20[b[1]][b[2]];
                c[0] = m20x20[c[1]][c[2]];
                d[0] = m20x20[d[1]][d[2]];
                regista4x4(mMax, 4, ini_id_xy, a, b, c, d , 0);
            }

            /*
                Diagonal traz    /
                               |/.
                               '
            */
            if(i < n - 3  && j >= 3 ) produto = m20x20[i][j] * m20x20[i+1][j-1] * m20x20[i+2][j-2] * m20x20[i+3][j-3];
            if(produto_max < produto) {
                produto_max = produto;
                 a[1] = i;
                a[2] = j;

                b[1] = i + 1;
                b[2] = j - 1;

                c[1] = i + 2;
                c[2] = j - 2;

                d[1] = i + 3;
                d[2] = j - 3;

                a[0] = m20x20[a[1]][a[2]];
                b[0] = m20x20[b[1]][b[2]];
                c[0] = m20x20[c[1]][c[2]];
                d[0] = m20x20[d[1]][d[2]];
                regista4x4(mMax, 4, ini_id_xy, a, b, c, d , 1);
            }

            /*
                Diagonal frente  \
                                 _\|
                                   '
            */
            if(i < n - 3  && j < n - 3 ) produto = m20x20[i][j] * m20x20[i+1][j+1] * m20x20[i+2][j+2] * m20x20[i+3][j+3];
            if(produto_max < produto) {
                produto_max = produto;
                 a[1] = i;
                a[2] = j;

                b[1] = i + 1;
                b[2] = j + 1;

                c[1] = i + 2;
                c[2] = j + 2;

                d[1] = i + 3;
                d[2] = j + 3;

                a[0] = m20x20[a[1]][a[2]];
                b[0] = m20x20[b[1]][b[2]];
                c[0] = m20x20[c[1]][c[2]];
                d[0] = m20x20[d[1]][d[2]];
                regista4x4(mMax, 4, ini_id_xy, a, b, c, d , 0);
            }
        }
    }

    puts("");
    printM24(m20x20,n);
    puts(" ");
    printf("O primeiro valor da sequencia que originou o produto mais elevado e: x0 = %d :: y0 = %d da matriz original\n",ini_id_xy[0]+1,ini_id_xy[1]+1);
    puts("\n Matriz 4x4 com os valores que que produzem o produto mais elevado e a sua orientacao na matriz principal:");
    printM24(mMax,4);
    printf("\n Resultado = %d", produto_max);
    puts(" ");

}


/** Exercicio 25
*   Faça um programa para determinar a próxima jogada em um Jogo da Velha. Assumir que
*   o tabuleiro é representado por uma matriz de 3 x 3, onde cada posição representa uma
*   das casas do tabuleiro. A matriz pode conter os seguintes valores -1, 0, 1 representando
*   respectivamente uma casa contendo uma peça minha (-1), uma casa vazia do tabuleiro
*   (0), e uma casa contendo uma peça do meu oponente (1).
*   Exemplo:
*   -1  1  1
*   -1 -1  0
*    0  1  0
*/
//Não fiz pois vou fazer o jogo completo  a parte

int main() {
    /** 25 exercicio de Matriz
    *          | |
    *          | |
    *         \   /
    *          \ /
    *           '
    */
    exM24();
    //exM23();
    //exM22();
    //exM21();
    //exM20();
    //exM19();
    //exM18();
    //exM17();
    //exM16();
    //exM15();
    //exM14();
    //exM13();
    //exM12();
    //exM11();
    //exM10();
    //exM09();
    //exM08();
    //exM07();
    //exM06();
    //exM05();
    //exM04();
    //exM03();
    //exM02();
    //exM01();


    /** 39 exercicio de vetores
    *          | |
    *          | |
    *         \   /
    *          \ /
    *           '
    */
    //ex39();
    //ex38();
    //ex37();
    //ex36();
    //ex35();
    //ex34();
    //ex33();
    //ex32();
    //ex31();
    //ex30();
    //ex29();
    //ex28();
    //ex28b();
    //ex27();
    //ex26();
    //ex25();
    //ex24();
    //ex23();
    //ex22();
    //ex21();
    //ex20();
    //ex19();
    //ex18();
    //ex17();
    //ex16();
    //ex15();
    //ex14();
    //ex13();
    //ex12();
    //ex11();
    //ex10();
    //ex09();
    //ex08();
    //ex07();
    //ex06();
    //ex05();
    //ex04();
    //ex03();
    //ex02();
    //ex01();
    return 0;
}

