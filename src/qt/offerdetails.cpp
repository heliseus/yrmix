#include <QDateTime>
#include "offerdetails.h"
#include "ui_offerdetails.h"

OfferDetails::OfferDetails(QDialog *parent) : QDialog(parent), ui(new Ui::OfferDetails)
{
    ui->setupUi(this);
}

OfferDetails::~OfferDetails()
{
    delete ui;
}

void OfferDetails::setOfferInfo(const OfferInfo &info, const QString &country, const QString &currency, const QString &payment)
{
    this->info = info;

    ui->lEditId->setText(QString::fromUtf8(info.idTransaction.GetHex().c_str()));
    ui->lEditHash->setText(QString::fromUtf8(info.hash.GetHex().c_str()));
    ui->lEditCountry->setText(country);
    ui->lEditCurrency->setText(currency);
    ui->lEditPayment->setText(payment);
    ui->lEditPrice->setText(QString::number(info.price));
    ui->lEditMinAmount->setText(QString::number(info.minAmount));
    ui->lEditTimeCreate->setText(QDateTime::fromTime_t(info.timeCreate).toString("yyyy.MM.dd hh:mm:ss"));
    ui->lEditTimeExpiration->setText(QDateTime::fromTime_t(info.timeExpiration).toString("yyyy.MM.dd hh:mm:ss"));
    ui->tEditShortInfo->setText(QString::fromUtf8(info.shortInfo.c_str()));
    ui->tEditDetails->setText(QString::fromUtf8(info.details.c_str()));
}
