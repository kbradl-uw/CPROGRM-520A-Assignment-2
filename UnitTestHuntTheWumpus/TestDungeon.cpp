#include <TestHarness.h>

#include "Dungeon.h"

#include "Cave.h"

#include "TestHelperTestEnvironment.h"

namespace TestHuntTheWumpus
{
    TEST(DungeonSuite, TestDungeonInitialize)
    {
        TestEnvironment env;

        HuntTheWumpus::Dungeon dungeon(env.m_context);
    }
}
