#include "ClearScene.h"
#include "Novice.h"
#include "InputManager.h"
#include "Game.h"

void ClearScene::Update() {
    if (InputManager::GetInstance()->IsKeyPressed(DIK_ESCAPE)) {
        Game::GetInstance()->Exit();
    }
}

void ClearScene::Draw() {
    Novice::ScreenPrintf(10, 10, "CLEAR! \nESC Exit......");
}
