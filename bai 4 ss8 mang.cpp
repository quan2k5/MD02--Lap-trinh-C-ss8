#include <stdio.h>
int main(){
	int n;
	printf ("nhap so phan tu cua mang");
	scanf ("%d",&n);
	int mang[n];
	for (int i=0; i<n;i++){
		printf("mang[%d]",i);
		scanf ("%d",&mang[i]);
		}
        int noichen;
		printf("nhap vao noi chen");
		scanf ("%d",&noichen);
		int number;
		printf ("nhap so can chen");
		scanf("%d",&number);
		for(int i=0;i<n;i++){
			if(i==noichen){
				printf("%d",number);
				}
		     printf ("%d",mang[i] );
		     }
		if(noichen>n-1){
			printf ("%d",number);
		}
	}	
	
