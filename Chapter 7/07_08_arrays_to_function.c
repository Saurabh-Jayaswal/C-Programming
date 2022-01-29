#include<stdio.h>
// void printarray(int *a  , int n){
// for(int i = 0 ;i<n ;i++){
//     printf("the value of element %d is %d\n",i+1,*(a+i);
// }

void printarray(int a[]  , int n){
for(int i = 0 ;i<n ;i++){
    printf("the value of element %d is %d\n",i+1, a[i]);
}
}

    int main (){ 
    int arr[] =  {1,54,44,4,654,654,4665};
    printarray(arr ,7);
    return 0; 
}