#include<iostream>
using namespace std;
int largest_number(int arr[],int size){
    int largest=arr[0];
    for (int i = 1; i < size; i++)
    {
        if(largest>arr[i]){
            continue;
        }
        else{
            largest=arr[i];
        }
    }
    
    return largest;
}
int main (){
    int arr[]={13,1,10,21,110};
    cout<<"Largest Number:"<<largest_number(arr,sizeof(arr)/sizeof(arr[0]))<<endl;

}