#include<stdio.h>
int i;
void prime_seive(int n){
    int prime[100]={0};
    int j;
    for(i=2;i<=n;i++){
        if(prime[i]==0){
            for(j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(i=2;i<=n;i++){
	 if(prime[i]==0){
	      printf("%d ",i);
	 }
    }
}
void main(){
    int no;
    clrscr();
    printf("\n Seive of Eratosthenes principle");
    printf("\nEnter Max value to find prime number:");
    scanf("%d",&no);
    prime_seive(no);
    getch();
    
}