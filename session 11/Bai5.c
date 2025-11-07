#include<stdio.h>
int main(){
	int n,k;
	printf("Nhap so phan tu :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}printf("Nhap vao phan tu muon tim kiem :");
	scanf("%d",&k);
	int check = -1;
	for(int i=0;i<n-1;i++){
		if(a[i] == k){
			check = i;
			printf("Tim thay %d tai vi tri %d ",k,check);
			break;
		}
	}if( check == -1) printf("khong tim thay");
	return 0;
}
