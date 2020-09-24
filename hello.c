#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Student{
    char name[50];
    char school[50];
    int age;
    double cpf;
};

double toSquare(double num){
    double result = num * num;
    return result;
}


int main(){
    // Setando o set de acentos
    setlocale(LC_ALL, "Portuguese");

    // Data types

    printf("======-TIPO DE DADOS-======\n");

    int number = 40;
    double floatingNumber = 40.5;
    char oneChar = "A";
    char phrase[] = "Bananinha na manteiga!";

    printf("Int(Numeros) double(Floats) char(Caracteres) char[](String)");


    printf("\n\n");

    // Variables
    printf("======-VARIAVEIS-======\n");

    char characterName[] = "Pedro";
    int characterAge = 14;


    printf("Nome: %s\n",characterName);
    printf("Idade: %d\n",characterAge);

    printf("\n\n");

    // Number operation
    // + - * /

    printf("======-OPERACOES-======\n");

    printf("Potencia: %g\n",pow(2,2));
    printf("Raiz quadrada: %g\n",sqrt(9));

    printf("\n\n");

    // Const
    printf("======-CONSTANTES-======\n");

    const int FAV_NUM = 5;
    printf("Uma constante imutavel: %d\n",FAV_NUM);

    printf("\n\n");

    // Scanning
    printf("======-SCANNER-======\n");

    char input[20];
    printf("Insira algo: \n");
    scanf("%s",&input);
    printf("Você colocou: %s\n", input);

    printf("\n\n");
    // Arrays
    printf("======-ARRAYS-======\n");

    int luckyNumbers[] = {1,2,3,4,5,6,7,8};
    printf("Array: %d\n",luckyNumbers[1]);

    printf("\n\n");
    // Functions
    printf("======-FUNCAO-======\n");

    sayHi("Pedrao");

    printf("\n\n");

    // Functions return
    printf("======-FUNCAO COM RETURN-======\n");

    printf("2 ao quadrado: %f\n",toSquare(2));

    printf("\n\n");

    // If ( statement )

    printf("======-IF ELSE ELSEIF-======\n");

    if(11 < 10){
        printf("E menor que 10\n");
    } else {
        printf("E maior que 10\n");
    }

    printf("\n\n");

    // Switch

    printf("======-SWITCH-======\n");

    char character = 'C';

    switch(character){
        case 'A':
            printf("Legal e A\n");
            break;
        case 'B':
            printf("Legal e b\n");
            break;
        default:
            printf("Ue nao tem nada\n");
    }

    printf("\n\n");

    //Structs
    printf("======-STRUCTS-======\n");

    struct Student studant1;
    studant1.age = 14;
    studant1.cpf = 222.222;
    strcpy( studant1.name , "Pedrao");
    strcpy( studant1.school, "Rondonia");

    printf("Nome do aluno: %s  Escola do aluno: %s Idade do aluno: %d Cpf do aluno: %lf \n",studant1.name,studant1.school,studant1.age,studant1.cpf);

    printf("\n\n");

    // While
    printf("======-WHILE-======\n");

    int index = 1;
    while(index <= 5){
        printf("O index agora eh %d\n",index);
        index++;
    }

    printf("\n\n");

    // Do
    printf("======-DO WHILE-======\n");

    int doIndex = 1;
    do {
       printf("Do O index agora eh %d\n",doIndex);
       doIndex++;
    }while(doIndex<=5);

    printf("\n\n");

    // For
    printf("======-FOR-======\n");

    int i;
    for(i = 0;i <= 5;i++){
        printf("For I = %d ",i);
    }

    printf("\n\n");

    // Multy arrays & Multy loops
    printf("======-ARRAYS MULTIDIMENSIONAIS E LOOPS-======\n");

    int nums[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

    int a,b;

    for(a = 0;a < 3; a++){
        for(b = 0;b < 3; b++){
            printf("%d ",nums[a][b]);
        }
        printf("\n");
    }

    printf("\n\n");

    // Memory alocation
    printf("======-ALOCAÇÃO DE MEMÓRIA-======\n");

    char memory = 'A';

    printf("A variavel MEMORY esta no local de MEMORIA: %p\n",&memory);

    printf("\n\n");

    // Pointers & Memory
    printf("======-PONTEIROS E MEMORIA-======\n");

    int age = 40;
    int *agePointer = &age;

    printf("Ponteiro agePointer em: %d\n",*agePointer);

    printf("\n\n");

    // Trabalhando com arquivos
    printf("======-ARQUIVOS(CRIANDO,ADICIONANDO,LENDO)-======\n");

    // w = reescrever a = adicionar r = apenas ler
    char lines[255];
    FILE * fpointer = fopen("arquivo.txt","r");
    // para escrever : fprintf(fpointer, "\nEle é lindao!");
    fgets(lines, 255 ,fpointer);
    printf("%s",lines);


    fclose(fpointer);

    printf("\n\n");


    return 0;
}

void sayHi(char name[]){
    printf("Ola! %s\n",name);
}
