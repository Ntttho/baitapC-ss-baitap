#include<stdio.h>
int main(){
	int n; scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		int min=arr[i];
		for(int j=i+1;j<n;j++){
			if(min>arr[j]){
				arr[i]=arr[j];
				arr[j]=min;
				min=arr[i];
			}
		}
	}
	/*cach2: insertion soft
for(int i=1;i<n;i++){
	int j=i-1, var=arr[i];
	while(j>=0 && var<arr[j]){
		arr[j+1]=arr[j];
		i--;
	}
	arr[j+1]=var;
}
	*//*cach3 bubble soft
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(arr[i]<arr[j]){
			term=arr[i];
			arr[i]=arr[j];
			arr[j]=term;
		}
	}
}
	*/
	
	
	
	
	for(int i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
