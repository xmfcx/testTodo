#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QQmlContext>
#include <QQuickView>
#include <QtWidgets/QHBoxLayout>

#include "todolist.h"
#include "todomodel.h"
#include <QQuickWidget>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow) {
  ui->setupUi(this);


  qmlRegisterType<ToDoModel>("ToDo", 1, 0, "ToDoModel");
  qmlRegisterUncreatableType<ToDoList>("ToDo", 1, 0, "ToDoList",
                                       QStringLiteral(
                                         "ToDoList should not be created in QML"));


//  QQuickView *qmlView = new QQuickView();

  QQuickWidget *quickWidget = new QQuickWidget();
  ToDoList toDoList;

  quickWidget->rootContext()->setContextProperty(QStringLiteral("toDoList"),
                                             &toDoList);

//  QWidget *container = QWidget::createWindowContainer(quickWidget, this);
  quickWidget->setMinimumHeight(300);
  quickWidget->setSource(QUrl(QLatin1String("qrc:/ToDoList.qml")));
  quickWidget->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);

  QHBoxLayout *layout = new QHBoxLayout;
  layout->insertWidget(0,quickWidget);
  ui->centralWidget->setLayout(layout);
}

MainWindow::~MainWindow() {
  delete ui;
}
