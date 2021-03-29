#include<stdio.h>
void nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("\nnhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

int sapxep(int a[],int n){
	int b;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				b=a[i];
				a[i]=a[j];
				a[j]=b;
			}
		}
	}
}
int main(){
	int a[100],n;
	printf("nhap so phan tu cua mang\t");
	scanf("%d",&n);
	nhapmang(a,n);
	sapxep(a,n);
	for(int i=0;i<n;i++){
		printf("a[%d]=%d\t",i,a[i]);
	}
}
