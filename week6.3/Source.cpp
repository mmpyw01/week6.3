#include<stdio.h>
int main()
{
	int w, l, area;
	printf("Enter width : ");
	scanf("%d", &w);
	printf("Enter length : ");
	scanf("%d", &l);

	if (w < 0&& l>0) {
		while (w < 0) {
			printf("Please insert positive integer : ");
			scanf("%d", &w);
		}
	}
	else if(l<0&&w>0){
		while (l < 0) {
			printf("Please insert positive integer : ");
			scanf("%d", &l);
		}

	}
	else if(w < 0 && l<0) {
		while (w<0) {
			printf("Please insert positive integer : ");
			scanf("%d", &w);
			
		}
		while (l < 0) {
			printf("Please insert positive integer : ");
			scanf("%d", &l);
		}
		
	}

	area = w * l;
	printf("Area of rectangle is = %d", area);

}