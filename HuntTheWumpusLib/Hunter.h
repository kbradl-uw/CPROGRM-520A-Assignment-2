#pragma once

#include "Denizen.h"

namespace HuntTheWumpus
{
    class Arrow;

    class Hunter final : public Denizen
    {
    public:
        Hunter();
        ~Hunter() override = default;

        Hunter(const Hunter&) = delete;
        Hunter(Hunter&&) = delete;
        Hunter& operator=(const Hunter&) = delete;
        Hunter& operator=(Hunter&&) = delete;
    };
}
