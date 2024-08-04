#pragma once
#include "Scene.h"

// 前方宣言
class StageScene;

class TitleScene : public Scene {
public:
    void Update() override;
    void Draw() override;
};
