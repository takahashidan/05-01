#pragma once
#include "Scene.h"

class StageScene : public Scene {
public:
    StageScene(); // コンストラクタ宣言
    void Update() override;
    void Draw() override;
private:
    int enemyCount;
};
