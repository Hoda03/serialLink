#ifndef START_H
#define START_H

#include <QMainWindow>
#include "acceuil.h"

namespace Ui {
class start;
}

class start : public QMainWindow
{
    Q_OBJECT

public:
    explicit start(QWidget *parent = nullptr);
    ~start();

private slots:
    void on_pushButton_clicked();

private:
    Ui::start *ui;
    acceuil acceuil;
};

#endif // START_H
