#include<iostream>
#include<cmath>
using namespace std;
void work(float hours_for_project,float num_of_days,float employees);
main()
{
    float hours_for_project;
    cout<<"Enter the Number of Hours the project is supposed to be finished ";
    cin>>hours_for_project;
    float num_of_days;
    cout<<"Enter the No# of days firm has=";
    cin>>num_of_days;
    float employees;
    cout<<"Enter the number of workers firm has=";
    cin>>employees;
    work(hours_for_project,num_of_days,employees);
}
    void work(float hours_for_project,float num_of_days,float employees)
     {
        float hours_we_get;
        float days_for_training=(num_of_days*10)/100;
        num_of_days=num_of_days-days_for_training;
        floor(num_of_days);
        hours_we_get=(num_of_days*10)*employees;
        if(hours_we_get<hours_for_project)
        {
            cout<<"Not Enough Time";
            float not_enough_time;
            not_enough_time=hours_for_project-hours_we_get;
            cout<<" :/  you need  "<<not_enough_time<<" hours more to finish this project";
        }
        if(hours_we_get>hours_for_project)
        {
            cout<<"Enough Time!!!";
            float enough_time ;
            enough_time=hours_we_get-hours_for_project;
            cout<<" :) you have"<<enough_time<<"hours of extra Time";

        }
    }