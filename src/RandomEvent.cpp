#include "../header/RandomEvent.h"

RandomEvent::RandomEvent()
 : eventNumber(0)
{ }

RandomEvent::getEventNumber() {
    eventNumber = rand() % 11 + 1;
    return eventNumber;
}
