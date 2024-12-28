#include<stdio.h>
int main(){
	int a[100];
	int n;
	int temp;
	
	printf("n : ");
	scanf("%d", &n);
	
	for(int i = 0; i < n;i++) {
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	printf("Before sorting : \n");
	for(int i = 0; i < n; i++) {
		printf("a[%d] = %d",i, a[i]);
		printf("\n");
	}
	for(int i =0; i <n-1;i++){
		for(int j = 0;j < n-i-1; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting : \n");
	for(int i=0; i <n; i++){
		printf("a[%d] = " ,i);
		printf("%d", a[i]);
		printf("\n"); 
	}
	return 0; 
}                  