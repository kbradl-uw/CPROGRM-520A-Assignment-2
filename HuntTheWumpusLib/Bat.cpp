#include "Bat.h"

#include "Cave.h"
#include "Context.h"

namespace HuntTheWumpus
{
    Bat::Bat(const int batInstance)
        : Denizen(DenizenIdentifier{ Category::Bat, batInstance }, { false, false, false, false, false })
    {
    }
}
