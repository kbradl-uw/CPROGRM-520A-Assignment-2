#pragma once

#include "Cave.h"
#include "Context.h"
#include "Denizen.h"

namespace HuntTheWumpus
{
    class IDungeon
    {
    public:
        
        IDungeon() = default;
        virtual ~IDungeon() = default;

        virtual const std::shared_ptr<Cave> &FindCave(int caveId) = 0;

        IDungeon(const IDungeon &) = default;
        IDungeon(IDungeon &&) = default;
        IDungeon &operator=(const IDungeon &) = default;
        IDungeon &operator=(IDungeon &&) = default;
    };

    class Dungeon final : public IDungeon
    {
    public:

        explicit Dungeon(Context &providers);
        ~Dungeon() override = default;

        Dungeon(const Dungeon &) = delete;
        Dungeon(Dungeon &&) = delete;
        Dungeon &operator=(const Dungeon &) = delete;
        Dungeon &operator=(Dungeon &&) = delete;

    private:

        void Initialize(Context &providers);
        void AddDenizen(const std::shared_ptr<Denizen> &newDenizen);
        void MakeTunnels();
        void AddToCave(const std::shared_ptr<Denizen> &denizen, int caveId);

        Context &m_providers;
    };
}
