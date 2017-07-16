#include <iostream>

using namespace std;

void insort(int a[], int n){
for(int i=0;i<n-1;i++){
	for(int j=i+1;j<n;j++){
		if(a[j] < a[i]){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}

	}
}
}
int main(){

	int arr[]={67,87,56,23,100,19,789,117,6,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Size of array is "<< size <<endl;
	insort(arr,size);
	for(int i=0;i<size;i++){
		cout<<" "<<arr[i];
	}
	cout<<"\n";	
}