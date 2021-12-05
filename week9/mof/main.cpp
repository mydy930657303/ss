#include <iostream>
using namespace std;

int main() {
    int radix;
    cin>>radix;
    int* data=new int[radix*radix];
    //构建5维魔术方阵
    for(int i=0;i<radix*radix;i++){
        data[i]=0;
    }

    int row=0,col=radix/2;
    for(int num=1;num<=radix*radix;num++){
        data[row*radix+col]=num;
        row=(row-1+radix)%radix;
        col=(col-1+radix)%radix;
        //判读是否被占用
        if(0!=data[row*radix+col]){
            row=(row+1+1)%radix;
            col=(col+1)%radix;
        }
    }

    for(int i=0;i<radix;i++){
        for(int j=0;j<radix;j++){
            cout<<data[i*radix+j]<<" ";
        }
        cout<<endl;
    }
    delete[] data;

}
