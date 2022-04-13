#include "Cave.h"
#include "Dungeon.h"
#include "Context.h"

#include <TestHarness.h>

#include "TestHelperTestEnvironment.h"

namespace TestHuntTheWumpus
{
    TEST(CaveSuite, CaveConstruction)
    {
        TestEnvironment env;

        const HuntTheWumpus::Cave cave(57, env.m_dungeon);

        CHECK_EQUAL(57, cave.GetCaveId());
        CHECK_EQUAL(&env.m_dungeon, &cave.GetDungeon());

        CHECK(cave.GetConnectedIds().empty());
    }
}
