#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
private slots:
    void digit_pressed();
    void on_dot_released();
    void unary_operator_pressed();
    void on_clear_released();
    void on_equal_released();
    void binary_operation_pressed();
    void on_pushButton_released();
    void on_pushButton_clicked();
    void on_button_released();
    void on_ce_clicked();
    void on_backspace_clicked();
};

#endif // MAINWINDOW_H
