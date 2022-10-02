//
// Created by ben on 14/04/21.
//

#include "../../include/platform_types/linux/wm-types.h"
#include "../../include/upt_rect.h"
#include <unistd.h>
#include <gtk/gtk.h>
#include <chrono>

namespace pt_platform {
    static GtkApplication* g_gtk_app;
    static bool g_gtk_app_activated = false;
    static native_window_t g_native_window = nullptr;
    static GtkWidget* g_gtk_main_fixed_layout;
    static int g_argc;
    static char** g_argv;

    native_window_t native_main_window()
    {
        return g_native_window;
    }

    //functions prefixed with _ means internal
    void _gtk_app_activate(GtkApplication* app, gpointer user_data)
    {
        upt_rect window_rect = *(upt_rect*)user_data;
        g_gtk_app = app;
        g_gtk_app_activated = true;
        g_native_window = gtk_application_window_new(g_gtk_app);
        gtk_window_set_title(GTK_WINDOW(g_native_window), "Window");
        gtk_window_set_default_size(GTK_WINDOW(g_native_window),
                                    window_rect.w, window_rect.h);
        g_gtk_main_fixed_layout = gtk_fixed_new();

        gtk_widget_show_all(g_native_window);
    }

    //gtk dictates that window creation must be done when activate callback function
    //is called, so we do so when the first window is created instead.
    void create_application(int argc, char* argv[]) {
        g_argc = argc;
        g_argv = argv;
        gtk_init(&g_argc, &g_argv);
    }

    native_window_t create_window(const upt_rect *rect) {
        //if we have no main window, create a new application and make one in _gtk_app_activate
        if (g_native_window == nullptr) {
            g_gtk_app = gtk_application_new("com.bgcottrell.pt.gtkapp", G_APPLICATION_FLAGS_NONE);
            g_signal_connect (g_gtk_app, "activate", G_CALLBACK(_gtk_app_activate), (void*)rect);
            int status;
            status = g_application_run(G_APPLICATION (g_gtk_app), g_argc, g_argv);
            g_object_unref(g_gtk_app);
            using namespace std::chrono;
            time_point tp_begin = steady_clock::now();
            while (g_gtk_app == nullptr) {
                if (duration_cast<seconds>(steady_clock::now() - tp_begin).count() > 5) {
                    fprintf(stderr, "gtk app activate timeout\n");
                    break;
                }
            }
        }
        return g_native_window;
    }

    native_window_t create_button(const upt_rect* rc, const char* text) {
        gtk_button_new_with_label(text);
    }

    void run_event_loop(native_window_t w) {

    }

    void dispose(native_window_t &) {

    }

}