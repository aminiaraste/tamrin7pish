#include<iostream>
#include<stab.h>
using namespace std;
int binarysearch(int array[],int size,int searchValue){
    int low = 0 ;
    int high = size -1 ;
    int mid;
    while (low <= high)
    {
         mid =(low+high)/2 ;
        if(searchValue == array[mid]){
            return mid;
        }
        else if (searchValue > array[mid]){
            low = mid + 1;
        }
        else{
            high = mid -1 ;
        }
    }
    return -1;
    
}
int main(){
    int a[] = {12,22,34,47,55,67,82,98};
    int userValue;
    cout<< "enter an integer :";
    cin >> userValue;

    int result = binarysearch(a,8,userValue);
    
    if(result >= 0){
        cout<<"the number "<< a[result]<<"was founs at the "
        "elemnt with index"<<result<<endl;
    }
    else{
        cout<<"the number"<<userValue<<"was not found"<<endl;

    }
}