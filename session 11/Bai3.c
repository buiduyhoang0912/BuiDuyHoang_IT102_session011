#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu :");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&a[i]);
	}int left =0 ,right = n-1,mid,check = -1,k;
	printf("Nhap gia tri muon tim kiem :");
	scanf("%d",&k);
	while(left <= right){
		mid = (left + right)/2;
		if(k ==a[mid]){
			check = mid;
			printf("tim thay %d tai vi tri %d ",k,check);
			break;
		}else if(a[mid] < k ){
			left = mid +1;
		}else{
			right = mid -1;
		}
	}if(check == -1) printf("Khonf tim thay phan tu trong mang");
	return 0;
}
