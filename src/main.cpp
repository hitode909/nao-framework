#include <string>
#include "framework/Framework.cpp"
#include "mock/MockKick.cpp"
#include "mock/MockPlanMaker.cpp"
#include "mock/MockPlanPlayer.cpp"
#include "mock/MockGlobalPosition.cpp"
#include "mock/MockLocalPosition.cpp"
#include "mock/MockGameState.cpp"
#include "mock/MockPosture.cpp"



int main(void){
  Framework framework;
  MockKick mock_kick;
  MockPlanMaker mock_plan_maker;
  MockPlanPlayer mock_paln_player;
  MockGlobalPosition mock_global_position;
  MockLocalPosition mock_local_position;
  MockGameState mock_game_state;
  MockPosture mock_posture;

  framework.ip = "123.456.789";
  framework.port = 1234;
  framework.kick = &mock_kick;
  framework.plan_maker = &mock_plan_maker;
  framework.plan_player = &mock_paln_player;
  framework.global_position = &mock_global_position;
  framework.local_position = &mock_local_position;
  framework.game_state = &mock_game_state;
  framework.posture = &mock_posture;

  framework.run();
}
