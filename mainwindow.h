#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define YD4U_TITLE QString::fromUtf8("Яндекс.Диск [UNOFFICIAL]")

#include <QMainWindow>
#include <QSystemTrayIcon>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSystemTrayIcon *tray;

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
