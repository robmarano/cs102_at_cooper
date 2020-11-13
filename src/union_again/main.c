#include <stdio.h>
#include "myDataStructures.h"
#define HIGH_VALUE 999999999999999999999.0

int main(void)
{
    SENSOR_DATA_UNION dataUnion = {HIGH_VALUE};

    printf("sizeof(dataUnion) = %lu\n", sizeof(dataUnion));
    printf("addr(dataUnion) = %p\n",(void *)&dataUnion);
    printf("addr(dataUnion.temp_c) = %p\n",(void *)&dataUnion.temp_c);
    printf("addr(dataUnion.humidity) = %p\n",(void *)&dataUnion.humidity);
    printf("addr(dataUnion.pressure_pa) = %p\n",(void *)&dataUnion.pressure_pa);
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",dataUnion.temp_c, dataUnion.humidity, dataUnion.pressure_pa);

    dataUnion.temp_c = 23.4;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",dataUnion.temp_c, dataUnion.humidity, dataUnion.pressure_pa);

    dataUnion.humidity = 40.0;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",dataUnion.temp_c, dataUnion.humidity, dataUnion.pressure_pa);

    dataUnion.pressure_pa = 999999999999999101325.0;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",dataUnion.temp_c, dataUnion.humidity, dataUnion.pressure_pa);

    SENSOR_DATA_STRUCT dataStruct = {HIGH_VALUE,HIGH_VALUE,HIGH_VALUE};
    printf("sizeof(dataStruct) = %lu\n", sizeof(dataStruct));
    printf("addr(dataStruct) = %p\n",(void *)&dataStruct);
    printf("addr(dataStruct.temp_c) = %p\n",(void *)&dataStruct.temp_c);
    printf("addr(dataStruct.humidity) = %p\n",(void *)&dataStruct.humidity);
    printf("addr(dataStruct.pressure_pa) = %p\n",(void *)&dataStruct.pressure_pa);

    dataStruct.temp_c = 23.4;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",dataStruct.temp_c, dataStruct.humidity, dataStruct.pressure_pa);

    dataStruct.humidity = 40.0;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",dataStruct.temp_c, dataStruct.humidity, dataStruct.pressure_pa);

    dataStruct.pressure_pa = 101325.0;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",dataStruct.temp_c, dataStruct.humidity, dataStruct.pressure_pa);

    return(0);
}
