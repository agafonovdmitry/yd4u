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
    
private slots:
    void setAllState(bool state);
    void enableAll();
    void disableAll();

    void on_yaLogin_textChanged(const QString &arg1);

    void on_yaPassword_textChanged(const QString &arg1);

    void on_Start_clicked();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
