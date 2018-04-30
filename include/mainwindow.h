#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QObject>
#include <QMainWindow>
#include <QGeometryRenderer>
#include <Qt3DExtras/Qt3DWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT
    public:
        explicit MainWindow(QWidget *parent = nullptr);

    signals:
    private slots:
        // Wrapper for exportXML
        void newFile();
        // Wrapper for importXML/importSCAD
        void open();
        void save();
        void importXML();
        void importSCAD();
        void exportXML();
        void exportSCAD();
        void addBlock();
        void addCone();
        void addCylinder();
        void addPyramid();
        void addSphere();
        void addTorus();
    private:
        void createActions();
        void createMenus();
        QMenu *fileMenu;
        QMenu *drawMenu;
        QAction *newAct;
        QAction *openAct;
        QAction *saveAct;
        QAction *importXMLAct;
        QAction *importSCADAct;
        QAction *exportXMLAct;
        QAction *exportSCADAct;
        QAction *addBlockAct;
        QAction *addConeAct;
        QAction *addCylinderAct;
        QAction *addPyramidAct;
        QAction *addSphereAct;
        QAction *addTorusAct;
        Qt3DExtras::Qt3DWindow *view;
};

#endif // MAINWINDOW_H
