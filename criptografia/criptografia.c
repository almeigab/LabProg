#include <stdio.h>

void converteFraseEmChave (char s[], char key[]);
void maiuscula (char s[]);
void primeiroChar (char s[], char key[]);
void completaChave (char s[]);
void criptografaFrase (char s[], char key[]);
void leFrase (char s[], int size);
// int getInputSize(char s[]);
// void concatInput(char *s[], int n, char res[]);

int main () {
// int main (int argc, char **argv){
    // int i, size = argc - 1;
    // for (i = 1; i < argc; i++ ) {
    //     size += getInputSize(argv[i]);
    // }
    // char string[size];
    // concatInput(argv, argc, string);
    char string1[] = "Celacan123to provoca mar123emoto1";
    char key[30];
    char string2[1000];
    printf("\nstring1:\n%s\n",string1);
    converteFraseEmChave(string1,key);//conversão de frase em chave
    printf("\nkey:\n%s\n",key);
    printf("\nInsira a frase:\n");
    leFrase(string2,1000); //lê frase pelo teclado a ser criptografada
    printf("\nstring2:\n%s\n",string2);
    criptografaFrase(string2,key); //criptografa frase
    printf("\nstring2 convertida:\n%s\n",string2);
    return 0;
}

/******************************
    conversão de frase em chave
*******************************/
void converteFraseEmChave (char s[], char key[]){
    maiuscula(s); //conversão das letras minúsculas em maiúsculas
    primeiroChar(s,key); //eliminação de caracter inválido e verificação de primeira ocorrência
    completaChave(key); //completa chave com caracteres restantes
}

/******************************
    conversão das letras
    minúsculas em maiúsculas
*******************************/
void maiuscula (char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i]<='z')
            s[i] += 'A' - 'a';
}

/******************************
    eliminação de caracter
    inválido e verificação de
    primeira ocorrência
*******************************/
void primeiroChar (char s[], char key[]) {
    int i = 0, j, k = 0;
    while (s[i] != '\0') {
        //ignora char inválido
        while (!( (s[i] >= 'A' && s[i] <= 'Z') || s[i] == ',' || s[i] == '.' || s[i] == ' ') )
            if (s[++i] == '\0')
                break;
        if (s[i] == '\0')
            break;
        //sai do loop se não é a primeira ocorrência
        for (j = 0; j < k; j++)
            if (s[i] == key[j])
                break;
        //se é a primeira ocorrência, adiciona caracter na chave
        if (s[i] != key[j])
            key[k++] = s[i];
        i++;
    }
    key[k]='\0';
}

/******************************
    completa chave com
    caracteres restantes
*******************************/
void completaChave (char s[]) {
    char letras[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ,. ";
    int i = 0, j, size = 0;
    //verifica tamanho original da chave
    for (i = 0; s[i] != '\0'; i++)
        size++;
    //completa os caracteres restantes
    for (i = 0; letras[i] != '\0'; i++) {
        for (j = 0; s[j] != '\0'; j++) {
            //sai do loop se caracter já está na chave
            if (s[j] == letras[i])
                break;
        }
        //se caracter não está na chave, adiciona-o
        if (s[j] != letras[i]) {
            s[size] = letras[i];
            s[++size] = '\0';
        }
    }
}

/******************************
    criptografa frase
*******************************/
void criptografaFrase (char s[], char key[]) {
    int index = 0, i = 0, j = 0;
    //criptografa
    for (i=0; s[i]!='\0'; i++) {
        //indice é movido para direita pelo valor do char
        if (s[i] >= 'A' && s[i] <= 'Z')
            index += s[i] - 'A' + 1;
        else if (s[i] == ',')
            index += 27;
        else if (s[i] == '.')
            index += 28;
        else if (s[i] == ' ')
            index += 29;
        //circular
        index = (index)%29;
        //valor criptografado
        s[i] = key[index];
    }
}

/******************************
    lê frase pelo teclado
    a ser criptografada
*******************************/
void leFrase (char s[], int size) {
    int i = 0;
    int c;
	while (i < size && (c = getchar())!= EOF && (c = getchar())!='\n' ) {
        //converte e maiuscula
        if(c >= 'a' && c <='z')
            c += 'A' - 'a';
        //verifica se char é válido
        if ( (c >= 'A' && c <= 'Z') || c == ',' || c == '.' || c == ' ')
            s[i++] = c;
    }
    s[i] = '\0';
}

// int getInputSize(char s[]) {
//     int i, size = 0;
//     for (i = 0; s[i] != '\0'; i++)
//         size++;
//     return size;
// }

// void concatInput(char *s[], int n, char res[]) {
//     int i, j, k = 0;
//     for(i = 1; i < n; i++) {
//         for (j = 0; s[i][j] != '\0'; j++) {
//             res[k++] = s[i][j];
//         }
//         res[k++] = ' ';
//     }
//     res[k] = '\0';
// }