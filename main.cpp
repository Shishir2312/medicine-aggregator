#include <iostream>
using namespace std;



 struct medicine
{
    string name;
    string price;
    string quantity;
    string bank_offer;
    
};



medicine medi[9];
medicine tata1mg[9];
medicine truemed[9];
medicine apollo[9];
medicine mediMart[9];
medicine wellness[9];
medicine netmedds[9];

void setdata()
{
    medi[0].name ="crocin";
    medi[1].name="avil 25";
    medi[2].name = "cofsils";
    medi[3].name = "digene";
    medi[4].name = "roko";
    medi[5].name = "volini";
    medi[6].name = "ondem";
    medi[7].name = "dolo 650";
    medi[8].name = "soframycin";
    
    
 
 
    apollo[0].quantity = "not available";
    apollo[0].price = "₹19";
    apollo[0].bank_offer = "no bank offer available";
    
    
    truemed[0].quantity = "it is available";
    truemed[0].price = "₹18";
    truemed[0].bank_offer = "yes 5\% off on HDFC Bank";
    
    mediMart[0].quantity = "yes it is available";
    mediMart[0].price = "₹20.38";
    mediMart[0].bank_offer = "no offers available";
    
    wellness[0].quantity = "yes is available";
    wellness[0].price = "₹22.62";
    wellness[0].bank_offer = "yes 3\% off HSBC Bank";
    
    tata1mg[0].quantity = "yes it is available";
    tata1mg[0].price = "₹21";
    tata1mg[0].bank_offer = "yes 5\% off on Kotak Bank";
    
    
    netmedds[0].quantity = "yes it is available ";
    netmedds[0].price = "₹18.1";
    netmedds[0].bank_offer = "no";
    
    apollo[1].quantity = "available";
    apollo[1].price = "₹8.84";
    apollo[1].bank_offer = "no bank offer available";
    
    
    truemed[1].quantity = "it is available";
    truemed[1].price = "₹6.6";
    truemed[1].bank_offer = "yes  3\% off on HDFC Bank";
    
    mediMart[1].quantity = "yes it is available";
    mediMart[1].price = "₹9.97";
    mediMart[1].bank_offer = "yes 5\% off on AXIS Bank";
    
    wellness[1].quantity = "yes is available";
    wellness[1].price = "₹10";
    wellness[1].bank_offer = "yes  3\%  off  HSBC Bank";
    
    tata1mg[1].quantity = "yes it is available";
    tata1mg[1].price = "₹9.97";
    tata1mg[1].bank_offer = "yes 5\% off on Kotak Bank";
    
    
    netmedds[1].quantity = "yes it is available ";
    netmedds[1].price = "₹7.98";
    netmedds[1].bank_offer = "yes  1\% off on Ambernath Co Bank ";


    apollo[2].quantity = " available";
    apollo[2].price = "₹28.5";
    apollo[2].bank_offer = "yes  3\% off BANK OF AMERICA Credit Cards ";
    
    
    truemed[2].quantity = "not available";
    truemed[2].price = "₹21.82";
    truemed[2].bank_offer = "yes  3\% off on HDFC Bank";
    
    mediMart[2].quantity = "yes it is available";
    mediMart[2].price = "₹30";
    mediMart[2].bank_offer = "no offer available";
    
    wellness[2].quantity = "yes is available";
    wellness[2].price = "₹30";
    wellness[2].bank_offer = "yes  3\%  off  Ambernath Co Bank";
    
    tata1mg[2].quantity = "not  available";
    tata1mg[2].price = "₹26";
    tata1mg[2].bank_offer = "yes 5\% off on Kotak Bank";
    
    
    netmedds[2].quantity = "yes it is available ";
    netmedds[2].price = "₹23.1";
    netmedds[2].bank_offer = "yes  2\% off on Ambernath Co Bank ";
    
    
    apollo[3].quantity = " available";
    apollo[3].price = "₹20.42";
    apollo[3].bank_offer = "yes  3\% off BANK OF AMERICA Credit Cards ";
    
    
    truemed[3].quantity = " available";
    truemed[3].price = "₹17.56";
    truemed[3].bank_offer = "yes  3\% off on ICICI Bank";
    
    mediMart[3].quantity = "yes it is available";
    mediMart[3].price = "₹21.95";
    mediMart[3].bank_offer = "5\% off on IDBI Bank";
    
    wellness[3].quantity = "yes is available";
    wellness[3].price = "₹19.96";
    wellness[3].bank_offer = "yes  3\%  off  Ambernath Co Bank";
    
    tata1mg[3].quantity = "not  available";
    tata1mg[3].price = "₹19";
    tata1mg[3].bank_offer = "yes 5\% off on Kotak Bank";
    
    
    netmedds[3].quantity = "yes it is available ";
    netmedds[3].price = "₹18.28";
    netmedds[3].bank_offer = "no offer available ";
    
    
    apollo[4].quantity = "not  available";
    apollo[4].price = "₹20.7";
    apollo[4].bank_offer = "yes  5\% off BANK OF AMERICA Credit Cards ";
    
    
    truemed[4].quantity = " available";
    truemed[4].price = "₹11.25";
    truemed[4].bank_offer = "yes  3\% off on ICICI Bank";
    
    mediMart[4].quantity = "yes it is available";
    mediMart[4].price = "₹22.96";
    mediMart[4].bank_offer = "yes  5\% off on ICICI Bank";
    
    wellness[4].quantity = "yes is available";
    wellness[4].price = "₹21.81";
    wellness[4].bank_offer = "yes  5\%  off  Ambernath Co Bank";
    
    tata1mg[4].quantity = " available";
    tata1mg[4].price = "₹15";
    tata1mg[4].bank_offer = "no offer available";
    
    
    netmedds[4].quantity = "yes it is available ";
    netmedds[4].price = "₹18.37";
    netmedds[4].bank_offer = "no offer available ";
    
    
    apollo[5].quantity = " available";
    apollo[5].price = "₹187.2";
    apollo[5].bank_offer = "yes  5\% off BANK OF AMERICA Credit Cards ";
    
    
    truemed[5].quantity = " available";
    truemed[5].price = "₹166.4";
    truemed[5].bank_offer = "yes  3\% off on ICICI Bank";
    
    mediMart[5].quantity = "not  available";
    mediMart[5].price = "₹208";
    mediMart[5].bank_offer = "yes  5\% off on ICICI Bank";
    
    wellness[5].quantity = "yes is available";
    wellness[5].price = "₹208";
    wellness[5].bank_offer = "yes  5\%  off  Corporation  Bank";
    
    tata1mg[5].quantity = " available";
    tata1mg[5].price = "₹177";
    tata1mg[5].bank_offer = "yes 3\% off on YES Bank";
    
    
    netmedds[5].quantity = "yes it is available ";
    netmedds[5].price = "₹176.8";
    netmedds[5].bank_offer = "no offer available ";
    
    
    apollo[6].quantity = "not  available";
    apollo[6].price = "₹53.36";
    apollo[6].bank_offer = "yes  5\% off BANK OF AMERICA Credit Cards ";
    
    
    truemed[6].quantity = " available";
    truemed[6].price = "₹46.62";
    truemed[6].bank_offer = "yes  5\% off on HDFC Bank";
    
    mediMart[6].quantity = " available";
    mediMart[6].price = "₹58.27";
    mediMart[6].bank_offer = "yes  3\% off on ICICI Bank";
    
    wellness[6].quantity = "yes is available";
    wellness[6].price = "₹49.98";
    wellness[6].bank_offer = "yes  3\%  off  Corporation  Bank";
    
    tata1mg[6].quantity = " available";
    tata1mg[6].price = "₹58.27";
    tata1mg[6].bank_offer = "no  offer available";
    
    
    netmedds[7].quantity = "yes it is available ";
    netmedds[7].price = "₹46.62";
    netmedds[7].bank_offer = "no offer available ";
    
    
    apollo[7].quantity = "not  available";
    apollo[7].price = "₹32.31";
    apollo[7].bank_offer = "yes  3\% off BANK OF AMERICA Credit Cards ";
    
    
    truemed[7].quantity = " available";
    truemed[7].price = "₹27.42";
    truemed[7].bank_offer = "no offer available";
    
    mediMart[7].quantity = "not  available";
    mediMart[7].price = "₹30.91";
    mediMart[7].bank_offer = "5\% off on KOTAK Bank";
    
    wellness[7].quantity = "yes is available";
    wellness[7].price = "₹32.63";
    wellness[7].bank_offer = "yes  3\%  off  Corporation  Bank";
    
    tata1mg[7].quantity = " available";
    tata1mg[7].price = "₹26";
    tata1mg[7].bank_offer = "no  offer available";
    
    
    netmedds[7].quantity = "yes it is available ";
    netmedds[7].price = "₹27.42";
    netmedds[7].bank_offer = "no offer available ";
    
    
    apollo[8].quantity = " available";
    apollo[8].price = "₹164.83";
    apollo[8].bank_offer = "yes  3\% off BANK OF AMERICA Credit Cards ";
    
    
    truemed[8].quantity = " not available";
    truemed[8].price = "₹138.91";
    truemed[8].bank_offer = "no offer available";
    
    mediMart[8].quantity = "not  available";
    mediMart[8].price = "₹173.64";
    mediMart[8].bank_offer = "5\% off on KOTAK Bank";
    
    wellness[8].quantity = "not available";
    wellness[8].price = "₹164.96";
    wellness[8].bank_offer = "yes  5\%  off  Corporation  Bank";
    
    tata1mg[8].quantity = "not  available";
    tata1mg[8].price = "₹148";
    tata1mg[8].bank_offer = "3\% off on Ambernath Co Bank";
    
    
    netmedds[8].quantity = "yes it is available ";
    netmedds[8].price = "₹138.91";
    netmedds[8].bank_offer = "no offer available ";


}

void showdata(string user_input)
{
    
    if(user_input == "crocin")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"crocin\t\t\t\t apollo pharmacy\t\t"<<apollo[0].price<<" \t\t "<<apollo[0].quantity<<" \t\t"<<apollo[0].bank_offer<<endl;
       cout<<"crocin\t\t\t\t Truemeds\t\t"<<truemed[0].price<<" \t\t "<<truemed[0].quantity<<" \t\t"<<" \t\t"<<truemed[0].bank_offer<<" "<<endl;
       cout<<"crocin\t\t\t\t Medplusmart\t\t"<<mediMart[0].price<<" \t\t "<<mediMart[0].quantity<<" \t\t"<<" \t\t"<<mediMart[0].bank_offer<<" "<<endl;
       cout<<"crocin\t\t\t\t Wellness\t\t"<<wellness[0].price<<" \t\t "<<wellness[0].quantity<<" \t\t"<<" \t\t"<<wellness[0].bank_offer<<" "<<endl;
       cout<<"crocin\t\t\t\t Tata1mg\t\t"<<tata1mg[0].price<<" \t\t "<<tata1mg[0].quantity<<" \t\t"<<" \t\t"<<tata1mg[0].bank_offer<<" "<<endl;    
       cout<<"crocin\t\t\t\t Netmeds\t\t"<<netmedds[0].price<<" \t\t "<<netmedds[0].quantity<<" \t\t"<<" \t\t"<<netmedds[0].bank_offer<<" "<<endl;
        
    }
    if(user_input == "avil 25")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"avil 25\t\t\t\t apollo pharmacy\t\t"<<apollo[1].price<<" \t\t "<<apollo[1].quantity<<" \t\t"<<apollo[1].bank_offer<<endl;
       cout<<"avil 25\t\t\t\t Truemeds\t\t"<<truemed[1].price<<" \t\t "<<truemed[1].quantity<<" \t\t"<<" \t\t"<<truemed[1].bank_offer<<" "<<endl;
       cout<<"avil 25\t\t\t\t Medplusmart\t\t"<<mediMart[1].price<<" \t\t "<<mediMart[1].quantity<<" \t\t"<<" \t\t"<<mediMart[1].bank_offer<<" "<<endl;
       cout<<"avil 25\t\t\t\t Wellness\t\t"<<wellness[1].price<<" \t\t "<<wellness[1].quantity<<" \t\t"<<" \t\t"<<wellness[1].bank_offer<<" "<<endl;
       cout<<"avil 25\t\t\t\t Tata1mg\t\t"<<tata1mg[1].price<<" \t\t "<<tata1mg[1].quantity<<" \t\t"<<" \t\t"<<tata1mg[1].bank_offer<<" "<<endl;    
       cout<<"avil 25\t\t\t\t Netmeds\t\t"<<netmedds[1].price<<" \t\t "<<netmedds[1].quantity<<" \t\t"<<" \t\t"<<netmedds[1].bank_offer<<" "<<endl;
    }
    if(user_input == "cofsils")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"cofsils\t\t\t\t apollo pharmacy\t\t"<<apollo[2].price<<" \t\t "<<apollo[2].quantity<<" \t\t"<<apollo[1].bank_offer<<endl;
       cout<<"cofsils\t\t\t\t Truemeds\t\t"<<truemed[2].price<<" \t\t "<<truemed[2].quantity<<" \t\t"<<" \t\t"<<truemed[1].bank_offer<<" "<<endl;
       cout<<"cofsils\t\t\t\t Medplusmart\t\t"<<mediMart[2].price<<" \t\t "<<mediMart[2].quantity<<" \t\t"<<" \t\t"<<mediMart[1].bank_offer<<" "<<endl;
       cout<<"cofsils\t\t\t\t Wellness\t\t"<<wellness[2].price<<" \t\t "<<wellness[2].quantity<<" \t\t"<<" \t\t"<<wellness[1].bank_offer<<" "<<endl;
       cout<<"cofsils\t\t\t\t Tata1mg\t\t"<<tata1mg[2].price<<" \t\t "<<tata1mg[2].quantity<<" \t\t"<<" \t\t"<<tata1mg[1].bank_offer<<" "<<endl;    
       cout<<"cofsils\t\t\t\t Netmeds\t\t"<<netmedds[2].price<<" \t\t "<<netmedds[2].quantity<<" \t\t"<<" \t\t"<<netmedds[1].bank_offer<<" "<<endl;
    }
    if(user_input == "digene")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"digene\t\t\t\t apollo pharmacy\t\t"<<apollo[3].price<<" \t\t "<<apollo[3].quantity<<" \t\t"<<apollo[3].bank_offer<<endl;
       cout<<"digene\t\t\t\t Truemeds\t\t"<<truemed[3].price<<" \t\t "<<truemed[3].quantity<<" \t\t"<<" \t\t"<<truemed[3].bank_offer<<" "<<endl;
       cout<<"digene\t\t\t\t Medplusmart\t\t"<<mediMart[3].price<<" \t\t "<<mediMart[3].quantity<<" \t\t"<<" \t\t"<<mediMart[3].bank_offer<<" "<<endl;
       cout<<"digene\t\t\t\t Wellness\t\t"<<wellness[3].price<<" \t\t "<<wellness[3].quantity<<" \t\t"<<" \t\t"<<wellness[3].bank_offer<<" "<<endl;
       cout<<"digene\t\t\t\t Tata1mg\t\t"<<tata1mg[3].price<<" \t\t "<<tata1mg[3].quantity<<" \t\t"<<" \t\t"<<tata1mg[3].bank_offer<<" "<<endl;    
       cout<<"digene\t\t\t\t Netmeds\t\t"<<netmedds[3].price<<" \t\t "<<netmedds[3].quantity<<" \t\t"<<" \t\t"<<netmedds[3].bank_offer<<" "<<endl;
    }
    if(user_input == "roko")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"roko\t\t\t\t apollo pharmacy\t\t"<<apollo[4].price<<" \t\t "<<apollo[4].quantity<<" \t\t"<<apollo[4].bank_offer<<endl;
       cout<<"roko\t\t\t\t Truemeds\t\t"<<truemed[4].price<<" \t\t "<<truemed[4].quantity<<" \t\t"<<" \t\t"<<truemed[4].bank_offer<<" "<<endl;
       cout<<"roko\t\t\t\t Medplusmart\t\t"<<mediMart[4].price<<" \t\t "<<mediMart[4].quantity<<" \t\t"<<" \t\t"<<mediMart[4].bank_offer<<" "<<endl;
       cout<<"roko\t\t\t\t Wellness\t\t"<<wellness[4].price<<" \t\t "<<wellness[4].quantity<<" \t\t"<<" \t\t"<<wellness[4].bank_offer<<" "<<endl;
       cout<<"roko\t\t\t\t Tata1mg\t\t"<<tata1mg[4].price<<" \t\t "<<tata1mg[4].quantity<<" \t\t"<<" \t\t"<<tata1mg[4].bank_offer<<" "<<endl;    
       cout<<"roko\t\t\t\t Netmeds\t\t"<<netmedds[4].price<<" \t\t "<<netmedds[4].quantity<<" \t\t"<<" \t\t"<<netmedds[4].bank_offer<<" "<<endl;
    }
    if(user_input == "volini")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"volini\t\t\t\t apollo pharmacy\t\t"<<apollo[5].price<<" \t\t "<<apollo[5].quantity<<" \t\t"<<apollo[5].bank_offer<<endl;
       cout<<"volini\t\t\t\t Truemeds\t\t"<<truemed[5].price<<" \t\t "<<truemed[5].quantity<<" \t\t"<<" \t\t"<<truemed[5].bank_offer<<" "<<endl;
       cout<<"volini\t\t\t\t Medplusmart\t\t"<<mediMart[5].price<<" \t\t "<<mediMart[5].quantity<<" \t\t"<<" \t\t"<<mediMart[5].bank_offer<<" "<<endl;
       cout<<"volini\t\t\t\t Wellness\t\t"<<wellness[5].price<<" \t\t "<<wellness[5].quantity<<" \t\t"<<" \t\t"<<wellness[5].bank_offer<<" "<<endl;
       cout<<"volini\t\t\t\t Tata1mg\t\t"<<tata1mg[5].price<<" \t\t "<<tata1mg[5].quantity<<" \t\t"<<" \t\t"<<tata1mg[5].bank_offer<<" "<<endl;    
       cout<<"volini\t\t\t\t Netmeds\t\t"<<netmedds[5].price<<" \t\t "<<netmedds[5].quantity<<" \t\t"<<" \t\t"<<netmedds[5].bank_offer<<" "<<endl;
    }
    if(user_input == "ondem")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"ondem\t\t\t\t apollo pharmacy\t\t"<<apollo[6].price<<" \t\t "<<apollo[6].quantity<<" \t\t"<<apollo[6].bank_offer<<endl;
       cout<<"ondem\t\t\t\t Truemeds\t\t"<<truemed[6].price<<" \t\t "<<truemed[6].quantity<<" \t\t"<<" \t\t"<<truemed[6].bank_offer<<" "<<endl;
       cout<<"ondem\t\t\t\t Medplusmart\t\t"<<mediMart[6].price<<" \t\t "<<mediMart[6].quantity<<" \t\t"<<" \t\t"<<mediMart[6].bank_offer<<" "<<endl;
       cout<<"ondem\t\t\t\t Wellness\t\t"<<wellness[6].price<<" \t\t "<<wellness[6].quantity<<" \t\t"<<" \t\t"<<wellness[6].bank_offer<<" "<<endl;
       cout<<"ondem\t\t\t\t Tata1mg\t\t"<<tata1mg[6].price<<" \t\t "<<tata1mg[6].quantity<<" \t\t"<<" \t\t"<<tata1mg[6].bank_offer<<" "<<endl;    
       cout<<"ondem\t\t\t\t Netmeds\t\t"<<netmedds[6].price<<" \t\t "<<netmedds[6].quantity<<" \t\t"<<" \t\t"<<netmedds[6].bank_offer<<" "<<endl;
    }
    if(user_input == "dolo 650")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"dolo 650\t\t\t\t apollo pharmacy\t\t"<<apollo[7].price<<" \t\t "<<apollo[7].quantity<<" \t\t"<<apollo[7].bank_offer<<endl;
       cout<<"dolo 650\t\t\t\t Truemeds\t\t"<<truemed[7].price<<" \t\t "<<truemed[7].quantity<<" \t\t"<<" \t\t"<<truemed[7].bank_offer<<" "<<endl;
       cout<<"dolo 650\t\t\t\t Medplusmart\t\t"<<mediMart[7].price<<" \t\t "<<mediMart[7].quantity<<" \t\t"<<" \t\t"<<mediMart[7].bank_offer<<" "<<endl;
       cout<<"dolo 650\t\t\t\t Wellness\t\t"<<wellness[7].price<<" \t\t "<<wellness[7].quantity<<" \t\t"<<" \t\t"<<wellness[7].bank_offer<<" "<<endl;
       cout<<"dolo 650\t\t\t\t Tata1mg\t\t"<<tata1mg[7].price<<" \t\t "<<tata1mg[7].quantity<<" \t\t"<<" \t\t"<<tata1mg[7].bank_offer<<" "<<endl;    
       cout<<"dolo 650\t\t\t\t Netmeds\t\t"<<netmedds[7].price<<" \t\t "<<netmedds[7].quantity<<" \t\t"<<" \t\t"<<netmedds[7].bank_offer<<" "<<endl;
    }
    if(user_input == "soframycin")
    {
       cout<<"name of the medicine\t\t website\t\t price\t\t stock\t\t bank offer\t\t"<<endl;
       cout<<"soframycin\t\t\t\t apollo pharmacy\t\t"<<apollo[7].price<<" \t\t "<<apollo[7].quantity<<" \t\t"<<apollo[7].bank_offer<<endl;
       cout<<"soframycin\t\t\t\t Truemeds\t\t"<<truemed[7].price<<" \t\t "<<truemed[7].quantity<<" \t\t"<<" \t\t"<<truemed[7].bank_offer<<" "<<endl;
       cout<<"soframycin\t\t\t\t Medplusmart\t\t"<<mediMart[0].price<<" \t\t "<<mediMart[7].quantity<<" \t\t"<<" \t\t"<<mediMart[7].bank_offer<<" "<<endl;
       cout<<"soframycin\t\t\t\t Wellness\t\t"<<wellness[7].price<<" \t\t "<<wellness[7].quantity<<" \t\t"<<" \t\t"<<wellness[7].bank_offer<<" "<<endl;
       cout<<"soframycin\t\t\t\t Tata1mg\t\t"<<tata1mg[7].price<<" \t\t "<<tata1mg[7].quantity<<" \t\t"<<" \t\t"<<tata1mg[7].bank_offer<<" "<<endl;    
       cout<<"soframycin\t\t\t\t Netmeds\t\t"<<netmedds[7].price<<" \t\t "<<netmedds[7].quantity<<" \t\t"<<" \t\t"<<netmedds[7].bank_offer<<" "<<endl;
    }
}

int main()
{ 
    string apple;
    string orange;
    medicine medi[9];medicine tata1mg[9];medicine truemed[9];medicine apollo[9];medicine mediMart[9];medicine wellness[9];medicine netmeds[9];
    cout<<"Hello and welcome to Medicine Aggregator"<<endl;
    cout<<""<<endl;https://www.onlinegdb.com/#tab-stdin
    cout<<"Please enter your name: ";
    cin>>apple;
     cout<<""<<endl;
    cout<<" "<<apple<<", please enter the medicine you wish to compare: ";
    cin>>orange;
    setdata();
    showdata(orange);
    
    

    return 0;
}