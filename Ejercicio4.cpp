# include<stdio.h>

int main(){
    int a;
    printf("Ingrese numero: ");
    scanf("%d",&a);
    for(int i=0; i<=a;i++){
       for(int j=a;j>0;j--){
          if(j>i)
             printf(" ");
          else
             printf("*");
       }
       printf("\n");
    }
    getchar();
    getchar();
    return 0;
}
