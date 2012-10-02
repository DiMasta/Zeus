#ifndef ARTEMIDAS_H
#define ARTEMIDAS_H

#include <QMainWindow>

namespace Ui {
class Artemidas;
}

class Artemidas : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Artemidas(QWidget *parent = 0);
    ~Artemidas();

public slots:
    void ButtonClickedHandler();
    
private:
    Ui::Artemidas *ui;
};

#endif // ARTEMIDAS_H
