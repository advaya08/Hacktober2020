#include <iostream>

using namespace std;

int main()
{
    float startPrice, closePrice, brokage, STT, TxnCharge, GST, SEBI, Stamp;
    int count;
    double StartSum, EndSum, EndPrice, Profit;
    cout<<"Enter the start price: ";
    cin>>startPrice;
    cout<<"How many stocks have you purchased: ";
    cin>>count;
    StartSum = startPrice*count;
    cout<<"The purchased stock amount is: "<<StartSum<<endl;
    cout<<"Enter the selling amount: ";
    cin>>closePrice;
    EndSum = closePrice*count;
    cout<<"The selling stock amount is: "<<EndSum<<endl;
    brokage = (EndSum+StartSum) * 0.0001;
    cout<<"Brokage: "<<brokage<<endl;
    STT = EndSum * 0.00025;
    cout<<"STT Charge: "<<STT<<endl;
    TxnCharge = (EndSum+StartSum) * 0.0000325;
    cout<<"Transaction Charge: "<<TxnCharge<<endl;
    float bT = brokage + TxnCharge;
    cout<<"BT: "<<bT<<endl;
    GST = bT * 0.018;
    cout<<"GST: "<<GST<<endl;
    SEBI = (EndSum+StartSum) *0.000001;
    cout<<"BT: "<<bT<<endl;
    Stamp = (EndSum+StartSum) *0.00002;
    cout<<"Stamp Charges: "<<Stamp<<endl;
    double total = brokage + STT + TxnCharge + GST + SEBI + Stamp;
    cout<<"Total Transaction Charge: "<<total<<endl;
    EndPrice = EndSum - StartSum;
    cout<<"Total Profit without taxes: "<<EndPrice<<endl;
    Profit = EndPrice - total;
    cout<<"Total profit after paying taxes: "<<Profit;
}
