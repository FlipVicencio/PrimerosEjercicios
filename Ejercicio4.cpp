# include<stdio.h>

int imprime(int a){
    for(int i=0; i<=a;i++){
       for(int j=a;j>0;j--){
          if(j>i)
             printf(" ");
          else
             printf("*");
       }
       printf("\n");
    }
    return 0;
}
int main(){
	FILE *archivo;
	int num;
 
	archivo = fopen("prueba.txt","r");
 
	if (archivo == NULL){
       printf("\nError al abrir archivo. \n\n");
    }
    else {
	   while (feof(archivo) == 0){
	      fscanf(archivo, "%d", &num);
		  imprime(num);
		  printf("\n");
       }
    }
    fclose(archivo);
    getchar();
	return 0;
}
