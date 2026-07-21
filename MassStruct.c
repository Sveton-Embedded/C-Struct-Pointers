#include <stdio.h>
#include <stdbool.h> 
#include <string.h>
#define MOTOR_COUNT 3

struct Motor
{
    char name[20];
    float voltage;
    float current;
    float temperature;
    bool motorStatus;
};


void printMotor(struct Motor *m)
{
    printf("Name        : %s\n", m->name);
    printf("Voltage     : %.1f V\n", m->voltage);
    printf("Current     : %.1f A\n", m->current);
    printf("Temperature : %.1f C\n", m->temperature);
    if(m->motorStatus)
    {
        printf("Motor Status: ON\n");
    }
    else
    {
        printf("Motor Status: OFF\n");
    }
    printf("---------------------\n"); 
}

void updateMotor(struct Motor *m)
{
    m->voltage += 10.0f;
    m->current += 3.0f;
    m->temperature -= 15.0f;
    m->motorStatus == true;

}

int main(void)
{
    
    struct Motor motors[3];


    strcpy(motors[0].name, "Siemens24");
    motors[0].voltage = 400.0f;
    motors[0].current = 22.0f;
    motors[0].temperature = 75.0f;
    motors[0].motorStatus = true;

    
    strcpy(motors[1].name, "Bosch-X");
    motors[1].voltage = 12.0f;
    motors[1].current = 1.5f;
    motors[1].temperature = 36.6f;
    motors[1].motorStatus = false;

   
    strcpy(motors[2].name, "Nidec-Pro");
    motors[2].voltage = 5.0f;
    motors[2].current = 0.8f;
    motors[2].temperature = 42.1f;
    motors[2].motorStatus = true;

     for (int i = 0; i < MOTOR_COUNT ; i++)
    {
        updateMotor(&motors[i]);
    }


    
    for (int i = 0; i < MOTOR_COUNT ; i++)
    {
        printMotor(&motors[i]);
    }

    return 0;
}