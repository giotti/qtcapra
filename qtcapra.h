#ifndef QTCAPRA_H
#define QTCAPRA_H

#include <QWidget>
#include <QProcess>
#include <QSpinBox>

#include "rotate.h"

namespace Ui {
    class QtCapra;
}

class QtCapra : public QWidget
{
    Q_OBJECT

public:
    explicit QtCapra(QWidget *parent = 0);
    ~QtCapra();
    QString program;

private slots:
    void on_quitButton_clicked();

    void on_startButton_clicked();
    void onVolumeChanged(int v) { _volume = v; };
    void onComboChanged(QString insulto) { _insulto = insulto; };

private:
    Ui::QtCapra*    ui;
    RotateHelper*   _rh;
    int             _volume;
    QString         _insulto;
};

#endif // QTCAPRA_H
