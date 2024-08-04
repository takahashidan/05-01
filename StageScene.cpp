#include "StageScene.h"
#include "Novice.h"
#include "InputManager.h"
#include "Game.h"
#include "ClearScene.h"

StageScene::StageScene() : enemyCount(5) {} // コンストラクタ定義

void StageScene::Update() {
    if (enemyCount == 0) {
        Game::GetInstance()->ChangeScene(new ClearScene());
    }

    // シンプルな敵のロジック
    if (InputManager::GetInstance()->IsKeyPressed(DIK_SPACE)) {
        enemyCount--;
    }
}

void StageScene::Draw() {
    Novice::ScreenPrintf(10, 10, "Enemy HP: %d(SPACE to ATTACK)", enemyCount);
}
