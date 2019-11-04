//for문 3개를 돌리면 된다.
/*
next_permutation 감소수열로 만들어 준다. next_permutaion(a.begin(), a.end())
시간 복잡도 (last - first)/2 * N
O(N)
*/
#include <iostream>
#include <algorithm>
/*
bool next_permutation(int *first, int *last){
   int *next = last;
   if (first == last || first == (--next))
      return false;
   
   for(;;){
      int *next1 = next;
      if(*(--next) < *next1){
         int *mid = last;
         for(; !(*next < *(--mid)););
         swap(*next, *mid);
         reverse(next1, last);
         return true;
      }
      if (next == first){
         reverse(first, last);
         return false;
   }
}
*/
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
