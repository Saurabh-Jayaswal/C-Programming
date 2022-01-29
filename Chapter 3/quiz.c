#include<stdio.h>

    int main (){ 
    int n1=12,n2=23,n3=14,n4=15;
    printf("enter the numbers \n");
    // scanf("%d",&n1,&n2,&n3,&n4);

    if(n1>n2 && n1>n3 && n1>n4){
        printf("A");
    }
    else if(n2>n1 && n2>n3 && n2>n4){
        printf("B");
    }
    else if(n3>n1 && n3>n2 && n3>n4){
        printf("C");
    }
    else if(n4>n1 && n4>n2 && n4>n3){
        printf("D");
    }


}