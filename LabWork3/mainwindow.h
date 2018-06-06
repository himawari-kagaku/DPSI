#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_sampleSizeText_returnPressed();

    void on_equationText_returnPressed();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    void RedrawGraphs();
};

#endif // MAINWINDOW_H
