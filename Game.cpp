#include "Game.h"
#include "TitleScene.h"

Game* Game::instance = nullptr;

Game::Game() {
    currentScene = new TitleScene();
}

Game::~Game() {
    delete currentScene;
}

Game* Game::GetInstance() {
    if (instance == nullptr) {
        instance = new Game();
    }
    return instance;
}

void Game::ChangeScene(Scene* newScene) {
    delete currentScene;
    currentScene = newScene;
}

void Game::Update() {
    currentScene->Update();
}

void Game::Draw() {
    currentScene->Draw();
}

void Game::Exit() {
    delete instance;
    instance = nullptr;
}
