#include <stdio.h>

int main(void) {
	int width;
	int height;
	int temp;
	
	scanf("%d %d",&width,&height);
	
	if(width<=0||height<=0||width>255||height>255){
		printf("Cannot decode\n");
		return 1;
	}
	int input[height][width];
	
	for(int i=0;i<height;i++){
		for(int j=0;j<width;j++){
			if(j ==width-1){
			scanf("%d\n",&input[i][j]);
				if(input[i][j]>255||input[i][j]<0){
					printf("Cannot decode\n");
					return 1;
				}
			}
			else
			{
			scanf("%d ",&input[i][j]);
				if(input[i][j]>255||input[i][j]<0){
					printf("Cannot decode\n");
					return 1;
				}
			}
		}
	}	
	
	printf("X:\n");
	for(int i=0;i<height;i++){
		int count=0;
		for(int j=0;j<width;j++){
			if(count!=0&&input[i][j]!=0&&input[i][j]!=temp){
				printf("%d ",count);
				count=0;
				count=count+1;
				temp=input[i][j];
				continue;
			}
			if(input[i][j]==0){
				temp=input[i][j];
				continue;
			}
			if(input[i][j]!=0){
			count=count+1;	
			temp=input[i][j];
			}
		}
		printf("%d \n",count);
	}
	printf("\n");
	printf("Y:\n");
	for(int i=0;i<width;i++){
		int count=0;
		for(int j=0;j<height;j++){
			if(count!=0&&input[j][i]!=0&&input[j][i]!=temp){
				printf("%d ",count);
				count=0;
				count=count+1;
				temp=input[j][i];
				continue;
			}
			if(input[j][i]==0){
				temp=input[j][i];
				continue;
			}
			if(input[j][i]!=0){
			count=count+1;	
			temp=input[j][i];
			}
		}
		printf("%d \n",count);
	}
	
	return 0;
}


