#include "Flight.h"
#include "../../starticketcr/generic/List.h"

using namespace std;

// debe llenar una lista de pCantidad vuelos aleatorios cuya hora y minutos de partida esten entre pStartHour y pEndHour
// tomando en cuenta las restricciones de los minutos de salida segun el ejercicio 3 del caso #3
void fillFlights(int pCantidad, int pStartHour, int pEndHour) {
    List<Flight> flightList;
    srand(time(NULL));  // Inicializa seed para std::rand()
    for (int count = 0; count < pCantidad; count++)
    {
        int randHour  = rand() % (pStartHour + pEndHour + 1);
        int randDelay = rand() % (18);
        int randMin   = rand() % (43) + randDelay;

        Flight* newFlight = new Flight(randHour, randMin);
        flightList.add(newFlight);

        // Test prints
        cout << "FlightTime Str: " << newFlight->flightTimeString();
        cout << "Time Value: " << newFlight->getIntTimeValue() << "\n\n";
    }
} 


int main() {
    fillFlights(10, 0, 9);

    Flight vuelo(4,35);
    cout << vuelo.flightTimeString() << "y el entero es: " << vuelo.getIntTimeValue() << endl;

    Flight otroVuelo(14,20);
    cout << otroVuelo.flightTimeString() << "y el entero es: " << otroVuelo.getIntTimeValue() << endl;
}