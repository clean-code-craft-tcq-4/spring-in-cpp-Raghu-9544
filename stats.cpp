#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& Data) 

{
    
    
    //Implement statistics here
    float minimum;
    float maximum;
    
    if(Data.size())
    {
        for(i=0; i< Data.size(); i++)
        {
            sum += Data[i];
        }
        average_loc = sum/Data.size();
    }
}
