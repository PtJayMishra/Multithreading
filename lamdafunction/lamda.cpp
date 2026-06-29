#include<bits/stdc++.h>

using namespace std;
int main(){

    auto fun = [](int x){
        while(x-- > 0){
            cout <<x<<endl;
        }
    };
     std::thread t1(fun, 10);
    t1.join();
    return 0;
}