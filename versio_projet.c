#include<stdio.h>
int main(){
    int x,n,cpt=0,somme=0;
    int nb_pair=0;
    float moy;
    do{
    printf("saisir n entiers:");
    scanf("%d",&n);
    }while(n<0);
    for(int i=0;i<n;i++){
        do{
            puts("veuillez saisir un entier negatif:");
        scanf("%d",&x);
        }while(x>0);
    }

return 0 ;
}

