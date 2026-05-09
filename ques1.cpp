#include <iostream>
#include<array>
using namespace std;
int search_element(array<int,5> arr,int target){
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    if(arr[i]==target){
        return i;
    }
}
return -1;
}

// -1 means the element is not in the array
int main(){
    int target;
    array<int,5>arr{13,1,10,21,100};
    cout<<"Which number you want to find?"<<endl;
    cin>>target;
    cout<<endl;
    cout<<"Found element at index->"<<search_element(arr,target);
    
    return 0;

}