#include<stdio.h>

int main(){
	int n;
	int giaTri;
	int found = 0;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	int arr[n];
	printf("Nhap cac phan tu bat ky.\n");
	for(int i=0; i<n; i++){
		printf("Phan tu thu %d:  ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Nhap so phan tu can tim trong mang: ");
	scanf("%d", &giaTri);
	for(int i=0; i<n; i++){
		if(arr[i]== giaTri){
			printf("Phan tu %d duoc tim thay tai vi tri thu %d\n", giaTri, i+1);
			found =1;
			break;
		}
	}
	if(found != 1){
		printf("Phan tu %d khong ton tai trong mang nay.");
	}
	return 0;
}
