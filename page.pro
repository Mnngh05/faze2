QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    addjob.cpp \
    addpost.cpp \
    companyjob.cpp \
    companylog.cpp \
    companynetwork.cpp \
    companysign.cpp \
    compprof.cpp \
    content.cpp \
    dialog.cpp \
    home.cpp \
    homecomp.cpp \
    jobs.cpp \
    login.cpp \
    main.cpp \
    messagecomp.cpp \
    messages.cpp \
    network.cpp \
    page1.cpp \
    page2.cpp \
    page3.cpp \
    page3comp.cpp \
    page4.cpp \
    search.cpp \
    userprof.cpp

HEADERS += \
    account.h \
    addjob.h \
    addpost.h \
    companyjob.h \
    companylog.h \
    companynetwork.h \
    companysign.h \
    compprof.h \
    content.h \
    dialog.h \
    home.h \
    homecomp.h \
    jobs.h \
    login.h \
    messagecomp.h \
    messages.h \
    network.h \
    page1.h \
    page2.h \
    page3.h \
    page3comp.h \
    page4.h \
    search.h \
    userprof.h

FORMS += \
    addjob.ui \
    addpost.ui \
    companyjob.ui \
    companylog.ui \
    companynetwork.ui \
    companysign.ui \
    compprof.ui \
    dialog.ui \
    home.ui \
    homecomp.ui \
    jobs.ui \
    login.ui \
    messagecomp.ui \
    messages.ui \
    network.ui \
    page1.ui \
    page2.ui \
    page3.ui \
    page3comp.ui \
    page4.ui \
    search.ui \
    userprof.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

SUBDIRS += \
    linkedin.pro \
    linkedin.pro

DISTFILES += \
    linkedin.pro.user
