#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileInfo>
#include <QThread>
#include <QApplication>
#include <QDesktopWidget>

QFileInfo cfg("/home/aga/.config/yandex-disk/config.cfg");
QFileInfo pwd("/home/aga/.config/yandex-disk/passwd");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(YD4U_TITLE);

    // center
    QSize sz = size();
    QDesktopWidget *d = QApplication::desktop();
    int ws = d->width();   // returns screen width
    int h = d->height();  // returns screen height
    int mw = sz.width();
    int mh = sz.height();
    int cw = (ws/2) - (mw/2);
    int ch = (h/2) - (mh/2);
    move(cw,ch);

    tray = new QSystemTrayIcon();
    tray->setIcon(QIcon("://images/tray_white_warning.png"));
    tray->setToolTip(YD4U_TITLE);
    tray->show();

//    if (pwd.exists()) {
//        ui->yaLogin->setEnabled(false);
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setAllState(bool state)
{
    ui->yaLogin->setEnabled(state);
    ui->yaPassword->setEnabled(state);
    ui->Start->setEnabled(state);
}

void MainWindow::enableAll()
{
    setAllState(true);
}

void MainWindow::disableAll()
{
    setAllState(false);
}

void MainWindow::on_yaLogin_textChanged(const QString &arg1)
{
    ui->yaPassword->setEnabled(arg1.length() > 0);
    ui->Start->setEnabled(ui->yaLogin->text().length() > 0 && ui->yaPassword->text().length() > 0);
}

void MainWindow::on_yaPassword_textChanged(const QString &arg1)
{
    ui->Start->setEnabled(ui->yaLogin->text().length() > 0 && arg1.length() > 0);
}

void MainWindow::on_Start_clicked()
{
    disableAll();
}
