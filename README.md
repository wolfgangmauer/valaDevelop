# Download [valaDevelop](https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/valaDevelop) (development status)
An IDE for developing vala applications/libraries, much like monoDevelop for C#

### Dependencies  
Ubuntu >= 18.04, valac >= 0.40  
Elementary >= 5.0, valac >= 0.40  
Debian >= 4.9.0-8, manual update(get/build/install) from vala-0.34 to vala-0.40 (git clone https://github.com/GNOME/vala.git -b 0.40) and follow the instructions to install on https://github.com/GNOME/vala.git

```sh
sudo apt-get install git gdb valac glade libxml2-utils gtksourceview-3.0-1 libwebkit2gtk-4.0-37
git clone https://github.com/wolfgangmauer/valaDevelop.git
cd ./valaDevelop
chmod a+x ./valaDevelop
./valaDevelop
```
```sh
Keyboard shortcuts fixed by now
CTRL+SHIFT+F  -> Find in files
SHIFT+TAB     -> Switch between opend sourcefiles
CTRL+.        -> Go to prev bookmark
CTRL+,        -> go to next bookmark
CTRL+SHIFT+B  -> Build solution
CTRL+F5       -> Execute (without debugging)
F5            -> Start debugging
F10           -> Execute next line (debug)
F11           -> Step into function (debug)
SHIFT+F11     -> Step out of function (debug)
F9            -> Toggle breakpoint
CTRL+B        -> Toggle bookmark
CTRL+F        -> Search (actual source)
CTRL+H        -> Search & Replace (actual source)
CTRL+G        -> Goto line
F3            -> Find next occur (from search)
SHIFT+F3      -> Find prev occur (from search)
F12           -> Goto declaration source or valadoc (not implemented yet)
CTRL+S        -> Save (actual source)
CTRL+F4       -> Close source
```

<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-03-10 04-34-45.png">
<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-02-17 22-45-56.png">
<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-02-17 22-48-06.png">
<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-02-17 22-50-05.png">
<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-02-17 22-50-31.png">
<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-02-17 22-51-13.png">
<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-02-17 22-56-47.png">
<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-02-22 15-54-31.png">
<img src="https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/ScreenShots/Bildschirmfoto von 2019-02-22 18-59-38.png">
