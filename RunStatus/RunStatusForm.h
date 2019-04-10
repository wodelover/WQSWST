#ifndef RUNSTATUSFORM_H
#define RUNSTATUSFORM_H

#include <QWidget>

namespace Ui {
class RunStatusForm;
}

class RunStatusForm : public QWidget
{
    Q_OBJECT

public:
    explicit RunStatusForm(QWidget *parent = nullptr);
    ~RunStatusForm();

private:
    Ui::RunStatusForm *ui;
};

#endif // RUNSTATUSFORM_H
