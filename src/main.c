/* main.c generated by valac UNKNOWN, the Vala compiler
 * generated from main.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <locale.h>
#include <glib/gi18n-lib.h>
#include <gdk/gdk.h>

#define VALA_DEVELOP_TYPE_VALA_DEVELOP (vala_develop_vala_develop_get_type ())
#define VALA_DEVELOP_VALA_DEVELOP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_VALA_DEVELOP, valaDevelopvalaDevelop))
#define VALA_DEVELOP_VALA_DEVELOP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_VALA_DEVELOP, valaDevelopvalaDevelopClass))
#define VALA_DEVELOP_IS_VALA_DEVELOP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_VALA_DEVELOP))
#define VALA_DEVELOP_IS_VALA_DEVELOP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_VALA_DEVELOP))
#define VALA_DEVELOP_VALA_DEVELOP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_VALA_DEVELOP, valaDevelopvalaDevelopClass))

typedef struct _valaDevelopvalaDevelop valaDevelopvalaDevelop;
typedef struct _valaDevelopvalaDevelopClass valaDevelopvalaDevelopClass;
typedef struct _valaDevelopvalaDevelopPrivate valaDevelopvalaDevelopPrivate;
enum  {
	VALA_DEVELOP_VALA_DEVELOP_0_PROPERTY,
	VALA_DEVELOP_VALA_DEVELOP_NUM_PROPERTIES
};
static GParamSpec* vala_develop_vala_develop_properties[VALA_DEVELOP_VALA_DEVELOP_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define VALA_DEVELOP_TYPE_MAIN_WINDOW (vala_develop_main_window_get_type ())
#define VALA_DEVELOP_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_MAIN_WINDOW, valaDevelopmainWindow))
#define VALA_DEVELOP_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_MAIN_WINDOW, valaDevelopmainWindowClass))
#define VALA_DEVELOP_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_MAIN_WINDOW))
#define VALA_DEVELOP_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_MAIN_WINDOW))
#define VALA_DEVELOP_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_MAIN_WINDOW, valaDevelopmainWindowClass))

typedef struct _valaDevelopmainWindow valaDevelopmainWindow;
typedef struct _valaDevelopmainWindowClass valaDevelopmainWindowClass;
typedef struct _Block22Data Block22Data;

#define VALA_DEVELOP_TYPE_SETTINGS (vala_develop_settings_get_type ())
#define VALA_DEVELOP_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_SETTINGS, valaDevelopSettings))
#define VALA_DEVELOP_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_SETTINGS, valaDevelopSettingsClass))
#define VALA_DEVELOP_IS_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_SETTINGS))
#define VALA_DEVELOP_IS_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_SETTINGS))
#define VALA_DEVELOP_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_SETTINGS, valaDevelopSettingsClass))

typedef struct _valaDevelopSettings valaDevelopSettings;
typedef struct _valaDevelopSettingsClass valaDevelopSettingsClass;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _Block23Data Block23Data;

struct _valaDevelopvalaDevelop {
	GtkApplication parent_instance;
	valaDevelopvalaDevelopPrivate * priv;
};

struct _valaDevelopvalaDevelopClass {
	GtkApplicationClass parent_class;
};

struct _Block22Data {
	int _ref_count_;
	valaDevelopvalaDevelop* self;
	valaDevelopmainWindow* window;
	GFile** files;
	gint files_length1;
};

struct _Block23Data {
	int _ref_count_;
	valaDevelopvalaDevelop* self;
	valaDevelopmainWindow* window;
};

static gpointer vala_develop_vala_develop_parent_class = NULL;

GType vala_develop_vala_develop_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopvalaDevelop, g_object_unref)
gint vala_develop_vala_develop_main (gchar** args,
                                     gint args_length1);
valaDevelopvalaDevelop* vala_develop_vala_develop_new (void);
valaDevelopvalaDevelop* vala_develop_vala_develop_construct (GType object_type);
static void vala_develop_vala_develop_real_startup (GApplication* base);
void vala_develop_xml_configuration_load (void);
static void vala_develop_vala_develop_real_open (GApplication* base,
                                          GFile** files,
                                          gint files_length1,
                                          const gchar* hint);
GType vala_develop_main_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopmainWindow, g_object_unref)
static Block22Data* block22_data_ref (Block22Data* _data22_);
static void block22_data_unref (void * _userdata_);
valaDevelopmainWindow* vala_develop_main_window_new (GtkApplication* application);
valaDevelopmainWindow* vala_develop_main_window_construct (GType object_type,
                                                           GtkApplication* application);
static void __lambda121_ (Block22Data* _data22_);
gpointer vala_develop_settings_ref (gpointer instance);
void vala_develop_settings_unref (gpointer instance);
GParamSpec* vala_develop_param_spec_settings (const gchar* name,
                                              const gchar* nick,
                                              const gchar* blurb,
                                              GType object_type,
                                              GParamFlags flags);
void vala_develop_value_set_settings (GValue* value,
                                      gpointer v_object);
void vala_develop_value_take_settings (GValue* value,
                                       gpointer v_object);
gpointer vala_develop_value_get_settings (const GValue* value);
GType vala_develop_settings_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopSettings, vala_develop_settings_unref)
valaDevelopSettings* vala_develop_xml_configuration_get_Setting (void);
gchar* vala_develop_settings_get (valaDevelopSettings* self,
                                  const gchar* key);
void vala_develop_main_window_LoadSolution (valaDevelopmainWindow* self,
                                            const gchar* vsln);
static void ___lambda121__gtk_widget_realize (GtkWidget* _sender,
                                       gpointer self);
static void vala_develop_vala_develop_real_activate (GApplication* base);
static Block23Data* block23_data_ref (Block23Data* _data23_);
static void block23_data_unref (void * _userdata_);
static void __lambda122_ (Block23Data* _data23_);
static void ___lambda122__gtk_widget_realize (GtkWidget* _sender,
                                       gpointer self);

/** Application entry point */
gint
vala_develop_vala_develop_main (gchar** args,
                                gint args_length1)
{
	gint result = 0;
	valaDevelopvalaDevelop* app = NULL;
	valaDevelopvalaDevelop* _tmp0_;
#line 12 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	setlocale (LC_ALL, "");
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	bindtextdomain ("valaDevelop", "/usr/share/locale");
#line 14 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	bind_textdomain_codeset ("valaDevelop", "UTF-8");
#line 15 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	textdomain ("valaDevelop");
#line 16 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	g_set_application_name ("valaDevelop");
#line 20 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp0_ = vala_develop_vala_develop_new ();
#line 20 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	app = _tmp0_;
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	result = g_application_run ((GApplication*) app, (gint) args_length1, args);
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_object_unref0 (app);
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	return result;
#line 156 "main.c"
}

int
main (int argc,
      char ** argv)
{
#line 9 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	return vala_develop_vala_develop_main (argv, argc);
#line 165 "main.c"
}

valaDevelopvalaDevelop*
vala_develop_vala_develop_construct (GType object_type)
{
	valaDevelopvalaDevelop * self = NULL;
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	self = (valaDevelopvalaDevelop*) g_object_new (object_type, "application-id", "valaDevelop.valaDevelop", "flags", G_APPLICATION_NON_UNIQUE | G_APPLICATION_HANDLES_OPEN, NULL);
#line 25 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	return self;
#line 176 "main.c"
}

valaDevelopvalaDevelop*
vala_develop_vala_develop_new (void)
{
#line 25 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	return vala_develop_vala_develop_construct (VALA_DEVELOP_TYPE_VALA_DEVELOP);
#line 184 "main.c"
}

static void
vala_develop_vala_develop_real_startup (GApplication* base)
{
	valaDevelopvalaDevelop * self;
#line 30 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	self = (valaDevelopvalaDevelop*) base;
#line 32 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	G_APPLICATION_CLASS (vala_develop_vala_develop_parent_class)->startup ((GApplication*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_application_get_type (), GtkApplication));
#line 33 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	vala_develop_xml_configuration_load ();
#line 197 "main.c"
}

static Block22Data*
block22_data_ref (Block22Data* _data22_)
{
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	g_atomic_int_inc (&_data22_->_ref_count_);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	return _data22_;
#line 207 "main.c"
}

static void
block22_data_unref (void * _userdata_)
{
	Block22Data* _data22_;
	_data22_ = (Block22Data*) _userdata_;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (g_atomic_int_dec_and_test (&_data22_->_ref_count_)) {
#line 217 "main.c"
		valaDevelopvalaDevelop* self;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		self = _data22_->self;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_object_unref0 (_data22_->window);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_object_unref0 (self);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		g_slice_free (Block22Data, _data22_);
#line 227 "main.c"
	}
}

static void
__lambda121_ (Block22Data* _data22_)
{
	valaDevelopvalaDevelop* self;
	gchar* _tmp0_ = NULL;
	valaDevelopSettings* _tmp1_;
	valaDevelopSettings* _tmp2_;
	gchar* _tmp3_;
	gint x = 0;
	gchar* _tmp5_ = NULL;
	valaDevelopSettings* _tmp6_;
	valaDevelopSettings* _tmp7_;
	gchar* _tmp8_;
	gint y = 0;
	gchar* _tmp10_ = NULL;
	valaDevelopSettings* _tmp11_;
	valaDevelopSettings* _tmp12_;
	gchar* _tmp13_;
	gint width = 0;
	gchar* _tmp15_ = NULL;
	valaDevelopSettings* _tmp16_;
	valaDevelopSettings* _tmp17_;
	gchar* _tmp18_;
	gint height = 0;
	gchar* _tmp20_ = NULL;
	valaDevelopSettings* _tmp21_;
	valaDevelopSettings* _tmp22_;
	gchar* _tmp23_;
	GdkWindowState state = 0U;
	GdkWindowState _tmp25_;
	GFile* _tmp27_;
	gchar* _tmp28_;
	gchar* _tmp29_;
#line 39 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	self = _data22_->self;
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp1_ = vala_develop_xml_configuration_get_Setting ();
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp2_ = _tmp1_;
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp3_ = vala_develop_settings_get (_tmp2_, "xpos");
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp0_ = _tmp3_;
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp0_ == NULL) {
#line 276 "main.c"
		gchar* _tmp4_;
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp4_ = g_strdup ("0");
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp0_);
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp0_ = _tmp4_;
#line 284 "main.c"
	}
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	x = atoi (_tmp0_);
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp6_ = vala_develop_xml_configuration_get_Setting ();
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp7_ = _tmp6_;
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp8_ = vala_develop_settings_get (_tmp7_, "ypos");
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp5_ = _tmp8_;
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp5_ == NULL) {
#line 298 "main.c"
		gchar* _tmp9_;
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp9_ = g_strdup ("0");
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp5_);
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp5_ = _tmp9_;
#line 306 "main.c"
	}
#line 42 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	y = atoi (_tmp5_);
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	gtk_window_move ((GtkWindow*) _data22_->window, x, y);
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp11_ = vala_develop_xml_configuration_get_Setting ();
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp12_ = _tmp11_;
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp13_ = vala_develop_settings_get (_tmp12_, "width");
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp10_ = _tmp13_;
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp10_ == NULL) {
#line 322 "main.c"
		gchar* _tmp14_;
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp14_ = g_strdup ("800");
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp10_);
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp10_ = _tmp14_;
#line 330 "main.c"
	}
#line 44 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	width = atoi (_tmp10_);
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp16_ = vala_develop_xml_configuration_get_Setting ();
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp17_ = _tmp16_;
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp18_ = vala_develop_settings_get (_tmp17_, "height");
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp15_ = _tmp18_;
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp15_ == NULL) {
#line 344 "main.c"
		gchar* _tmp19_;
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp19_ = g_strdup ("600");
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp15_);
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp15_ = _tmp19_;
#line 352 "main.c"
	}
#line 45 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	height = atoi (_tmp15_);
#line 46 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	gtk_window_resize ((GtkWindow*) _data22_->window, width, height);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp21_ = vala_develop_xml_configuration_get_Setting ();
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp22_ = _tmp21_;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp23_ = vala_develop_settings_get (_tmp22_, "state");
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp20_ = _tmp23_;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp20_ == NULL) {
#line 368 "main.c"
		gchar* _tmp24_;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp24_ = g_strdup ("43908");
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp20_);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp20_ = _tmp24_;
#line 376 "main.c"
	}
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	state = (GdkWindowState) atoi (_tmp20_);
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp25_ = state;
#line 48 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if ((_tmp25_ & GDK_WINDOW_STATE_FULLSCREEN) != 0) {
#line 49 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		gtk_window_fullscreen ((GtkWindow*) _data22_->window);
#line 386 "main.c"
	} else {
		GdkWindowState _tmp26_;
#line 50 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp26_ = state;
#line 50 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		if ((_tmp26_ & GDK_WINDOW_STATE_MAXIMIZED) != 0) {
#line 51 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
			gtk_window_maximize ((GtkWindow*) _data22_->window);
#line 395 "main.c"
		}
	}
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp27_ = _data22_->files[0];
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp28_ = g_file_get_path (_tmp27_);
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp29_ = _tmp28_;
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	vala_develop_main_window_LoadSolution (_data22_->window, _tmp29_);
#line 52 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp29_);
#line 39 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp20_);
#line 39 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp15_);
#line 39 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp10_);
#line 39 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp5_);
#line 39 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp0_);
#line 418 "main.c"
}

static void
___lambda121__gtk_widget_realize (GtkWidget* _sender,
                                  gpointer self)
{
#line 39 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	__lambda121_ (self);
#line 427 "main.c"
}

static void
vala_develop_vala_develop_real_open (GApplication* base,
                                     GFile** files,
                                     gint files_length1,
                                     const gchar* hint)
{
	valaDevelopvalaDevelop * self;
	Block22Data* _data22_;
	valaDevelopmainWindow* _tmp0_;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	self = (valaDevelopvalaDevelop*) base;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	g_return_if_fail (hint != NULL);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data22_ = g_slice_new0 (Block22Data);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data22_->_ref_count_ = 1;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data22_->self = g_object_ref (self);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data22_->files = files;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data22_->files_length1 = files_length1;
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp0_ = vala_develop_main_window_new ((GtkApplication*) self);
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	g_object_ref_sink (_tmp0_);
#line 38 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data22_->window = _tmp0_;
#line 39 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	g_signal_connect_data ((GtkWidget*) _data22_->window, "realize", (GCallback) ___lambda121__gtk_widget_realize, block22_data_ref (_data22_), (GClosureNotify) block22_data_unref, 0);
#line 54 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	gtk_widget_show_all ((GtkWidget*) _data22_->window);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	block22_data_unref (_data22_);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data22_ = NULL;
#line 467 "main.c"
}

static Block23Data*
block23_data_ref (Block23Data* _data23_)
{
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	g_atomic_int_inc (&_data23_->_ref_count_);
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	return _data23_;
#line 477 "main.c"
}

static void
block23_data_unref (void * _userdata_)
{
	Block23Data* _data23_;
	_data23_ = (Block23Data*) _userdata_;
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (g_atomic_int_dec_and_test (&_data23_->_ref_count_)) {
#line 487 "main.c"
		valaDevelopvalaDevelop* self;
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		self = _data23_->self;
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_object_unref0 (_data23_->window);
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_object_unref0 (self);
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		g_slice_free (Block23Data, _data23_);
#line 497 "main.c"
	}
}

static void
__lambda122_ (Block23Data* _data23_)
{
	valaDevelopvalaDevelop* self;
	gchar* _tmp0_ = NULL;
	valaDevelopSettings* _tmp1_;
	valaDevelopSettings* _tmp2_;
	gchar* _tmp3_;
	gint x = 0;
	gchar* _tmp5_ = NULL;
	valaDevelopSettings* _tmp6_;
	valaDevelopSettings* _tmp7_;
	gchar* _tmp8_;
	gint y = 0;
	gchar* _tmp10_ = NULL;
	valaDevelopSettings* _tmp11_;
	valaDevelopSettings* _tmp12_;
	gchar* _tmp13_;
	gint width = 0;
	gchar* _tmp15_ = NULL;
	valaDevelopSettings* _tmp16_;
	valaDevelopSettings* _tmp17_;
	gchar* _tmp18_;
	gint height = 0;
	gchar* _tmp20_ = NULL;
	valaDevelopSettings* _tmp21_;
	valaDevelopSettings* _tmp22_;
	gchar* _tmp23_;
	GdkWindowState state = 0U;
	GdkWindowState _tmp25_;
#line 60 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	self = _data23_->self;
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp1_ = vala_develop_xml_configuration_get_Setting ();
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp2_ = _tmp1_;
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp3_ = vala_develop_settings_get (_tmp2_, "xpos");
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp0_ = _tmp3_;
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp0_ == NULL) {
#line 543 "main.c"
		gchar* _tmp4_;
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp4_ = g_strdup ("0");
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp0_);
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp0_ = _tmp4_;
#line 551 "main.c"
	}
#line 62 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	x = atoi (_tmp0_);
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp6_ = vala_develop_xml_configuration_get_Setting ();
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp7_ = _tmp6_;
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp8_ = vala_develop_settings_get (_tmp7_, "ypos");
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp5_ = _tmp8_;
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp5_ == NULL) {
#line 565 "main.c"
		gchar* _tmp9_;
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp9_ = g_strdup ("0");
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp5_);
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp5_ = _tmp9_;
#line 573 "main.c"
	}
#line 63 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	y = atoi (_tmp5_);
#line 64 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	gtk_window_move ((GtkWindow*) _data23_->window, x, y);
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp11_ = vala_develop_xml_configuration_get_Setting ();
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp12_ = _tmp11_;
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp13_ = vala_develop_settings_get (_tmp12_, "width");
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp10_ = _tmp13_;
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp10_ == NULL) {
#line 589 "main.c"
		gchar* _tmp14_;
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp14_ = g_strdup ("800");
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp10_);
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp10_ = _tmp14_;
#line 597 "main.c"
	}
#line 65 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	width = atoi (_tmp10_);
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp16_ = vala_develop_xml_configuration_get_Setting ();
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp17_ = _tmp16_;
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp18_ = vala_develop_settings_get (_tmp17_, "height");
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp15_ = _tmp18_;
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp15_ == NULL) {
#line 611 "main.c"
		gchar* _tmp19_;
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp19_ = g_strdup ("600");
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp15_);
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp15_ = _tmp19_;
#line 619 "main.c"
	}
#line 66 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	height = atoi (_tmp15_);
#line 67 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	gtk_window_resize ((GtkWindow*) _data23_->window, width, height);
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp21_ = vala_develop_xml_configuration_get_Setting ();
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp22_ = _tmp21_;
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp23_ = vala_develop_settings_get (_tmp22_, "state");
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp20_ = _tmp23_;
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if (_tmp20_ == NULL) {
#line 635 "main.c"
		gchar* _tmp24_;
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp24_ = g_strdup ("43908");
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_g_free0 (_tmp20_);
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp20_ = _tmp24_;
#line 643 "main.c"
	}
#line 68 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	state = (GdkWindowState) atoi (_tmp20_);
#line 69 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp25_ = state;
#line 69 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	if ((_tmp25_ & GDK_WINDOW_STATE_FULLSCREEN) != 0) {
#line 70 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		gtk_window_fullscreen ((GtkWindow*) _data23_->window);
#line 653 "main.c"
	} else {
		GdkWindowState _tmp26_;
#line 71 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		_tmp26_ = state;
#line 71 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
		if ((_tmp26_ & GDK_WINDOW_STATE_MAXIMIZED) != 0) {
#line 72 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
			gtk_window_maximize ((GtkWindow*) _data23_->window);
#line 662 "main.c"
		}
	}
#line 60 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp20_);
#line 60 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp15_);
#line 60 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp10_);
#line 60 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp5_);
#line 60 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_g_free0 (_tmp0_);
#line 675 "main.c"
}

static void
___lambda122__gtk_widget_realize (GtkWidget* _sender,
                                  gpointer self)
{
#line 60 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	__lambda122_ (self);
#line 684 "main.c"
}

static void
vala_develop_vala_develop_real_activate (GApplication* base)
{
	valaDevelopvalaDevelop * self;
	Block23Data* _data23_;
	valaDevelopmainWindow* _tmp0_;
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	self = (valaDevelopvalaDevelop*) base;
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data23_ = g_slice_new0 (Block23Data);
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data23_->_ref_count_ = 1;
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data23_->self = g_object_ref (self);
#line 59 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_tmp0_ = vala_develop_main_window_new ((GtkApplication*) self);
#line 59 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	g_object_ref_sink (_tmp0_);
#line 59 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data23_->window = _tmp0_;
#line 60 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	g_signal_connect_data ((GtkWidget*) _data23_->window, "realize", (GCallback) ___lambda122__gtk_widget_realize, block23_data_ref (_data23_), (GClosureNotify) block23_data_unref, 0);
#line 74 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	gtk_widget_show_all ((GtkWidget*) _data23_->window);
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	block23_data_unref (_data23_);
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	_data23_ = NULL;
#line 715 "main.c"
}

static void
vala_develop_vala_develop_class_init (valaDevelopvalaDevelopClass * klass,
                                      gpointer klass_data)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	vala_develop_vala_develop_parent_class = g_type_class_peek_parent (klass);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	((GApplicationClass *) klass)->startup = (void (*) (GApplication*)) vala_develop_vala_develop_real_startup;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	((GApplicationClass *) klass)->open = (void (*) (GApplication*, GFile**, gint, const gchar*)) vala_develop_vala_develop_real_open;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/main.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) vala_develop_vala_develop_real_activate;
#line 730 "main.c"
}

static void
vala_develop_vala_develop_instance_init (valaDevelopvalaDevelop * self,
                                         gpointer klass)
{
}

/**
     * Application
     */
GType
vala_develop_vala_develop_get_type (void)
{
	static volatile gsize vala_develop_vala_develop_type_id__volatile = 0;
	if (g_once_init_enter (&vala_develop_vala_develop_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (valaDevelopvalaDevelopClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_develop_vala_develop_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (valaDevelopvalaDevelop), 0, (GInstanceInitFunc) vala_develop_vala_develop_instance_init, NULL };
		GType vala_develop_vala_develop_type_id;
		vala_develop_vala_develop_type_id = g_type_register_static (gtk_application_get_type (), "valaDevelopvalaDevelop", &g_define_type_info, 0);
		g_once_init_leave (&vala_develop_vala_develop_type_id__volatile, vala_develop_vala_develop_type_id);
	}
	return vala_develop_vala_develop_type_id__volatile;
}

