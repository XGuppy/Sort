//
// Created by andrew on 15.11.17.
//

#ifndef SORT_MAINWINDOWINTERFACE_H
#define SORT_MAINWINDOWINTERFACE_H
#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <Fl/Fl_Button.H>
#include <Fl/Fl_Menu_Bar.H>
#include <Fl/Fl_Browser.H>
#include <Fl/Fl_Help_View.H>

class MainWindowInterface:public Fl_Widget
{
    class MyWidget:public Fl_Widget {
    private:
        Fl_Button bt1, bt2, bt3;
        void draw() override
        {   }
    public:
        MyWidget(int x, int y, int w, int h, const char *L = 0);
    };
    class Theory{
        Fl_Help_View helpView;
    public:
        Theory(int w, int h);
        void hide();
        void show();
    };
    MyWidget widget;
    Fl_Menu_Bar menuBar;
    //====================================//
    static Theory theory;
    //====================================//
    static void showabout(Fl_Widget *w, void *);
    void menuBarInit();
    static void showtheory(Fl_Widget *w, void *);
    void draw() override
    {    }
public:
    MainWindowInterface(int w, int h);
};

#endif //SORT_MAINWINDOWINTERFACE_H
