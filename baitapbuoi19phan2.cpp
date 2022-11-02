#include<stdio.h>
int main(){
	int t;
	int d;
	int h;
	int n;
	printf("nhap so phan tu can tim: ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			t+=arr[i];
			d=t;
		}else{
			t=0;
			h=d;
		}
	}
  if(d>=h){
  	printf("tong cua cac so duong lien tiep  lon nhat la:%d",d);
  }else{
  	printf("tong cua cac so duong lon lien tiep nhat la:%d",h);
  }
}
