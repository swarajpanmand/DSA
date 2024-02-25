#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool test(int a[], int x, int size){
    
   for(int i =0;i<size; i++){
        for (int j =0; j<size; j++){
            if (i != j && a[i] + a[j] == x){
                return true;
            }
        }
   }
   return false;
   
}


int main() {
   int a[]={1, 4, 45, 6, 10, 8};
   int x= 5;
   int size = sizeof(a)/sizeof(a[0]);
   if (test(a, x,size)){
       cout << "Yes";
    }else{
        cout << "No";
    }

}
