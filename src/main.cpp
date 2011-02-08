#include <string>
#include <sstream>
#include <iostream>
#include "framework/Framework.cpp"
#include "mock/MockKick.cpp"
#include "mock/MockPlanMaker.cpp"
#include "mock/MockPlanPlayer.cpp"
#include "mock/MockGlobalPosition.cpp"
#include "mock/MockLocalPosition.cpp"
#include "mock/MockGameState.cpp"
#include "mock/MockPosture.cpp"

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "./a.out SERVER_HOST SERVER_PORT" << std::endl;
    exit(1);
  }
  std::stringstream ss;
  int port;
  std::string ip;

  ss << argv[2];
  ss >> port;

  ip = argv[1];

  Framework framework;
  MockKick mock_kick;
  MockPlanMaker mock_plan_maker;
  MockPlanPlayer mock_paln_player;
  MockGlobalPosition mock_global_position;
  MockLocalPosition mock_local_position;
  MockGameState mock_game_state;
  MockPosture mock_posture;

  framework.ip = ip;
  framework.port = port;
  framework.kick = &mock_kick;
  framework.plan_maker = &mock_plan_maker;
  framework.plan_player = &mock_paln_player;
  framework.global_position = &mock_global_position;
  framework.local_position = &mock_local_position;
  framework.game_state = &mock_game_state;
  framework.posture = &mock_posture;

  framework.run();
}
