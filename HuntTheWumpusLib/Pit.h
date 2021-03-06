#pragma once

#include "Denizen.h"

namespace HuntTheWumpus
{
    class Pit final : public Denizen
    {
    public:
        Pit(int pitInstance);
        ~Pit() override = default;

        Pit(const Pit&) = delete;
        Pit(Pit&&) = delete;
        Pit& operator=(const Pit&) = delete;
        Pit& operator=(Pit&&) = delete;
    };
}
