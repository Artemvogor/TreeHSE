#pragma once
#pragma once

#include <memory>

#define UInt64 unsigned long long

using namespace std;

class Veb
{
public:
    int K;
    int N;
    UInt64 lmsk;
    unique_ptr<unique_ptr<Veb>[]> Subtrees;
    unique_ptr<Veb> Aux;
    UInt64 TreeMin;
    UInt64 TreeMax;
    UInt64 NoneK;
    UInt64 NoneN;
    int SpecFlag = 0;

    Veb(int k);
    bool Empty();
    UInt64 GetMax();
    UInt64 GetMin();
    UInt64 Merge(UInt64 h, UInt64 l);
    UInt64 High(UInt64 v);
    UInt64 Low(UInt64 v);
    bool Add(UInt64 v);
    void Mark(UInt64 v);
    bool Lookup(UInt64 v);
    UInt64 FindNext(UInt64 v);
    UInt64 FindPrev(UInt64 v);
    bool Remove(UInt64 v);
};
