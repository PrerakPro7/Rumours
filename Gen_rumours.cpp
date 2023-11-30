#include "testlib.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	int t = rnd.next(1,10000);
	println(t);
	vector<long long int>a(t);
	for(int i = 0;i < t;i++){
		a[i] = rnd.next(1ll, 1000000000000000000ll);
		println(a[i]);
	}
    return 0;
}
