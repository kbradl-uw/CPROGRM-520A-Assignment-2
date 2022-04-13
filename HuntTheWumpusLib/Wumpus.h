#pragma once

#include "Denizen.h"

namespace HuntTheWumpus
{
    class Wumpus final : public Denizen
    {
    public:
        explicit Wumpus(int instance);
        ~Wumpus() override = default;

        Wumpus(const Wumpus&) = delete;
        Wumpus(Wumpus&&) = delete;
        Wumpus& operator=(const Wumpus&) = delete;
        Wumpus& operator=(Wumpus&&) = delete;
    };
}
