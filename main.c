#include<stdio.h>
int main(){
    printf("Enter the count of the number of arrays elements: ");
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    printf("Enter the elements of the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}