#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}int countmax=0;
	int vtri;
	for(int i=0;i<n;i++){
		int count = 0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
		}if(count > countmax){
			countmax = count;
			vtri = a[i];
		}
	}printf("Phan tu xuat hien nhieu nhat : %d\n",vtri);
	printf("so lan xuat hien :%d" , countmax);
	return 0;
}
