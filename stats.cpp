#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& Data) 

{
    
    
    //Implement statistics here
    float minimum;
    float maximum;
    
    if(Data.size())
    {
        for(i=0; i<  float(Data.size()); i++)
        {
            sum += Data[i];
        }
        average_loc = sum/float(Data.size());
        
        maximum = Data[0];
        minimum = Data[0];
        for (int i=0; i< int(Data.size()); i++)
        {
            if (maximum < Data[i])
            {
                maximum = Data[i];
            }
        }
        else 
        {
            average_loc = 0.0/0.0;
            maximum     = 0.0/0.0;
            minimum     = 0.0/0.0;
        }
        
    }
}
