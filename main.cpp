#include <QApplication>
#include <QFile>
#include <QTextStream>
#include "PeopleDialog.h"


int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    PeopleDialog *dialog = new PeopleDialog();
    dialog->show();
    return app.exec();
}