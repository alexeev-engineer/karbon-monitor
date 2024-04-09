/* Системный монитор ресурсов для Linux Karbon Monitor
 * ************************************************************************** *
 * Стек технологий: C++, Qt6
 * Разработчик: Алексеев Бронислав, 2024 (С) Все права сохранены
 * Файл: src/karbon.cpp
 * ************************************************************************** *
 * Описание: Главный файл кодовой базы. Здесь подключаются все нужные модули и
 *  библиотеки, создается приложение и запускается окно.                     */
#include <fstream>
#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow *mainWindow = new QMainWindow();

    mainWindow->show();

    return app.exec();
}
