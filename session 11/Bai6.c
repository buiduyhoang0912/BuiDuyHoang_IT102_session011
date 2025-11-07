#include<stdio.h>
int main(){
	int n,k,vtri;
	printf("Nhap so phan tu :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}int max = a[0];
	for(int i=0;i<n;i++){
		if(a[i] > max ){
			max = a[i];
			vtri = i;
		}
	}for(int i = vtri;i<=n-1;i++){
		a[i]=a[i+1];
	}n--;
	int max1=a[0];
	for(int i=0;i<n-1;i++){
		if(a[i]>max1) max1 = a[i];
	}printf("Gia tri lon thu 2 trong mag la : %d",max1);
	return 0;
}
