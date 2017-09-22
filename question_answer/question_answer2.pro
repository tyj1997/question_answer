#-------------------------------------------------
#
# Project created by QtCreator 2017-09-11T16:37:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = question_answer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    user.cpp \
    answer.cpp \
    basicinfo.cpp \
    login.cpp \
    myfollower.cpp \
    data.cpp \
    registerwin.cpp \
    questionwin.cpp \
    question.cpp \
    questioninfo.cpp \
    followerinfo.cpp \
    changepassword.cpp \
    invitewin.cpp \
    myinvite.cpp

HEADERS  += mainwindow.h \
    user.h \
    answer.h \
    basicinfo.h \
    login.h \
    myfollower.h \
    data.h \
    registerwin.h \
    questionwin.h \
    question.h \
    questioninfo.h \
    followerinfo.h \
    changepassword.h \
    invitewin.h \
    myinvite.h

FORMS    += mainwindow.ui \
    login.ui \
    myfollower.ui \
    registerwin.ui \
    questionwin.ui \
    questioninfo.ui \
    followerinfo.ui \
    changepassword.ui \
    invitewin.ui \
    myinvite.ui
QT += sql

RESOURCES += \
    res.qrc
