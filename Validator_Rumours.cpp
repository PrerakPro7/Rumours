#include "testlib.h"
 
int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int t=inf.readInt(1, 10'000, "n");
    inf.readEoln();
    for(int i = 1;i <= t;i++)
    {
		long long int x = inf.readLong(1, 1'000'000'000'000'000'000, "N");
        inf.readEoln();
    }
    inf.readEof();
}
