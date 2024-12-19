#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_2_Core>

class OpenGLContext
    : public QOpenGLWidget,
      public QOpenGLFunctions_3_2_Core
{
    Q_OBJECT


protected:
    /*** If true, save a test image and exit */
    /***/ bool autotesting;

public:
    OpenGLContext(QWidget *parent);
    ~OpenGLContext();

    void debugContextVersion();
    void printGLErrorLog();
    void printLinkInfoLog(int prog);
    void printShaderInfoLog(int shader);

private slots:
    /***/ void saveImageAndQuit();

    virtual void timerUpdate(){}


};
