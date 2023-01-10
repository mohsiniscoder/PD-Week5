#include<iostream>
using namespace std;
float volume_of_pyramid(float length, float width, float height,string unit);
main()
{
float length,width,height;
string unit;
cout<<"Enter Length of pyramid=";
cin>>length;
cout<<"Enter width of pyramid=";
cin>>width;
cout<<"Enter height of pyramid=";
cin>>height;
cout<<"Enter the unit You want the answer in i.e mm,cm,m,km = ";
cin>>unit;
float answer  = volume_of_pyramid(length,width,height,unit);
cout<<"Volume of pyramid is =  "<<answer<< " Cubic "<<unit;  
}
float volume_of_pyramid(float length, float width, float height,string unit){
    float volume;
if ( unit == "mm" )
{
 volume = ((length*1000)*(width*1000)*(height*1000))/3.0;
}
else if(unit == "cm")
{
volume = ((length*100)*(width*100)*(height*100))/3.0;
}
else if(unit == "m")
{
volume = (length*width*height)/3.0;
}
else if(unit == "km")
{

volume = ((length/1000)*(width/1000)*(height/1000))/3.0;

}
return volume;
}