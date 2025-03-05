#include<stdio.h>

int main(){

int n,a[n];

printf("Enter the no of elements of a: ");
scanf("%d",&n);
printf("Enter the values  of the array: ");

for(int i=0;i<n;i++){
    scanf("%d",a[i]);
}
printf("the array elements are: %d",a[n]);
}
