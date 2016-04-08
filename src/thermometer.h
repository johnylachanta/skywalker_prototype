#ifndef THERMOMETER_H
#define THERMOMETER_H

#include <sensor.h>
#include <si_types.h>

namespace Sensor{

struct RawThermometerData{
    int nTemp;
};

class Thermometer : public SensorBase<Celcius, RawThermometerData> {
public:
    virtual bool ReadSensorDataOnce(RawThermometerData & OutData)=0;
    virtual Celcius ConvertToSIUnit(RawThermometerData Data)=0;
};

}

#endif
