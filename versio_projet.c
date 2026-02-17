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
        printf("le nombre que tu as saisi est %d",x);
        scanf("%d",&x);
        }while(x>0);
        if(x%2==0){
            somme==somme%x;
            cpt++;
        }
         moy= somme/cpt;
  printf("la moyenne est %d\n",moy);
    if(nb_pair!=0){
        float moy=(float)somme/nb_pair;
    printf("moyenne des nombres paires=%.2f\n",(float)moy);

    }

return 0 ;
}

