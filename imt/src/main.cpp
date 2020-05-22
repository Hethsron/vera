#include <view/mainview.hpp>
#include <view/splashview.hpp>
#include <iostream>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    int ret;
    try {
        // MainView win;
        // win.show();

        SplashView splash;
        splash.show();
        ret = app.exec();
    }
    catch(const std::bad_alloc &) {
        return EXIT_FAILURE; // exit the application
    }

    return ret;
}