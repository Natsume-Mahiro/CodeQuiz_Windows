#include "FlashImage.h"

FlashImage::FlashImage(const char* imagePath)
    : imageHandle(-1), imagePath(imagePath)
{}

FlashImage::~FlashImage()
{
    if (imageHandle != -1)
    {
        DeleteGraph(imageHandle);
    }
}

void FlashImage::display()
{
    // 画像の読み込み
    imageHandle = LoadGraph(imagePath.c_str());

    // 画像の表示
    DrawGraph(0, 0, imageHandle, TRUE);

    // 一秒待つ
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // 画面をクリア
    ClearDrawScreen();
}
