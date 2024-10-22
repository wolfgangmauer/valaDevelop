/* replace_dialog.c generated by valac UNKNOWN, the Vala compiler
 * generated from replace_dialog.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <glib/gi18n-lib.h>

#define VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG (vala_develop_search_replace_dialog_get_type ())
#define VALA_DEVELOP_SEARCH_REPLACE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG, valaDevelopSearchReplaceDialog))
#define VALA_DEVELOP_SEARCH_REPLACE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG, valaDevelopSearchReplaceDialogClass))
#define VALA_DEVELOP_IS_SEARCH_REPLACE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG))
#define VALA_DEVELOP_IS_SEARCH_REPLACE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG))
#define VALA_DEVELOP_SEARCH_REPLACE_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG, valaDevelopSearchReplaceDialogClass))

typedef struct _valaDevelopSearchReplaceDialog valaDevelopSearchReplaceDialog;
typedef struct _valaDevelopSearchReplaceDialogClass valaDevelopSearchReplaceDialogClass;
typedef struct _valaDevelopSearchReplaceDialogPrivate valaDevelopSearchReplaceDialogPrivate;

#define VALA_DEVELOP_TYPE_REPLACE_DIALOG (vala_develop_replace_dialog_get_type ())
#define VALA_DEVELOP_REPLACE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_REPLACE_DIALOG, valaDevelopReplaceDialog))
#define VALA_DEVELOP_REPLACE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_REPLACE_DIALOG, valaDevelopReplaceDialogClass))
#define VALA_DEVELOP_IS_REPLACE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_REPLACE_DIALOG))
#define VALA_DEVELOP_IS_REPLACE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_REPLACE_DIALOG))
#define VALA_DEVELOP_REPLACE_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_REPLACE_DIALOG, valaDevelopReplaceDialogClass))

typedef struct _valaDevelopReplaceDialog valaDevelopReplaceDialog;
typedef struct _valaDevelopReplaceDialogClass valaDevelopReplaceDialogClass;
typedef struct _valaDevelopReplaceDialogPrivate valaDevelopReplaceDialogPrivate;
enum  {
	VALA_DEVELOP_REPLACE_DIALOG_0_PROPERTY,
	VALA_DEVELOP_REPLACE_DIALOG_NUM_PROPERTIES
};
static GParamSpec* vala_develop_replace_dialog_properties[VALA_DEVELOP_REPLACE_DIALOG_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

#define VALA_DEVELOP_TYPE_MAIN_PANED (vala_develop_main_paned_get_type ())
#define VALA_DEVELOP_MAIN_PANED(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_DEVELOP_TYPE_MAIN_PANED, valaDevelopMainPaned))
#define VALA_DEVELOP_MAIN_PANED_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_DEVELOP_TYPE_MAIN_PANED, valaDevelopMainPanedClass))
#define VALA_DEVELOP_IS_MAIN_PANED(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_DEVELOP_TYPE_MAIN_PANED))
#define VALA_DEVELOP_IS_MAIN_PANED_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_DEVELOP_TYPE_MAIN_PANED))
#define VALA_DEVELOP_MAIN_PANED_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_DEVELOP_TYPE_MAIN_PANED, valaDevelopMainPanedClass))

typedef struct _valaDevelopMainPaned valaDevelopMainPaned;
typedef struct _valaDevelopMainPanedClass valaDevelopMainPanedClass;

struct _valaDevelopSearchReplaceDialog {
	GtkDialog parent_instance;
	valaDevelopSearchReplaceDialogPrivate * priv;
	GtkTreeIter _overviewTreeIter;
	GtkWidget* _parent;
};

struct _valaDevelopSearchReplaceDialogClass {
	GtkDialogClass parent_class;
};

struct _valaDevelopReplaceDialog {
	valaDevelopSearchReplaceDialog parent_instance;
	valaDevelopReplaceDialogPrivate * priv;
	GtkEntry* replaceWhat;
};

struct _valaDevelopReplaceDialogClass {
	valaDevelopSearchReplaceDialogClass parent_class;
};

struct _valaDevelopReplaceDialogPrivate {
	GtkComboBoxText* searchWhere;
	GtkEntry* searchPathText;
	GtkBox* searchDirectory;
	GtkButton* accept;
};

static gint valaDevelopReplaceDialog_private_offset;
static gpointer vala_develop_replace_dialog_parent_class = NULL;

GType vala_develop_search_replace_dialog_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopSearchReplaceDialog, g_object_unref)
GType vala_develop_replace_dialog_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopReplaceDialog, g_object_unref)
valaDevelopReplaceDialog* vala_develop_replace_dialog_new (GtkWidget* parent,
                                                           GtkTreeIter* iter);
valaDevelopReplaceDialog* vala_develop_replace_dialog_construct (GType object_type,
                                                                 GtkWidget* parent,
                                                                 GtkTreeIter* iter);
valaDevelopSearchReplaceDialog* vala_develop_search_replace_dialog_new (void);
valaDevelopSearchReplaceDialog* vala_develop_search_replace_dialog_construct (GType object_type);
static void vala_develop_replace_dialog_OnChooseDirectory (valaDevelopReplaceDialog* self);
static void _vala_develop_replace_dialog_OnChooseDirectory_gtk_button_clicked (GtkButton* _sender,
                                                                        gpointer self);
static void vala_develop_replace_dialog_OnSearchWhereChanged (valaDevelopReplaceDialog* self);
static void _vala_develop_replace_dialog_OnSearchWhereChanged_gtk_combo_box_changed (GtkComboBox* _sender,
                                                                              gpointer self);
static void vala_develop_replace_dialog_OnAccept (valaDevelopReplaceDialog* self);
GType vala_develop_main_paned_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (valaDevelopMainPaned, g_object_unref)
void vala_develop_main_paned_StartReplace (valaDevelopMainPaned* self);
static void _vala_develop_replace_dialog_OnAccept_gtk_button_clicked (GtkButton* _sender,
                                                               gpointer self);
static void vala_develop_replace_dialog_OnCancel (valaDevelopReplaceDialog* self);
static void _vala_develop_replace_dialog_OnCancel_gtk_button_clicked (GtkButton* _sender,
                                                               gpointer self);
static void vala_develop_replace_dialog_finalize (GObject * obj);

static inline gpointer
vala_develop_replace_dialog_get_instance_private (valaDevelopReplaceDialog* self)
{
	return G_STRUCT_MEMBER_P (self, valaDevelopReplaceDialog_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	return self ? g_object_ref (self) : NULL;
#line 119 "replace_dialog.c"
}

valaDevelopReplaceDialog*
vala_develop_replace_dialog_construct (GType object_type,
                                       GtkWidget* parent,
                                       GtkTreeIter* iter)
{
	valaDevelopReplaceDialog * self = NULL;
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	GtkTreeIter _tmp2_;
	GtkButton* _tmp3_;
#line 19 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 19 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	g_return_val_if_fail (iter != NULL, NULL);
#line 19 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	self = (valaDevelopReplaceDialog*) vala_develop_search_replace_dialog_construct (object_type);
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp0_ = _g_object_ref0 (parent);
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_g_object_unref0 (((valaDevelopSearchReplaceDialog*) self)->_parent);
#line 21 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	((valaDevelopSearchReplaceDialog*) self)->_parent = _tmp0_;
#line 22 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp1_ = gtk_widget_get_toplevel (parent);
#line 22 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_window_set_transient_for ((GtkWindow*) self, G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, gtk_window_get_type (), GtkWindow));
#line 23 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp2_ = *iter;
#line 23 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	((valaDevelopSearchReplaceDialog*) self)->_overviewTreeIter = _tmp2_;
#line 24 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp3_ = self->priv->accept;
#line 24 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_set_sensitive ((GtkWidget*) _tmp3_, FALSE);
#line 19 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	return self;
#line 158 "replace_dialog.c"
}

valaDevelopReplaceDialog*
vala_develop_replace_dialog_new (GtkWidget* parent,
                                 GtkTreeIter* iter)
{
#line 19 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	return vala_develop_replace_dialog_construct (VALA_DEVELOP_TYPE_REPLACE_DIALOG, parent, iter);
#line 167 "replace_dialog.c"
}

static void
vala_develop_replace_dialog_OnChooseDirectory (valaDevelopReplaceDialog* self)
{
	GtkFileChooserDialog* chooser = NULL;
	GtkWidget* _tmp0_;
	GtkFileChooserDialog* _tmp1_;
	GtkFileChooserDialog* _tmp2_;
	GtkFileChooserDialog* _tmp7_;
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	g_return_if_fail (self != NULL);
#line 30 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp0_ = gtk_widget_get_toplevel ((GtkWidget*) self);
#line 30 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp1_ = (GtkFileChooserDialog*) gtk_file_chooser_dialog_new (_ ("Select directory"), G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, gtk_window_get_type (), GtkWindow), GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER, _ ("_Cancel"), GTK_RESPONSE_CANCEL, _ ("_Open"), GTK_RESPONSE_ACCEPT, NULL);
#line 30 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	g_object_ref_sink (_tmp1_);
#line 30 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	chooser = _tmp1_;
#line 35 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp2_ = chooser;
#line 35 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	if (gtk_dialog_run ((GtkDialog*) _tmp2_) == ((gint) GTK_RESPONSE_ACCEPT)) {
#line 192 "replace_dialog.c"
		GtkEntry* _tmp3_;
		GtkFileChooserDialog* _tmp4_;
		gchar* _tmp5_;
		gchar* _tmp6_;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
		_tmp3_ = self->priv->searchPathText;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
		_tmp4_ = chooser;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
		_tmp5_ = gtk_file_chooser_get_filename ((GtkFileChooser*) _tmp4_);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
		_tmp6_ = _tmp5_;
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
		gtk_entry_set_text (_tmp3_, _tmp6_);
#line 36 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
		_g_free0 (_tmp6_);
#line 209 "replace_dialog.c"
	}
#line 37 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp7_ = chooser;
#line 37 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_destroy ((GtkWidget*) _tmp7_);
#line 28 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_g_object_unref0 (chooser);
#line 217 "replace_dialog.c"
}

static void
_vala_develop_replace_dialog_OnChooseDirectory_gtk_button_clicked (GtkButton* _sender,
                                                                   gpointer self)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	vala_develop_replace_dialog_OnChooseDirectory ((valaDevelopReplaceDialog*) self);
#line 226 "replace_dialog.c"
}

static void
vala_develop_replace_dialog_OnSearchWhereChanged (valaDevelopReplaceDialog* self)
{
	GtkBox* _tmp0_;
	GtkComboBoxText* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
#line 41 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	g_return_if_fail (self != NULL);
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp0_ = self->priv->searchDirectory;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp1_ = self->priv->searchWhere;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp2_ = gtk_combo_box_get_active_id ((GtkComboBox*) _tmp1_);
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp3_ = _tmp2_;
#line 43 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_set_visible ((GtkWidget*) _tmp0_, g_strcmp0 (_tmp3_, "FolderID") == 0);
#line 248 "replace_dialog.c"
}

static void
_vala_develop_replace_dialog_OnSearchWhereChanged_gtk_combo_box_changed (GtkComboBox* _sender,
                                                                         gpointer self)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	vala_develop_replace_dialog_OnSearchWhereChanged ((valaDevelopReplaceDialog*) self);
#line 257 "replace_dialog.c"
}

static void
vala_develop_replace_dialog_OnAccept (valaDevelopReplaceDialog* self)
{
	valaDevelopMainPaned* mainPaned = NULL;
	GtkWidget* _tmp0_;
	valaDevelopMainPaned* _tmp1_;
	valaDevelopMainPaned* _tmp2_;
	valaDevelopMainPaned* _tmp3_;
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	g_return_if_fail (self != NULL);
#line 49 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp0_ = ((valaDevelopSearchReplaceDialog*) self)->_parent;
#line 49 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, VALA_DEVELOP_TYPE_MAIN_PANED) ? ((valaDevelopMainPaned*) _tmp0_) : NULL);
#line 49 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	mainPaned = _tmp1_;
#line 50 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp2_ = mainPaned;
#line 50 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	if (_tmp2_ == NULL) {
#line 50 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
		_g_object_unref0 (mainPaned);
#line 50 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
		return;
#line 284 "replace_dialog.c"
	}
#line 51 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_tmp3_ = mainPaned;
#line 51 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	vala_develop_main_paned_StartReplace (_tmp3_);
#line 47 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_g_object_unref0 (mainPaned);
#line 292 "replace_dialog.c"
}

static void
_vala_develop_replace_dialog_OnAccept_gtk_button_clicked (GtkButton* _sender,
                                                          gpointer self)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	vala_develop_replace_dialog_OnAccept ((valaDevelopReplaceDialog*) self);
#line 301 "replace_dialog.c"
}

static void
vala_develop_replace_dialog_OnCancel (valaDevelopReplaceDialog* self)
{
#line 55 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	g_return_if_fail (self != NULL);
#line 57 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_dialog_response ((GtkDialog*) self, (gint) GTK_RESPONSE_CANCEL);
#line 311 "replace_dialog.c"
}

static void
_vala_develop_replace_dialog_OnCancel_gtk_button_clicked (GtkButton* _sender,
                                                          gpointer self)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	vala_develop_replace_dialog_OnCancel ((valaDevelopReplaceDialog*) self);
#line 320 "replace_dialog.c"
}

static void
vala_develop_replace_dialog_class_init (valaDevelopReplaceDialogClass * klass,
                                        gpointer klass_data)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	vala_develop_replace_dialog_parent_class = g_type_class_peek_parent (klass);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	g_type_class_adjust_private_offset (klass, &valaDevelopReplaceDialog_private_offset);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	G_OBJECT_CLASS (klass)->finalize = vala_develop_replace_dialog_finalize;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/valaDevelop/replaceDialog.glade");
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "replaceWhat", FALSE, G_STRUCT_OFFSET (valaDevelopReplaceDialog, replaceWhat));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "searchWhere", FALSE, valaDevelopReplaceDialog_private_offset + G_STRUCT_OFFSET (valaDevelopReplaceDialogPrivate, searchWhere));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "searchPathText", FALSE, valaDevelopReplaceDialog_private_offset + G_STRUCT_OFFSET (valaDevelopReplaceDialogPrivate, searchPathText));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "searchDirectory", FALSE, valaDevelopReplaceDialog_private_offset + G_STRUCT_OFFSET (valaDevelopReplaceDialogPrivate, searchDirectory));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "accept", FALSE, valaDevelopReplaceDialog_private_offset + G_STRUCT_OFFSET (valaDevelopReplaceDialogPrivate, accept));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_callback_full (GTK_WIDGET_CLASS (klass), "OnChooseDirectory", G_CALLBACK(_vala_develop_replace_dialog_OnChooseDirectory_gtk_button_clicked));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_callback_full (GTK_WIDGET_CLASS (klass), "OnSearchWhereChanged", G_CALLBACK(_vala_develop_replace_dialog_OnSearchWhereChanged_gtk_combo_box_changed));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_callback_full (GTK_WIDGET_CLASS (klass), "OnAccept", G_CALLBACK(_vala_develop_replace_dialog_OnAccept_gtk_button_clicked));
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_class_bind_template_callback_full (GTK_WIDGET_CLASS (klass), "OnCancel", G_CALLBACK(_vala_develop_replace_dialog_OnCancel_gtk_button_clicked));
#line 353 "replace_dialog.c"
}

static void
vala_develop_replace_dialog_instance_init (valaDevelopReplaceDialog * self,
                                           gpointer klass)
{
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	self->priv = vala_develop_replace_dialog_get_instance_private (self);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 364 "replace_dialog.c"
}

static void
vala_develop_replace_dialog_finalize (GObject * obj)
{
	valaDevelopReplaceDialog * self;
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_DEVELOP_TYPE_REPLACE_DIALOG, valaDevelopReplaceDialog);
#line 8 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_g_object_unref0 (self->replaceWhat);
#line 9 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_g_object_unref0 (self->priv->searchWhere);
#line 10 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_g_object_unref0 (self->priv->searchPathText);
#line 12 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_g_object_unref0 (self->priv->searchDirectory);
#line 17 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	_g_object_unref0 (self->priv->accept);
#line 6 "/home/wolfgang/Projekte/vDevelop/valaDevelop/SearchAndReplace/replace_dialog.vala"
	G_OBJECT_CLASS (vala_develop_replace_dialog_parent_class)->finalize (obj);
#line 385 "replace_dialog.c"
}

GType
vala_develop_replace_dialog_get_type (void)
{
	static volatile gsize vala_develop_replace_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&vala_develop_replace_dialog_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (valaDevelopReplaceDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_develop_replace_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (valaDevelopReplaceDialog), 0, (GInstanceInitFunc) vala_develop_replace_dialog_instance_init, NULL };
		GType vala_develop_replace_dialog_type_id;
		vala_develop_replace_dialog_type_id = g_type_register_static (VALA_DEVELOP_TYPE_SEARCH_REPLACE_DIALOG, "valaDevelopReplaceDialog", &g_define_type_info, 0);
		valaDevelopReplaceDialog_private_offset = g_type_add_instance_private (vala_develop_replace_dialog_type_id, sizeof (valaDevelopReplaceDialogPrivate));
		g_once_init_leave (&vala_develop_replace_dialog_type_id__volatile, vala_develop_replace_dialog_type_id);
	}
	return vala_develop_replace_dialog_type_id__volatile;
}

