#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){
    int array[5]={1,2,6,3,7};
    int i,j,auxiliar;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){

        if(array[j]>array[i]){
            auxiliar=array[i];
            array[i]=array[j];
            array[j]=auxiliar;
            }
        }
    }

    for(i=0;i<5;i++){

        printf("%d",array[i]);
    }

    return 0;
}
