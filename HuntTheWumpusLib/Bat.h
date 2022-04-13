#pragma once

#include "Denizen.h"

namespace HuntTheWumpus
{
    class Bat final : public Denizen
    {
    public:
        Bat(int batInstance);
        ~Bat() override = default;

        Bat(const Bat &) = delete;
        Bat(Bat &&) = delete;
        Bat &operator=(const Bat &) = delete;
        Bat &operator=(Bat &&) = delete;
    };
}
