#include<iostream>
#include<omp.h>
#include<pthread.h>
using namespace std;
int main(){
    int v1[5]={1,2,3,4,5};
    int v2[5]={11,22,43,54,55};
    int v3[5];
    int tid;
    #pragma opm parallel num_threads(5)
    {
        for(int i=0;i<5;i++){
            // tid=omp_get_thread_num();
            v3[i]=v1[i]+v2[i];
            // printf("v3[%d]=%d\n",tid,v3[tid]);
            cout<<" c[" <<omp_get_thread_num() <<"]="<<v3[i];
        }
    }
    return 0;
}