#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				for(int k=j;k<n-1;k++){
					a[k]=a[k+1];
				}j--;
				n--;
			}
		}
	}printf("Mang hien tai :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}return 0;
}
