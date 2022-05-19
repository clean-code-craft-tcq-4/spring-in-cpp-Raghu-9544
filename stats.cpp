#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& Data) 

{
        
    //Implement statistics here
    float i;
    float sum = 0;
    float average_loc;
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
                if (minimum > Data[i])
                    {
                        minimum = Data[i];
                    }
            }
    }
        else 
            {
                average_loc = 0.0/0.0;   //NaN
                maximum     = 0.0/0.0;   //NaN
                minimum     = 0.0/0.0;   //NaN
            }
        
        Stats ComputeStatIstics1;
        ComputeStatIstics1.average  = average_loc;
        ComputeStatIstics1.max      = maximum;
        ComputeStatIstics1.min      = minimum;
        
        return ComputeStatIstics1;
        
    }

void StatsAlerter::checkAndAlert(const std::vector<float>& inputData)
    
{
    
    for (int i=0; i< int(inputData.size()); i++)
    {
        if(inputData[i] > maxThreshold)
            {
                alerters_input[0]->set_alert();
                alerters_input[1]->set_alert();
    
                break;
            }  
    }
}

