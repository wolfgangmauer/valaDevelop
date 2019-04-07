project('valaDevelop', 'c')

# Create an executable from the list of files to be compiled and the needed deps
executable(
  meson.project_name(),
  run_command('files.sh').stdout().strip().split('\n'),
  dependencies: [
    dependency('gtk+-3.0'),
    dependency('gee-0.8'),
    dependency('gtksourceview-3.0'),
    dependency('libvala-0.46'),
    dependency('json-glib-1.0'),
    dependency('webkit2gtk-4.0'),
    dependency('libxml-2.0')
  ],
  install: true,
  c_args: [ '-D GETTEXT_PACKAGE="valaDevelop"', '-D REGION' ]
)

# Install the .desktop file
install_data(
  join_paths('data', meson.project_name() + '.desktop'),
  install_dir: join_paths(get_option('datadir'), 'applications')
)

# Install the .appdata.xml
install_data(
  join_paths('data', meson.project_name() + '.appdata.xml'),
  install_dir: join_paths(get_option('datadir'), 'metainfo')
)

