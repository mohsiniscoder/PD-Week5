#include<iostream>
using namespace std;
float tax_calc(float,char);
main()
{
float item_price,final_price;
char item_code;
cout<<"Enter the Price of Vehicle=";
cin>>item_price;
cout<<"Enter the item code=";
cin>>item_code;
float result = tax_calc(item_price,item_code); 
cout<<"Final Price After Tax is = "<<result;
}
float tax_calc(float item_price,char item_code)
{
    float final_price;
    if (item_code == 'm')
    {
        final_price = item_price+(item_price*0.06);
    }
    
    if (item_code == 'e')
    {
         final_price = item_price+(item_price*0.08);
    }
    
    if (item_code == 's')
    {
         final_price = item_price+(item_price*0.1);
    }
    if (item_code == 'v')
    {
         final_price = item_price+(item_price*0.12);
    }
      if (item_code == 't')//Mistake if (item_code = 't') '==' is used for checking the condition 
    {
         final_price = item_price+(item_price*0.15);
    }
    return final_price;
}