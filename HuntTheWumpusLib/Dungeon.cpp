#include "Dungeon.h"

#include "Cave.h"
#include "Bat.h"
#include "Wumpus.h"
#include "Hunter.h"
#include "Pit.h"

#include "Context.h"
#include "RandomProvider.h"

#include <stdexcept>
#include <string>

namespace HuntTheWumpus
{
    Dungeon::Dungeon(Context& providers)
        : m_providers(providers)
    {
        Initialize(providers);
    }

    void Dungeon::Initialize(Context& providers)
    {
    }

    void Dungeon::MakeTunnels()
    {
        // The set of tunnels to realize the collapsed dodecahedron
        const std::vector<std::pair<int, std::vector<int> > > tunnelPairs = {
            { 1, {2, 5, 8} },
            { 2, {1, 3, 10} },
            { 3, {2, 4, 12} },
            { 4, {3, 5, 14} },
            { 5, {1, 4, 6} },
            { 6, { 5, 7, 15} },
            { 7, {6, 8, 17} },
            { 8, {1, 7, 9} },
            { 9, {8, 10, 18} },
            { 10, {2, 9, 11} },
            { 11, {10, 12, 19} },
            { 12, {3, 11, 13} },
            { 13, {12, 14, 20 }  },
            { 14, {4, 13, 15} },
            { 15, {6, 14, 16} },
            { 16, {15, 17, 20} },
            { 17, {7, 16, 18} },
            { 18, {9, 17, 19} },
            { 19, {11, 18, 20} },
            { 20, {13, 16, 19} }
        };
    }

    void Dungeon::AddToCave(const std::shared_ptr<Denizen>& denizen, const int caveId)
    {
    }
}
