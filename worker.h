#ifndef WORKER
#define WORKER

#include "string"

using namespace std;

class Worker {
private:
    int id;
    string name;
public:
    Worker();
    ~Worker();
    void SellProducts();
};

#endif // WORKER

