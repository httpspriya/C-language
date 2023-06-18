#include<stdio.h>
int i;
void modify (int *a){
    for(i=0;i<10;i++,a++){
        *a+=3;
    }
}
void display (int *a){
    for(i=0;i<10;i++,a++){
        printf("%d ",*a);
    }
}
void main()
{
    int arr[10];
    clrscr();
    printf("Enter elements of array:");
    for(i=0;i<10;i++){
        printf("\nArray[%d] :",i);
        scanf("%d",&arr[i]);
    }
    printf("\nOriginal array:");
    display (arr);
    modify(&arr[0]);
    printf("\n\nArray after addition:");
    display (&arr[0]);
    getch();
}