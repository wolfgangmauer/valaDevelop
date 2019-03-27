The build command might look like this
```sh
gcc -v '-o' '~/valaDevelop/valaDevelop' '-pthread' '-D' 'GETTEXT_PACKAGE="valaDevelop"' '-D' 'VERSION="0.44"' '-mtune=generic' '-march=x86-64' -pthread
-I/usr/include/gee-0.8 -I/usr/include/gobject-introspection-1.0 -I/usr/include/gtksourceview-3.0 -I/usr/include/json-glib-1.0 -I/usr/include/webkitgtk-4.0 -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0
-I/usr/include/dbus-1.0 -I/usr/lib/x86_64-linux-gnu/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0/
-I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/atk-1.0
-I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2
-I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/webkitgtk-4.0 -I/usr/include/libsoup-2.4 -I/usr/include/libxml2 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/vala-0.44
-Wl,-Bdynamic -lgee-0.8 -lgio-2.0 -Wl,--export-dynamic -lgmodule-2.0 -pthread -lgirepository-1.0 -lX11 -lgtksourceview-3.0
-ljson-glib-1.0 -lxml2 -lwebkit2gtk-4.0 -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo
-lgdk_pixbuf-2.0 -ljavascriptcoregtk-4.0 -lsoup-2.4 -lgio-2.0 -lgobject-2.0 -lglib-2.0 *.c -Wl,-Bstatic -lvala-0.44 -Wl,-Bdynamic
-lgee-0.8 -lgio-2.0 -lgmodule-2.0 -pthread -lgirepository-1.0 -lX11 -lgtksourceview-3.0 -ljson-glib-1.0 -lxml2
-lwebkit2gtk-4.0 -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0
-ljavascriptcoregtk-4.0 -lsoup-2.4 -lgio-2.0 -lgobject-2.0 -lglib-2.0
```
