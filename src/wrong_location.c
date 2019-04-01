/* wrong_location.c generated by valac UNKNOWN, the Vala compiler
 * generated from wrong_location.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>

#define VALA_DEVELOP_TYPE_WRONG_LOCATION (vala_develop_wrong_location_get_type ())
#define VALA_DEVELOP_WRONG_LOCATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_WRONG_LOCATION, valaDevelopWrongLocation))
#define VALA_DEVELOP_WRONG_LOCATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_WRONG_LOCATION, valaDevelopWrongLocationClass))
#define VALA_DEVELOP_IS_WRONG_LOCATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_WRONG_LOCATION))
#define VALA_DEVELOP_IS_WRONG_LOCATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_WRONG_LOCATION))
#define VALA_DEVELOP_WRONG_LOCATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_WRONG_LOCATION, valaDevelopWrongLocationClass))

typedef struct _valaDevelopWrongLocation valaDevelopWrongLocation;
typedef struct _valaDevelopWrongLocationClass valaDevelopWrongLocationClass;
typedef struct _valaDevelopWrongLocationPrivate valaDevelopWrongLocationPrivate;
enum  {
	VALA_DEVELOP_WRONG_LOCATION_0_PROPERTY,
	VALA_DEVELOP_WRONG_LOCATION_IMPORT_OPTION_PROPERTY,
	VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_PROPERTY,
	VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_VISIBLE_PROPERTY,
	VALA_DEVELOP_WRONG_LOCATION_NUM_PROPERTIES
};
static GParamSpec* vala_develop_wrong_location_properties[VALA_DEVELOP_WRONG_LOCATION_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef enum  {
	VALA_DEVELOP_IMPORT_OPTIONS_Use,
	VALA_DEVELOP_IMPORT_OPTIONS_Copy,
	VALA_DEVELOP_IMPORT_OPTIONS_Move,
	VALA_DEVELOP_IMPORT_OPTIONS_Link,
	VALA_DEVELOP_IMPORT_OPTIONS_Cancel
} valaDevelopImportOptions;

#define VALA_DEVELOP_TYPE_IMPORT_OPTIONS (vala_develop_import_options_get_type ())

struct _valaDevelopWrongLocation {
	GtkMessageDialog parent_instance;
	valaDevelopWrongLocationPrivate * priv;
};

struct _valaDevelopWrongLocationClass {
	GtkMessageDialogClass parent_class;
};

struct _valaDevelopWrongLocationPrivate {
	GtkRadioButton* _copy;
	GtkRadioButton* _move;
	GtkRadioButton* _link;
	GtkCheckButton* _same4all;
};

static gint valaDevelopWrongLocation_private_offset;
static gpointer vala_develop_wrong_location_parent_class = NULL;

GType vala_develop_wrong_location_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopWrongLocation, g_object_unref)
valaDevelopWrongLocation* vala_develop_wrong_location_new (GtkWidget* parent);
valaDevelopWrongLocation* vala_develop_wrong_location_construct (GType object_type,
                                                                 GtkWidget* parent);
GType vala_develop_import_options_get_type (void) G_GNUC_CONST;
valaDevelopImportOptions vala_develop_wrong_location_get_ImportOption (valaDevelopWrongLocation* self);
gboolean vala_develop_wrong_location_get_Same4All (valaDevelopWrongLocation* self);
void vala_develop_wrong_location_set_Same4AllVisible (valaDevelopWrongLocation* self,
                                                      gboolean value);
static void vala_develop_wrong_location_finalize (GObject * obj);
static void _vala_vala_develop_wrong_location_get_property (GObject * object,
                                                     guint property_id,
                                                     GValue * value,
                                                     GParamSpec * pspec);
static void _vala_vala_develop_wrong_location_set_property (GObject * object,
                                                     guint property_id,
                                                     const GValue * value,
                                                     GParamSpec * pspec);

static inline gpointer
vala_develop_wrong_location_get_instance_private (valaDevelopWrongLocation* self)
{
	return G_STRUCT_MEMBER_P (self, valaDevelopWrongLocation_private_offset);
}

valaDevelopWrongLocation*
vala_develop_wrong_location_construct (GType object_type,
                                       GtkWidget* parent)
{
	valaDevelopWrongLocation * self = NULL;
	GtkWidget* _tmp0_;
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	self = (valaDevelopWrongLocation*) g_object_new (object_type, NULL);
#line 15 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp0_ = gtk_widget_get_toplevel (parent);
#line 15 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_window_set_transient_for ((GtkWindow*) self, G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_window_get_type (), GtkWindow));
#line 16 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_widget_set_visible ((GtkWidget*) self, FALSE);
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	return self;
#line 101 "wrong_location.c"
}

valaDevelopWrongLocation*
vala_develop_wrong_location_new (GtkWidget* parent)
{
#line 13 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	return vala_develop_wrong_location_construct (VALA_DEVELOP_TYPE_WRONG_LOCATION, parent);
#line 109 "wrong_location.c"
}

valaDevelopImportOptions
vala_develop_wrong_location_get_ImportOption (valaDevelopWrongLocation* self)
{
	valaDevelopImportOptions result;
	GtkRadioButton* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	GtkRadioButton* _tmp3_;
	gboolean _tmp4_;
	gboolean _tmp5_;
	GtkRadioButton* _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
#line 25 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp0_ = self->priv->_copy;
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp1_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp0_);
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp2_ = _tmp1_;
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	if (_tmp2_) {
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		result = VALA_DEVELOP_IMPORT_OPTIONS_Copy;
#line 27 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		return result;
#line 139 "wrong_location.c"
	}
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp3_ = self->priv->_move;
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp4_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp3_);
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp5_ = _tmp4_;
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	if (_tmp5_) {
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		result = VALA_DEVELOP_IMPORT_OPTIONS_Move;
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		return result;
#line 153 "wrong_location.c"
	}
#line 29 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp6_ = self->priv->_link;
#line 29 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp7_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp6_);
#line 29 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp8_ = _tmp7_;
#line 29 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	if (_tmp8_) {
#line 29 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		result = VALA_DEVELOP_IMPORT_OPTIONS_Link;
#line 29 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		return result;
#line 167 "wrong_location.c"
	}
#line 30 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	result = VALA_DEVELOP_IMPORT_OPTIONS_Use;
#line 30 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	return result;
#line 173 "wrong_location.c"
}

gboolean
vala_develop_wrong_location_get_Same4All (valaDevelopWrongLocation* self)
{
	gboolean result;
	GtkCheckButton* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
#line 33 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 33 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp0_ = self->priv->_same4all;
#line 33 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp1_ = gtk_toggle_button_get_active ((GtkToggleButton*) _tmp0_);
#line 33 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp2_ = _tmp1_;
#line 33 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	result = _tmp2_;
#line 33 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	return result;
#line 195 "wrong_location.c"
}

void
vala_develop_wrong_location_set_Same4AllVisible (valaDevelopWrongLocation* self,
                                                 gboolean value)
{
	GtkCheckButton* _tmp0_;
#line 34 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_return_if_fail (self != NULL);
#line 34 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_tmp0_ = self->priv->_same4all;
#line 34 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp0_, value);
#line 34 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_object_notify_by_pspec ((GObject *) self, vala_develop_wrong_location_properties[VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_VISIBLE_PROPERTY]);
#line 211 "wrong_location.c"
}

static void
vala_develop_wrong_location_class_init (valaDevelopWrongLocationClass * klass,
                                        gpointer klass_data)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	vala_develop_wrong_location_parent_class = g_type_class_peek_parent (klass);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_type_class_adjust_private_offset (klass, &valaDevelopWrongLocation_private_offset);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_vala_develop_wrong_location_get_property;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_vala_develop_wrong_location_set_property;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	G_OBJECT_CLASS (klass)->finalize = vala_develop_wrong_location_finalize;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DEVELOP_WRONG_LOCATION_IMPORT_OPTION_PROPERTY, vala_develop_wrong_location_properties[VALA_DEVELOP_WRONG_LOCATION_IMPORT_OPTION_PROPERTY] = g_param_spec_enum ("ImportOption", "ImportOption", "ImportOption", VALA_DEVELOP_TYPE_IMPORT_OPTIONS, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_PROPERTY, vala_develop_wrong_location_properties[VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_PROPERTY] = g_param_spec_boolean ("Same4All", "Same4All", "Same4All", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_VISIBLE_PROPERTY, vala_develop_wrong_location_properties[VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_VISIBLE_PROPERTY] = g_param_spec_boolean ("Same4AllVisible", "Same4AllVisible", "Same4AllVisible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/valaDevelop/wronglocation.glade");
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "_copy", FALSE, valaDevelopWrongLocation_private_offset + G_STRUCT_OFFSET (valaDevelopWrongLocationPrivate, _copy));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "_move", FALSE, valaDevelopWrongLocation_private_offset + G_STRUCT_OFFSET (valaDevelopWrongLocationPrivate, _move));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "_link", FALSE, valaDevelopWrongLocation_private_offset + G_STRUCT_OFFSET (valaDevelopWrongLocationPrivate, _link));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "_same4all", FALSE, valaDevelopWrongLocation_private_offset + G_STRUCT_OFFSET (valaDevelopWrongLocationPrivate, _same4all));
#line 244 "wrong_location.c"
}

static void
vala_develop_wrong_location_instance_init (valaDevelopWrongLocation * self,
                                           gpointer klass)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	self->priv = vala_develop_wrong_location_get_instance_private (self);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 255 "wrong_location.c"
}

static void
vala_develop_wrong_location_finalize (GObject * obj)
{
	valaDevelopWrongLocation * self;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_DEVELOP_TYPE_WRONG_LOCATION, valaDevelopWrongLocation);
#line 8 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_g_object_unref0 (self->priv->_copy);
#line 9 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_g_object_unref0 (self->priv->_move);
#line 10 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_g_object_unref0 (self->priv->_link);
#line 11 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	_g_object_unref0 (self->priv->_same4all);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	G_OBJECT_CLASS (vala_develop_wrong_location_parent_class)->finalize (obj);
#line 274 "wrong_location.c"
}

GType
vala_develop_wrong_location_get_type (void)
{
	static volatile gsize vala_develop_wrong_location_type_id__volatile = 0;
	if (g_once_init_enter (&vala_develop_wrong_location_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (valaDevelopWrongLocationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_develop_wrong_location_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (valaDevelopWrongLocation), 0, (GInstanceInitFunc) vala_develop_wrong_location_instance_init, NULL };
		GType vala_develop_wrong_location_type_id;
		vala_develop_wrong_location_type_id = g_type_register_static (gtk_message_dialog_get_type (), "valaDevelopWrongLocation", &g_define_type_info, 0);
		valaDevelopWrongLocation_private_offset = g_type_add_instance_private (vala_develop_wrong_location_type_id, sizeof (valaDevelopWrongLocationPrivate));
		g_once_init_leave (&vala_develop_wrong_location_type_id__volatile, vala_develop_wrong_location_type_id);
	}
	return vala_develop_wrong_location_type_id__volatile;
}

static void
_vala_vala_develop_wrong_location_get_property (GObject * object,
                                                guint property_id,
                                                GValue * value,
                                                GParamSpec * pspec)
{
	valaDevelopWrongLocation * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALA_DEVELOP_TYPE_WRONG_LOCATION, valaDevelopWrongLocation);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	switch (property_id) {
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		case VALA_DEVELOP_WRONG_LOCATION_IMPORT_OPTION_PROPERTY:
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		g_value_set_enum (value, vala_develop_wrong_location_get_ImportOption (self));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		break;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		case VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_PROPERTY:
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		g_value_set_boolean (value, vala_develop_wrong_location_get_Same4All (self));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		break;
#line 313 "wrong_location.c"
		default:
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		break;
#line 319 "wrong_location.c"
	}
}

static void
_vala_vala_develop_wrong_location_set_property (GObject * object,
                                                guint property_id,
                                                const GValue * value,
                                                GParamSpec * pspec)
{
	valaDevelopWrongLocation * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALA_DEVELOP_TYPE_WRONG_LOCATION, valaDevelopWrongLocation);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
	switch (property_id) {
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		case VALA_DEVELOP_WRONG_LOCATION_SAME4_ALL_VISIBLE_PROPERTY:
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		vala_develop_wrong_location_set_Same4AllVisible (self, g_value_get_boolean (value));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		break;
#line 339 "wrong_location.c"
		default:
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/wrong_location.vala"
		break;
#line 345 "wrong_location.c"
	}
}
