//for문 3개를 돌리면 된다. 하지만 

#include <iostream>
#include <algorithm>

int main(){
   int N, M, max = 0;
   int *arr, *perm;
   cin >> N >> M;
   arr = new int[N];
   perm = new int[N];
   for(int i = 0; i < N; ++i){
      cin >> arr[i];
      perm[i] = 1;
   }
   for(int i = 0;i < 3;++i){
      perm[i]=0;
   }
   do{
      int sum = 0;
      for(int i=0;i<N;++i){\
         if(perm[i] == 0)
            sum += arr[i];
      }
      if(sum >= max && sum <= M)
         max = sum;
   }while(next_permutation(perm, &perm[N]));
   cout << max <<endl;
   return 0;
}
