#ifndef DEXDTO_H
#define DEXDTO_H

#include "uint256.h"

namespace dex {

struct CountryInfo {
    std::string iso;
    std::string name;
    bool enabled;
};

struct CurrencyInfo {
    std::string iso;
    std::string name;
    std::string symbol;
    bool enabled;
};

struct PaymentMethodInfo {
    unsigned char type;
    std::string name;
    std::string description;
};

struct OfferInfo {
    uint256 idTransaction;
    uint256 hash;
    std::string countryIso;
    std::string currencyIso;
    uint8_t paymentMethod;
    uint64_t price;
    uint64_t minAmount;
    uint64_t timeCreate;
    int timeToExpiration;
    std::string shortInfo;
    std::string details;
};

enum TypeOffer {
    Buy,
    Sell
};

enum StatusOffer {
    Active,
    Draft,
    Expired,
    Cancelled,
    Suspended
};

struct MyOfferInfo : OfferInfo {
    TypeOffer type;
    StatusOffer status;

    OfferInfo getOfferInfo() const {
        OfferInfo info;

        info.idTransaction = idTransaction;
        info.hash = hash;
        info.countryIso = countryIso;
        info.currencyIso = currencyIso;
        info.paymentMethod = paymentMethod;
        info.price = price;
        info.minAmount = minAmount;
        info.timeCreate = timeCreate;
        info.timeToExpiration = timeToExpiration;
        info.shortInfo = shortInfo;
        info.details = details;

        return info;
    }

    void setOfferInfo(const OfferInfo &info) {
        idTransaction = info.idTransaction;
        hash = info.hash;
        countryIso = info.countryIso;
        currencyIso = info.currencyIso;
        paymentMethod = info.paymentMethod;
        price = info.price;
        minAmount = info.minAmount;
        timeCreate = info.timeCreate;
        timeToExpiration = info.timeToExpiration;
        shortInfo = info.shortInfo;
        details = info.details;
    }
};

}

#endif