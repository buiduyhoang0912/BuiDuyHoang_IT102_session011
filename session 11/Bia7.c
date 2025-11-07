#include<stdio.h>
int main(){
	int n;
	printf("Nhap so thang:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia co phieu %d :",i+1);
		scanf("%d",&a[i]);
	}int giamua=a[0];
	int giabanmax = a[1]-a[0];
	int thangban = 1;
	for(int i=1;i<n;i++){
		int giaban = a[i] - giamua;
		if(giaban > giabanmax){
			giabanmax = giaban;
			thangban = i;
		}
	}printf("Gia ma vao(thang1) : %d",giamua);
	printf("Gia ban ra (thang %d) : %d",thangban +1,a[thangban]);
	if(giabanmax > 0){
		printf("\n Ban se lai : %d \n",giabanmax);
	}else{
		printf("\n Bna se lo : %d \n",-giabanmax);
	}return 0;
}
