/* text_viewer-window.c
 *
 * Copyright 2022 Tallys
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "text_viewer-config.h"
#include "text_viewer-window.h"

struct _TextViewerWindow
{
  GtkApplicationWindow  parent_instance;

  /* Template widgets */
  GtkHeaderBar        *header_bar;
  GtkTextView         *main_text_view;
};

G_DEFINE_TYPE (TextViewerWindow, text_viewer_window, GTK_TYPE_APPLICATION_WINDOW)

static void
text_viewer_window_class_init (TextViewerWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/com/example/TextViewer/text_viewer-window.ui");
  gtk_widget_class_bind_template_child (widget_class, TextViewerWindow, header_bar);
  gtk_widget_class_bind_template_child (widget_class, TextViewerWindow, main_text_view);
}

static void
text_viewer_window_init (TextViewerWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
