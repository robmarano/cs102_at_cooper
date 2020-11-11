#include <stdio.h>
#include "myDataStructures.h"

int main(void)
{
    union sensorData data;

    printf("sizeof(data) = %lu\n", sizeof(data));
    printf("addr(data) = %p\n",(void *)&data);
    printf("addr(data.temp_c) = %p\n",(void *)&data.temp_c);
    printf("addr(data.humidity) = %p\n",(void *)&data.humidity);
    printf("addr(data.pressure_pa) = %p\n",(void *)&data.pressure_pa);

    data.temp_c = 23.4;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",data.temp_c, data.humidity, data.pressure_pa);

    data.humidity = 40.0;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",data.temp_c, data.humidity, data.pressure_pa);

    data.pressure_pa = 101325.0;
    printf("Temp = %1.2f C, Humidity = %1.2f%%, Pressure = %1.2f Pa\n",data.temp_c, data.humidity, data.pressure_pa);

    return(0);
}
