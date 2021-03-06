// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_POPUPMENU_ONDISMISSLISTENER_H
#define SCAPIX_ANDROID_WIDGET_POPUPMENU_ONDISMISSLISTENER_H

namespace scapix::java_api {

namespace android::widget { class PopupMenu; }

namespace android::widget {

class PopupMenu_OnDismissListener : public object_base<SCAPIX_META_STRING("android/widget/PopupMenu$OnDismissListener"),
	java::lang::Object>
{
public:

	void onDismiss(ref<android::widget::PopupMenu> p1);

protected:

	PopupMenu_OnDismissListener(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/widget/PopupMenu.h>

namespace scapix::java_api {
namespace android::widget {

inline void PopupMenu_OnDismissListener::onDismiss(ref<android::widget::PopupMenu> p1) { return call_method<SCAPIX_META_STRING("onDismiss"), void>(p1); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_POPUPMENU_ONDISMISSLISTENER_H
