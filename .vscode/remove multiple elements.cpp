#include<iostream>
using namespace std;
//引入j会更好

int main(){
   int*pArr=new int[10]{3,5,1,11,99,66,22,2,8,6};
   int*pArrnew=new int[8];
   int j =0;
   for(int i=0;i<10;i++){//[]包括了解引用，p[i]=*[p+i]
       if(i==0||i==5){//( , )为输出后者
        continue;
       }
      else{
        pArrnew[j]=pArr[i];
        j++;
      }
    }
    for(int i=0;i<8;i++){
        cout<<pArrnew[i]<<" ";
    }
delete[]pArr;
delete[]pArrnew;
  return 0;       
}


//进阶写法
// 不申请新数组，直接在原数组上操作
//int j = 0;
//int j = 0;
//for (int i = 0; i < 10; i++) {
//   if (i == 0 || i == 5) continue;
//    pArr[j] = pArr[i];
//   j++;
//}
// 此时 pArr 的前 8 个元素就是移除后的结果。
// 打印时只打印前 8 个即可。