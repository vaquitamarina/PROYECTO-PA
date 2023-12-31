#include <bits/stdc++.h>
#include <wchar.h>
#include <locale.h>

using namespace std;

int main(){
    
    for(int i=0; i<8; i++){
        for(int j = 0;j<8;j++){
            if(i%2 == 0){
                cout<<"///////"<<endl
                cout<<"///////"<<endl 
                cout<<"///////"<<endl 
            }
            else{
                cout<<"       ///////       ///////       ///////       ///////"<<endl;
                cout<<"       ///////       ///////       ///////       ///////"<<endl;
                cout<<"       ///////       ///////       ///////       ///////"<<endl;
            }
        }
        cout<<endl;
    }
    
}