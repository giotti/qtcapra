#include "./qtcapra.h"
#include "./ui_qtcapra.h"

QtCapra::QtCapra(QWidget *parent)
: QWidget(parent),
    ui(new Ui::QtCapra) {
    ui->setupUi(this);

    _rh      = new RotateHelper();
    //_volume  = ui->volume->value();
    _insulto = ui->comboBox->currentText();

    connect(_rh, SIGNAL(rotated(bool)), this, SLOT( on_startButton_clicked() ));
    //connect(ui->volume, SIGNAL(valueChanged(int)), this,  SLOT(onVolumeChanged(int)));
    connect(ui->comboBox,   SIGNAL(currentIndexChanged(QString)), this, SLOT(onComboChanged(QString)));

    _rh->start(); // the default sample rate is 500ms
}

QtCapra::~QtCapra() {
    delete ui;
}

void QtCapra::on_quitButton_clicked()
{
    _rh->stop();
    close();
}

void QtCapra::on_startButton_clicked()
{
    //QString command = "/usr/bin/mplayer -volume " + QString::number(_volume) + " /opt/qtmoko/sounds/" + _insulto + ".wav";
    QString command = "/usr/bin/mpg123 /opt/qtmoko/sounds/" + _insulto + ".mp3";
    system(qPrintable(command));
}
