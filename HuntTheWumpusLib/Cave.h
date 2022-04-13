#pragma once

#include "Denizen.h"

#include <memory>
#include <set>
#include <unordered_map>
#include <vector>

namespace HuntTheWumpus
{
    class IDungeon;

    class Cave
    {
    public:
        explicit Cave(int caveId, IDungeon &dungeon);
        ~Cave() = default;

        bool HasDenizens() const { return !m_denizens.empty(); }
        bool HasDenizen(const DenizenIdentifier &identifier) const;

        IDungeon &GetDungeon() const { return m_dungeon; }

        Cave() = delete;
        Cave(const Cave&) = delete;
        Cave(Cave&&) = delete;
        Cave& operator=(const Cave&) = delete;
        Cave& operator=(Cave&&) = delete;

    private:
        IDungeon &m_dungeon;
    };
}
