#include "Game.h"

Game::Game() {}

Game::~Game() {}

void Game::initialize()
{
    SetMouseDispFlag(TRUE);

    // 最初のシーンを設定
    sceneManager.switchScene(Scene::TITLE);
}

void Game::update()
{
    sceneManager.update();
    sceneManager.draw();
}
