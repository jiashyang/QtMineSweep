#ifndef MAIN_GAME_WINDOW_H
#define MAIN_GAME_WINDOW_H
// 游戏主界面
#include <QMainWindow>

namespace Ui {
class MainGameWindow;
}

class GameModel; // 前置声明游戏模型类

class MainGameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainGameWindow(QWidget *parent = 0);
    ~MainGameWindow();
protected:
    virtual void paintEvent(QPaintEvent *event);       // 界面重绘
    virtual void mousePressEvent(QMouseEvent *event);  // 鼠标控制
private:
    Ui::MainGameWindow *ui;

    GameModel *game; // 游戏
private slots:
    void onStartGameClicked();    // 开始游戏
    void onLevelChooseClicked();  // 选择游戏难度
    void onQuitClicked();         // 退出游戏
};

#endif // MAIN_GAME_WINDOW_H
