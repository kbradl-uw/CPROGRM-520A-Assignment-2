#include "Cave.h"
#include "Denizen.h"

namespace HuntTheWumpus
{
    Cave::Cave(const int caveId, IDungeon& dungeon)
        : m_caveId(caveId),
        m_dungeon(dungeon)
    {
    }

    bool Cave::HasDenizen(const DenizenIdentifier &identifier) const
    {
        const auto found = std::find_if(m_denizens.begin(), m_denizens.end(), [&](const std::shared_ptr<Denizen> &denizen)
        {
            return denizen->GetIdentifier().m_category == identifier.m_category;
        });

        return found != m_denizens.end();
    }
}
