
#ifndef __DEX_H__
#define __DEX_H__

#include "key.h"
#include "net.h"
#include "timedata.h"
#include "dex/dexdto.h"
#include "dexoffer.h"


class CDex
{
private:
    // critical section to protect the inner data structures
    mutable CCriticalSection cs;

public:


    CDex();
    CDex(const CDex& other);
    CDex(const CDexBroadcast& mnb);
/*
    ADD_SERIALIZE_METHODS;

    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action) {
        LOCK(cs);
        READWRITE(offer);
    }

//    void Check(bool fForce = false);

*/

};



#endif // __DEX_H__
