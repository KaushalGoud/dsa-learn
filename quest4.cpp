#include<iostream>
using namespace std;
int second_largest_number(int arr[],int size){
    int largest=-1;
    int second=-1;
   
    for (int i = 0; i < size; i++)
    {
        if(largest<arr[i]){
            second=largest;
            largest=arr[i];
            
        }
        else{
            second=arr[i];
        }
    }
    
    return second;
}
int main (){
    int arr[]={13,1,10,21,110};
    cout<<"Largest Number:"<<second_largest_number(arr,sizeof(arr)/sizeof(arr[0]))<<endl;

}