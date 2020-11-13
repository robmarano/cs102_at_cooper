#ifndef MY_DATASTRUCTURES_H
#define MY_DATASTRUCTURES_H

typedef union sensorDataUnion
{
    float temp_c;
    float humidity;
    double pressure_pa;
} SENSOR_DATA_UNION;

typedef struct sensorDataStruct
{
    float temp_c;
    float humidity;
    double pressure_pa;
} SENSOR_DATA_STRUCT;

#endif /* MY_DATASTRUCTURES_H */
