// ======================================================================
// \title  QueuedCommandsTestMain.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for QueuedCommands component test harness implementation class
// ======================================================================

#include "QueuedCommandsTester.hpp"

TEST(Nominal, toDo) {
  QueuedCommandsTester tester;
  tester.toDo();
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
