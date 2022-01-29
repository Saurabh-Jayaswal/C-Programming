# include<stdio.h>

int main(){
    int x = 4;
    int  y= 6;

    printf("the value of 3*x - 8*y is %d", 3*x-8*y);
    printf("the value of  8*y/3*x is %d", 8*y/3*x);
    //  In this bodmass is  not applicable 
    // 8*y/3*x ans is not 4 
    // if oprertor precidence is same than then we use operator assosiativity 
    // (((8*6)/3)*4)
    // (((48)/3)*4)
    // (16)*4
    // 64          THIS IS COREECT METHOD 
    return 0;
}
