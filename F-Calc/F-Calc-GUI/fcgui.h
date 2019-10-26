#ifndef FCGUI_H
#define FCGUI_H

#include <QMainWindow>

namespace Ui {
class FCGUI;
}

class FCGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit FCGUI(QWidget *parent = nullptr);
    ~FCGUI();

private slots:
    void on_start_clicked();

private:
    Ui::FCGUI *ui;
};

#endif // FCGUI_H
