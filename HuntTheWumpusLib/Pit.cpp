#include "Pit.h"

#include "Context.h"

namespace HuntTheWumpus
{
    Pit::Pit(const int pitInstance)
        : Denizen({ Category::Pit, pitInstance }, { false, false, true, false, false })
    {
    }
}
