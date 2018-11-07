#include<iostream>
using namespace std;

class myVector{
private:
  int length;
  int *A;
public:
  myVector();
  myVector(int l){
    length=l;
    //A=new double[length];
  }
  myVector(const myVector &v2){
    length=v2.length;
    //A=v2.A;
  }
  ~myVector(){deallocate()};
  void allocate(int n){
    length=n;
    A=new double[n];
  }
  void deallocate(){
    delete[]A;
  }
  bool redim(int n){
    if(length==n){
      return false//no need for allocation
    }
    else{
      if(A!=NULL){
        deallocate()
      }
    }
    allocate(n);
    }
    void operator = (const myVector &v2){
      length=v2.length;
      A=v2.A;
    }
    myVector operator +(myVector &v2){
      myVector VectorSum;
      VectorSum=length+v2.length;
      *v.A=*A+*v2.A;
    }

    int size(){
      return length;
    }
    void inputs(){
      for(int i =0;i<length;i++){
        cin>>*(A+i);
      }
    }

  };
  int main(){
    myVector v;
    myVector v2;
    inputs();
    size();
    v=v2;
    int v3=v2+v1;
  }
