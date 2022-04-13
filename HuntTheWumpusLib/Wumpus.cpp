#include "Wumpus.h"

#include "Cave.h"

namespace HuntTheWumpus
{
    Wumpus::Wumpus(const int instance)
        : Denizen({ Category::Wumpus, instance }, { false, false, true, false, false })
    {
    }
}
