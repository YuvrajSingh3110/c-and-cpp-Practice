#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

char *string = NULL;
int n;

printf("How many characters in the string: ");
scanf("%d", &n);

string = (char*)malloc((n)*sizeof(char));

if(string == NULL){
    printf("Memory not allocated!! ");
}

printf("Enter the string: ");
gets(string);

int length=strlen(string);
printf("length is %d\n", length);

for (int i=0; i<length; i++){
   if(string[i] !=' '){

      printf("%c", string[i]);
    }
  else{
      printf("\n");
     }

}

free(string);
string = NULL;

}

/*
int main(void) {
    char *stringa1 = NULL;
    size_t n, slen;

    printf("How many characters in the string? ");
    if (scanf("%zu", &n) != 1) {
        printf("Invalid input\n");
        exit(EXIT_FAILURE);
    }

    stringa1 = (char*)malloc(n*sizeof(char));
    if (stringa1 == NULL) {
        printf("Cannot allocate %zu bytes for string\n", n+1);
        exit(EXIT_FAILURE);
    }

    printf("Insert the string: ");
    scanf("%s", stringa1);

    slen = strlen(stringa1);
  
for (int i=0; i<=slen; i++){
   if(stringa1[i] !=' '){

      printf("%c", stringa1[i]);
    }
  else{
      printf("\n");
     }

}
  //  printf("String: %s Length: %zu\n", stringa1, slen);

    free(stringa1);
    stringa1 = NULL;

    return 0;
}
*/