#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

ull oddSum =0;
ull evenSum =0;

void findoddSum(ull start, ull end){
    for(ull i=start; i<=end; i++){
        if( (i&1) == 1){
            oddSum +=i;
        } 
    }
     }
void findevenSum(ull start, ull end){
    for(ull i=start; i<=end; i++){
        if( (i&1) == 0){
            evenSum+=i;
        } 
    }
     }

int main(){
    ull start =0, end=19000000;
    auto start_time = chrono::high_resolution_clock::now();
    std::thread t1(findoddSum, start, end);
    std::thread t2(findevenSum, start, end);
    t1.join();
    t2.join();

    // findoddSum(start, end);
    // findevenSum(start, end);
 auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
    
    cout<< oddSum << " " << evenSum;
   
    cout << "Time taken: " << duration.count() << " ms" << endl;
    return 0;
}