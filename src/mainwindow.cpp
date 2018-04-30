#include <QtWidgets>
#include <Qt3DExtras/QConeMesh>
#include <Qt3DExtras/QCuboidMesh>
#include <Qt3DExtras/QCylinderMesh>
#include <Qt3DExtras/QSphereMesh>
#include <Qt3DExtras/QTorusMesh>
#include <Qt3DExtras/Qt3DWindow>
#include <QColor>

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    view = new Qt3DExtras::Qt3DWindow();
    QWidget *container = QWidget::createWindowContainer(view);
    QWidget *widget = new QWidget;
    setCentralWidget(widget);
    QHBoxLayout *hLayout = new QHBoxLayout(widget);
    QVBoxLayout *vLayout = new QVBoxLayout();
    vLayout->setAlignment(Qt::AlignTop);
    hLayout->addWidget(container, 1);
    hLayout->addLayout(vLayout);
    createActions();
    createMenus();
}

void MainWindow::createActions()
{
    newAct = new QAction(tr("&New"), this);
    openAct = new QAction(tr("&Open"), this);
    saveAct = new QAction(tr("&Save"), this);
    importXMLAct = new QAction(tr("&Import XML"), this);
    importSCADAct = new QAction(tr("&Import SCAD"), this);
    exportXMLAct = new QAction(tr("&Export XML"), this);
    exportSCADAct = new QAction(tr("&Export SCAD"), this);
    addBlockAct = new QAction(tr("&Draw Block"), this);
    addConeAct = new QAction(tr("&Draw Cone"), this);
    addCylinderAct = new QAction(tr("&Draw Cylinder"), this);
    addPyramidAct = new QAction(tr("&Draw Pyramid"), this);
    addSphereAct = new QAction(tr("&Draw Sphere"), this);
    addTorusAct = new QAction(tr("&Draw Torus"), this);
    newAct->setStatusTip(tr("Create new project"));
    openAct->setStatusTip(tr("Opens either a MCViNE XML or SCAD file"));
    saveAct->setStatusTip(tr("Saves the current project in a currently existing or new MCViNE XML or SCAD file"));
    importXMLAct->setStatusTip(tr("Imports MCViNE XML"));
    importSCADAct->setStatusTip(tr("Imports SCAD file"));
    exportXMLAct->setStatusTip(tr("Exports model to MCViNE XML"));
    exportSCADAct->setStatusTip(tr("Exports model to SCAD file"));
    addBlockAct->setStatusTip(tr("Draws a block to the screen"));
    addConeAct->setStatusTip(tr("Draws a cone to the screen"));
    addCylinderAct->setStatusTip(tr("Draws a cylinder to the screen"));
    addPyramidAct->setStatusTip(tr("Draws a pyramid to the screen"));
    addSphereAct->setStatusTip(tr("Draws a sphere to the screen"));
    addTorusAct->setStatusTip(tr("Draws a torus to the screen"));
    connect(newAct, &QAction::triggered, this, &MainWindow::newFile);
    connect(openAct, &QAction::triggered, this, &MainWindow::open);
    connect(saveAct, &QAction::triggered, this, &MainWindow::save);
    connect(importXMLAct, &QAction::triggered, this, &MainWindow::importXML);
    connect(importSCADAct, &QAction::triggered, this, &MainWindow::importSCAD);
    connect(exportXMLAct, &QAction::triggered, this, &MainWindow::exportXML);
    connect(exportSCADAct, &QAction::triggered, this, &MainWindow::exportSCAD);
    connect(addBlockAct, &QAction::triggered, this, &MainWindow::addBlock);
    connect(addConeAct, &QAction::triggered, this, &MainWindow::addCone);
    connect(addCylinderAct, &QAction::triggered, this, &MainWindow::addCylinder);
    connect(addPyramidAct, &QAction::triggered, this, &MainWindow::addPyramid);
    connect(addSphereAct, &QAction::triggered, this, &MainWindow::addSphere);
    connect(addTorusAct, &QAction::triggered, this, &MainWindow::addTorus);
}

void MainWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
    fileMenu->addAction(importXMLAct);
    fileMenu->addAction(importSCADAct);
    fileMenu->addAction(exportXMLAct);
    fileMenu->addAction(exportSCADAct);
    drawMenu = menuBar()->addMenu(tr("&Draw"));
    drawMenu->addAction(addBlockAct);
    drawMenu->addAction(addConeAct);
    drawMenu->addAction(addCylinderAct);
    drawMenu->addAction(addPyramidAct);
    drawMenu->addAction(addSphereAct);
    drawMenu->addAction(addTorusAct);
}

void MainWindow::newFile() { return; }
void MainWindow::open() { return; }
void MainWindow::save() { return; }
void MainWindow::importXML() { return; }
void MainWindow::importSCAD() { return; }
void MainWindow::exportXML() { return; }
void MainWindow::exportSCAD() { return; }
void MainWindow::addBlock() { return; }
void MainWindow::addCone() { return; }
void MainWindow::addCylinder() { return; }
void MainWindow::addPyramid() { return; }
void MainWindow::addSphere() { return; }
void MainWindow::addTorus() { return; }
