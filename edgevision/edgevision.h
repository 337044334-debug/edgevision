#ifndef EDGEVISION_H
#define EDGEVISION_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class EdgeVision; }
QT_END_NAMESPACE

class EdgeVision : public QWidget
{
    Q_OBJECT

public:
    EdgeVision(QWidget *parent = nullptr);
    ~EdgeVision();

private:
    Ui::EdgeVision *ui;
};
#endif // EDGEVISION_H
