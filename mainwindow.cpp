#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QQmlContext>
#include <QQuickView>
#include <QtWidgets/QHBoxLayout>

#include "todolist.h"
#include "todomodel.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow) {
  ui->setupUi(this);


  qmlRegisterType<ToDoModel>("ToDo", 1, 0, "ToDoModel");
  qmlRegisterUncreatableType<ToDoList>("ToDo", 1, 0, "ToDoList",
                                       QStringLiteral(
                                         "ToDoList should not be created in QML"));


  QQuickView *qmlView = new QQuickView();

  ToDoList toDoList;

  qmlView->rootContext()->setContextProperty(QStringLiteral("toDoList"),
                                             &toDoList);

  QWidget *container = QWidget::createWindowContainer(qmlView, this);
  qmlView->setMinimumHeight(300);
  qmlView->setSource(QUrl(QLatin1String("qrc:/ToDoList.qml")));
  container->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);

  QHBoxLayout *layout = new QHBoxLayout;
  layout->insertWidget(0,container);
  ui->centralWidget->setLayout(layout);
}

MainWindow::~MainWindow() {
  delete ui;
}
