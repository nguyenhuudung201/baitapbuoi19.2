#include<stdio.h>
int main(){
	int c=0;
	int d;
	int b;
	int n;
	printf("nhap so luong phan tu: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			c++;
			d=c;
		}else{
			b=d;
			c=0;
		}
	}
 if(d>=b){
 	printf(" so luong so duong lien tiep la: %d",d);
 }else{
 	printf(" so luong so duong lien tiep la: %d",b);
 }   
}

