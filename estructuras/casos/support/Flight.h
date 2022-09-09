#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Quiz #6
// 1. Utilizando esta classe agregue los atributos del vuelo: aerolinea, numero de vuelo, cantidad de pasajeros
// 2. Complete el constructor de la clase, de tal forma que se pueda modificar el flightTime para una hora y minutos específicos
// 3. Implementar alguna forma de convertir el time a un número entero de tal forma que entre menor la hora menor el número, eso en getIntTimeValue()
// 4. En el test.cpp, implementar la función fillFlights()
// fecha de entrega: jueves 8 de setiembre antes de las 10pm
// entrega al asistente al correo: kevinqj.2002@gmail.com
// subject: estructuras de datos - quiz #6
// adjuntan el archivo test.cpp y Flight.h

class Flight {

    private: 
        string airline;
        int flightID;
        int passengers;
        time_t flightTime;

    public: 
        Flight(int pHour, int pMinutes) {
            initFlightTime(pHour, pMinutes);    //
        }

        char* flightTimeString() {
            char* result = ctime(&flightTime);
            return result;
        }

        int getIntTimeValue() { // Convierte solo a horas y minutos en segundos para representar valor
            tm* currentTime = localtime(&flightTime);
            int result = (currentTime->tm_hour*3600) + (currentTime->tm_min*60);
            return result;
        }
    
    private:
        void initFlightTime(int pHour, int pMinutes) {
            flightTime = time(NULL);
            tm *currentTime = localtime(&flightTime);
            flightTime -= (currentTime->tm_hour * 3600);    // Ignora current hour
            flightTime -= (currentTime->tm_min * 60);       //        current min
            flightTime -= (currentTime->tm_sec);            //        current sec
            flightTime += (pHour*3600) + (pMinutes*60); // Incluye desired time
        }
};
