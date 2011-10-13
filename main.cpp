#include <QtGui/QApplication>
#include "qtcapra.h"
#include "rotate.h"

#ifdef QTOPIA
#include <QtopiaServiceRequest>
#include <QValueSpaceItem>
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtCapra w;
    w.show();

    return a.exec();
}
