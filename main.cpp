#include <iostream>
using namespace std;

int main() {
  for(int i=0;i<5;i++){
    cout<<"outerloop"<<i<<endl;
    for(int j=0;j<5;j++){ 
      cout<<"innerloop"<<j<<endl;
    }
  }
  return 0;
}