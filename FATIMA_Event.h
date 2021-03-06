#ifndef FATIMA_EVENT_H
#define FATIMA_EVENT_H

#include <iostream>
#include <cstdlib>

#include "FATIMA_Data_Struct.h"

#include "Events.h"
#include "Raw_Event.h"

// #include "FATIMA_DataStruct.h"
// #include "PLASTIC_DataStruct.h"
//#include "PLASTIC_VME_DataStruct.h"

class FATIMA_Event : public Events{

private:

  //  FATIMA_DataStruct DATA;
    FATIMA_Data DATA;
    int FAT_FIRED;
    int am_fired;
    double energy_tot;

    inline void set_DATA(Raw_Event*);


public:
    FATIMA_Event(int*,int,Raw_Event*);
    virtual ~FATIMA_Event();
    
    double get_energy();
    void Write_Event(Tree_Creator* Tree);

//    PLASTIC_DataStruct* GET_PLASTIC(){return nullptr;};
//    PLASTIC_VME_DataStruct* GET_PLASTIC_VME(){return nullptr;};

   // FATIMA_DataStruct* GET_FATIMA();
};

#endif
