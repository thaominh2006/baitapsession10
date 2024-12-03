#include<stdio.h>

int main(){
	int arr[]={11,35,-2,14,20};
    int size=5;
    for(int i=0;i<size;i++){
        int min =arr[i];
        for (int j = 0; j < size; j++){
            if(arr[i]<arr[j]){
                min =arr[j];
                arr[j]=arr[i];
                arr[i]=min;
            }
        }
        
    }
    printf("Mang da duoc sap xep: ");
    for(int i=0; i<5;i++){
        printf("%3d",arr[i]);
    }
    int start = 0,end= sizeof(arr)/sizeof(int);
    int mid;
    int searchValue;
    printf("\nNhap phan tu can tim: ");
    scanf("%d",&searchValue);
    while (start <= end){
        mid=(start+end)/2;
        if (arr[mid] == searchValue)
        {
            printf("\nPhan tu ton tai trong mang tai vi tri: %d",mid);
            return 0;
        }else if (arr[mid] > searchValue)
        {
            end =mid-1;
        }else{
            start =mid +1;
        }    
    }
    printf("Phan tu khong tim thay trong mang");
    
	return 0;
}
