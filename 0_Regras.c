//Bibliotecas

locale.h // troca de idioma
math.h // habilita uso de funções matematicas
stdbool.h // habilita o tipo de dado booleano
stdio.h // entrada e saida de dados
stdlib.h // geração de números aleatórios | Alocação dinâmica de Memória
string.h // fornece uma série de funções para tratar cadeias de caracteres
time.h // permite acessar o relógio do computador

//------------------------------------////------------------------------------////-------------------------//
//Variáveis = dados

bool 0 = false // utiliza-se %d
bool 1 = true // utiliza-se %d
int n = 10; //adiciona um valor inteiro (sem casas decimais) ---- utiliza-se %d
float n2 = 9.2; //adiciona um valor real ( com casas decimais) ---- utiliza-se %f
char letra = 'A'//adiciona apenas UM caracter, utilizar aspas simples ---- utiliza-se %c
char frase[10] = "Cachorro"; //adiciona varios caracteres, utiliar aspas dupla ---- utiliza-se %s
double n3 = 10.93454; //adiciona um valor real ( com casas decimais ) com dupla precisão ---- utiliza-se %lf

//------------------------------------////------------------------------------////-------------------------//

printf //exibe o conteudo discriminado
scanf //seta a variavel a partir do dado discriminado - DEPENDE DA EXISTENTE DE 1 OU + VARIAVEIS PARA ARMAZENAR OS DADOS

//------------------------------------////------------------------------------////-------------------------//

&& 5 > 4 E 3 >= 4  [ FALSO ]
&& 5 > 4 E 6 >= 4 [ VERDADEIRO ]    // o && significa [ E ] - PRECISA QUE OS DOIS OU MAIS LADOS SEJAM VERDADEIROS
5 > 2 && 8 >= 6 [ VERDADEIRO ]

//------------------------------------////------------------------------------////-------------------------//

|| 5 > 4 OU 3 >= 4 [ VERDADEIRO ]
|| 5 > 6 OU 3 >= 4 [ FALSO ]
7 > 6 || 6 >= 5 [ VERDADEIRO ]    // o || significa [ OU ] - PRECISA QUE APENAS UM LADO SEJA VERDADEIRO
8 > 3 || 5 < 6 [ VERDADEIRO]  

//------------------------------------////------------------------------------////-------------------------//

! 3 > 3 [ VERDADEIRO ] 
! 3 > 2 [ VERDADEIRO ] // o ! INVERTE o valor do resultado, ou seja 3 é sim maior que dois, porém foi invertido
! 3 < 1 [ VERDADEIRO ]

//------------------------------------////------------------------------------////-------------------------//

utiliza-se %d // para int ( numero inteiro )

utiliza-se %d // para bool ( true or false )

utiliza-se %f // para float ( numero real )

utiliza-se %c // para char com um caracter

utiliza-se %s // para char com vários caracteres

utiliza-se %f // para double (numero real com dupla precisão)

//------------------------------------////------------------------------------////-------------------------//

// o % significa resto
// a ! significa diferente
// o = significa igual
// o < significa menor
// o > significa maior
// o <= significa menor ou igual
// o >= significa maior ou igual
// o != significa diferente ou igual

//------------------------------------////------------------------------------////-------------------------//