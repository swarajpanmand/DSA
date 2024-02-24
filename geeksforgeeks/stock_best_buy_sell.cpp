#include<iostream>

using namespace std;

int popFirstElement(int a[], int& size){
    for(int i=0; i<size-1; i++){
        a[i] =a[i+1];
    }
    a[size-1]=0;
    --size;
    return a[size];
}

int findMax(int a[], int size){
    int max= a[0];
    for(int i =0; i<size; i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    return max;
}

int findMin(int a[], int& size){
    int valueMin= a[0];
    int i;
    for(i =0; i<size;i++){
        if (a[i]<valueMin){
            valueMin=a[i];
        }
    }
    if (valueMin==a[size-1]){
        cout<<"No profit";
        return 1;
    }
    for(int j= 0; j<i-1; j++){
        popFirstElement(a,size);
    }
    int valueMax= findMax(a,size);
    // cout<<valueMax-valueMin;

    return valueMax-valueMin;
}

int main(){
    int a[] ={5,6,7,8,1,2,5};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<findMin(a,size);
   
    return 0;
}