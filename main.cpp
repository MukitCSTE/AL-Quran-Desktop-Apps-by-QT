/*
    Copyright (c) 2009-10 Qtrac Ltd. All rights reserved.

    This program or module is free software: you can redistribute it
    and/or modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version. It is provided
    for educational purposes and is distributed in the hope that it will
    be useful, but WITHOUT ANY WARRANTY; without even the implied
    warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
    the GNU General Public License for more details.
*/

#include "mainwindow.hpp"
#include <QApplication>
#include <QIcon>
#include <QLabel>
#include <QLineEdit>
#include <QTextDocument>




int main(int argc, char *argv[])
{





    QApplication app(argc, argv);




    app.setApplicationName(app.translate("main", "AL-Quran Dextop apps"));

    app.setWindowIcon(QIcon(":/music_folder.png"));




#ifdef Q_WS_MAC
    app.setCursorFlashTime(0);
#endif


    MainWindow window;



//"selection-background-color: blue;" //


    window.setStyleSheet("color: #37F707;"



                         "selection-color: yellow;"

                         "font:bold 30px;"
                         "background-color: #1F8776;"


                          "background-image:url(:images/aa.png);"
                           "background-repeat:xy;"
                          "background-position:  right; "


                         "background-repeat:none;"




                         )
            ;



    window.resize(1200, 750);

    window.isFullScreen();

    window.show();
    return app.exec();
}
