#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //this->showFullScreen();

    ui->Btn_Calculatemitosh->hide();
    ui->Btn_Calculateshtomi->hide();

    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::onTimer);
    timer->start(300);
    jalali = new QDATEJALALI(this);
    //this->setWindowTitle(QString("date time"));
    this->setWindowTitle(QString("S/N:%1").arg(QSysInfo::machineHostName()));

    this->setFixedSize(QSize(300,180));

    jalali->ProcNow();
    ui->Sbox_yearsh->setValue(jalali->getyearsh());
    ui->Sbox_monthsh->setValue(jalali->getmonthsh());
    ui->Sbox_daysh->setValue(jalali->getdaysh());

    ui->Sbox_yearmi->setValue(jalali->getyearmi());
    ui->Sbox_monthmi->setValue(jalali->getmonthmi());
    ui->Sbox_daymi->setValue(jalali->getdaymi());
    QPalette palette;

    palette.setColor(QPalette::Window,QColor(0x1C,0x33,0x4E));//#1C334E
    this->setPalette(palette);

    palette.setColor(QPalette::WindowText,QColor(0xFF,0xFF,0xFF));
    ui->Lbl_shOut->setPalette(palette);
    ui->Lbl_MiOut->setPalette(palette);
    ui->Lbl_date->setPalette(palette);
    ui->Lbl_time->setPalette(palette);
    ui->label_5->setPalette(palette);
    ui->label_6->setPalette(palette);
    ui->label->setPalette(palette);
    ui->label_2->setPalette(palette);
    ui->label_3->setPalette(palette);
    ui->label_4->setPalette(palette);

    ui->mainToolBar->hide();
    ui->statusBar->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTimer()
{
    QScreen *screen = QGuiApplication::primaryScreen();
    const int screenangle = screen->angleBetween(screen->nativeOrientation(),screen->orientation());
    jalali->ProcNow();
    uint8_t DateTime[11];
    sprintf((char*)DateTime,"%04d/%02d/%02d",jalali->getyearsh(),jalali->getmonthsh(),jalali->getdaysh());
    this->ui->Lbl_date->setText(QString("%1  --  %2  *** angle:%3")
                                .arg(QString::fromLatin1((const char *)DateTime))
                                .arg(jalali->getdayofweeksh())
                                .arg(screenangle));
    sprintf((char*)DateTime,"%02d/%02d/%02d",QTime::currentTime().hour(),QTime::currentTime().minute(),QTime::currentTime().second());
    this->ui->Lbl_time->setText(QString("%1")
                                .arg(QString::fromLatin1((const char *)DateTime)));
    ui->Lbl_time->setText(QString("%1 - %2*%3").arg(ui->Lbl_time->text()).arg(screen->size().width()).arg(screen->size().height()));
    //setWindowTitle(QString("Size : %1").arg(this->height()));
}

void MainWindow::on_Sbox_yearsh_valueChanged(int arg1)
{
    Q_UNUSED(arg1)
    //this->ui->Lbl_MiOut->setText(QString("----/--/--"));
    on_Btn_Calculateshtomi_clicked();
}

void MainWindow::on_Sbox_monthsh_valueChanged(int arg1)
{
    Q_UNUSED(arg1)
    //this->ui->Lbl_MiOut->setText(QString("----/--/--"));
    on_Btn_Calculateshtomi_clicked();
}

void MainWindow::on_Sbox_daysh_valueChanged(int arg1)
{
    Q_UNUSED(arg1)
    //this->ui->Lbl_MiOut->setText(QString("----/--/--"));
    on_Btn_Calculateshtomi_clicked();
}

void MainWindow::on_Btn_Calculateshtomi_clicked()
{
    QDATEJALALI jalali1;
    jalali1.SetShamsiDate(this->ui->Sbox_yearsh->value(),this->ui->Sbox_monthsh->value(),this->ui->Sbox_daysh->value());
    uint8_t DateTime[11];
    sprintf((char*)DateTime,"%04d/%02d/%02d",jalali1.getyearmi(),jalali1.getmonthmi()
            ,jalali1.getdaymi());
    this->ui->Lbl_MiOut->setText(QString("%1")
                                 .arg(QString::fromLatin1((const char *)DateTime)));
}

void MainWindow::on_Sbox_yearmi_valueChanged(int arg1)
{
    Q_UNUSED(arg1)
    //this->ui->Lbl_shOut->setText(QString("----/--/--"));
    on_Btn_Calculatemitosh_clicked();
}

void MainWindow::on_Sbox_monthmi_valueChanged(int arg1)
{
    Q_UNUSED(arg1)
    //this->ui->Lbl_shOut->setText(QString("----/--/--"));
    on_Btn_Calculatemitosh_clicked();
}

void MainWindow::on_Sbox_daymi_valueChanged(int arg1)
{
    Q_UNUSED(arg1)
    //this->ui->Lbl_shOut->setText(QString("----/--/--"));
    on_Btn_Calculatemitosh_clicked();
}

void MainWindow::on_Btn_Calculatemitosh_clicked()
{
    QDATEJALALI jalali1;
    jalali1.SetMiladiDate(this->ui->Sbox_yearmi->value(),this->ui->Sbox_monthmi->value(),this->ui->Sbox_daymi->value());
    uint8_t DateTime[11];
    sprintf((char*)DateTime,"%04d/%02d/%02d",jalali1.getyearsh(),jalali1.getmonthsh(),jalali1.getdaysh());
    this->ui->Lbl_shOut->setText(QString("%1")
                                 .arg(QString::fromLatin1((const char *) DateTime)));
}
