#include<stdio.h>

    int main (){ 
    int i , size ,a[10]
;
int positive_count =0 ;

printf("enter the size of arrays \n");
scanf("%d",&size);
printf("this arrys element are written \n");
for(int i =0 ; i < size ; i++){
    scanf("%d",&a[i]);

}
for(int i =0 ; i < size ; i++){
  if(a[i]>=0 ){
      positive_count++ ;
  }
    
}
printf("total number of positive count in an arrays  = %d",positive_count);


    return 0; 
}