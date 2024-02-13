#include <iostream>
using namespace std;
int main()
{
    int ar[]={10,20,30,40,50,60};
    int temp = 0;
    int a = sizeof(ar)/sizeof(ar[0]);
    int size1 = a/2;
    for(int i=0; i<size1; i++){
        if(1){
            temp = ar[i];
            ar[i] = ar[a-1-i];
            ar[a-1-i] = temp;
        }
    }
    
    for (int i=0; i<a; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}
