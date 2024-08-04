#include "TitleScene.h"
#include "StageScene.h" 
#include "Novice.h"
#include "InputManager.h"
#include "Game.h"

void TitleScene::Update() {
    if (InputManager::GetInstance()->IsKeyPressed(DIK_SPACE)) {
        Game::GetInstance()->ChangeScene(new StageScene());
    }
}

void TitleScene::Draw() {
    Novice::ScreenPrintf(10, 10, "SPACE to START");
}
