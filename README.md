# Download [valaDevelop 0.5](https://raw.githubusercontent.com/wolfgangmauer/valaDevelop/master/valaDevelop) (Recommended)
An IDE for developing vala applications/libraries, much like monoDevelop for C#

### Dependencies
<b>Now valaDevelop comes with static linked [libvala-0.46](https://gitlab.gnome.org/GNOME/vala/tree/wip/fast-vapi), so it should be run on any system with installed valac >= 0.40</b>
(If libvala-0.46 is officially available, the static link will be removed)

Ubuntu >= 18.04

Elementary >= 5.0

Debian >= 4.9.0-8, manual update(get/build/install) from vala-0.34 to vala-0.40 (git clone https://github.com/GNOME/vala.git -b 0.40) and follow the instructions to install on https://github.com/GNOME/vala.git

### Donation
If this project help you reduce time to develop, you can give me a cup of coffee :)

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=wolfgang.mauer@kabelmail.de&lc=DE&item_name=Donation+to+Wolfgang+Mauer&no_note=0&cn=&currency_code=EUR&bn=PP-DonationsBF:btn_donateCC_LG.gif:NonHosted)

```sh
sudo apt-get install git gdb valac glade libxml2-utils gtksourceview-3.0-1 libwebkit2gtk-4.0-37 libjson-glib-1.0
git clone https://github.com/wolfgangmauer/valaDevelop.git
cd ./valaDevelop
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
CTRL+SHIFT+U  -> Toggle line comments
CTRL+SHIFT+R  -> Expand/Collapse all REGIONS
CTRL+F        -> Search (actual source)
CTRL+H        -> Search & Replace (actual source)
CTRL+G        -> Goto line
F3            -> Find next occur (from search)
SHIFT+F3      -> Find prev occur (from search)
F12           -> Goto declaration source or valadoc
CTRL+S        -> Save (actual source)
CTRL+F4       -> Close source
```
<img src="https://user-images.githubusercontent.com/27953724/55681485-3e941700-5927-11e9-94b8-c05ec89d88c7.png">
<img src="https://user-images.githubusercontent.com/27953724/55681484-3dfb8080-5927-11e9-99ac-72aac5dac659.png">
</br>Code Formatting - Before and after inserting the curly bracket</br>
<img src="https://user-images.githubusercontent.com/27953724/55681482-3dfb8080-5927-11e9-983f-f4d7dd7e4e16.png">
</br>

<img src="https://user-images.githubusercontent.com/27953724/55681483-3dfb8080-5927-11e9-9ff0-3e0a0d5a282b.png">
</br>Sourcecode folding</br>
<img src="https://user-images.githubusercontent.com/27953724/55681480-3dfb8080-5927-11e9-8f4c-500cc84288ef.png">
<img src="https://user-images.githubusercontent.com/27953724/55681481-3dfb8080-5927-11e9-8581-0fec8aa7d20e.png">
</br>Static Code Analysis</br>
<img src="https://user-images.githubusercontent.com/27953724/55681479-3dfb8080-5927-11e9-8012-4839abf6a1d6.png">
</br>Jump to Definition/Integrated documentation</br>
<img src="https://user-images.githubusercontent.com/27953724/55681478-3d62ea00-5927-11e9-9b50-6cba3b2a1abd.png">
</br>Debugging</br>
<img src="https://user-images.githubusercontent.com/27953724/55681473-3cca5380-5927-11e9-8e38-5911c487e556.png">
<img src="https://user-images.githubusercontent.com/27953724/55681472-3cca5380-5927-11e9-8703-ab85e62e56a9.png">
<img src="https://user-images.githubusercontent.com/27953724/55681476-3d62ea00-5927-11e9-8b67-9bf2defa5b59.png">
</br>Others</br>
<img src="https://user-images.githubusercontent.com/27953724/55681468-3cca5380-5927-11e9-8c8e-7fffa53e9058.png">
<img src="https://user-images.githubusercontent.com/27953724/55681469-3cca5380-5927-11e9-8cdc-22c8e5ece838.png">
<img src="https://user-images.githubusercontent.com/27953724/55681470-3cca5380-5927-11e9-94d6-5af84bbcc9df.png">
<img src="https://user-images.githubusercontent.com/27953724/55681471-3cca5380-5927-11e9-9333-9a5e0a319930.png">
<img src="https://user-images.githubusercontent.com/27953724/55681474-3d62ea00-5927-11e9-8f25-fae76486c28e.png">
<img src="https://user-images.githubusercontent.com/27953724/55681475-3d62ea00-5927-11e9-880e-434dfa97d7e7.png">
