#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include "framework/Framework.cpp"
#include "mock/MockPlanMaker.cpp"
#include "mock/MockPlanPlayer.cpp"
#include "mock/MockGameState.cpp"
#include "mock/MockPositionStorage.cpp"
#include "mock/MockLocalPosition.cpp"
#include "mock/MockGlobalPosition.cpp"

int main(int argc, char *argv[]) {
  if (argc != 3) {
    std::cerr << "./a.out SERVER_HOST SERVER_PORT" << std::endl;
    std::exit(1);
  }
  std::stringstream ss;
  int port;
  std::string host;

  ss << argv[2];
  ss >> port;

  host = argv[1];

  Framework framework;
  MockPlanMaker mock_plan_maker;
  MockPlanPlayer mock_paln_player;
  MockGameState mock_game_state;
  MockPositionStorage mock_position_storage;
  MockLocalPosition mock_local_position;
  MockGlobalPosition mock_global_position;



  framework.host = host;
  framework.port = port;
  framework.plan_maker = &mock_plan_maker;
  framework.plan_player = &mock_paln_player;
  framework.game_state = &mock_game_state;
  framework.position_storage = &mock_position_storage;
  framework.position_storage->setLocalPositionInstance(&mock_local_position);
  framework.position_storage->setGlobalPositionInstance(&mock_global_position);
  framework.run();
}
