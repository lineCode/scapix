// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WIDGET_SEARCHVIEW_ONQUERYTEXTLISTENER_H
#define SCAPIX_ANDROID_WIDGET_SEARCHVIEW_ONQUERYTEXTLISTENER_H

namespace scapix::java_api {

namespace java::lang { class String; }

namespace android::widget {

class SearchView_OnQueryTextListener : public object_base<SCAPIX_META_STRING("android/widget/SearchView$OnQueryTextListener"),
	java::lang::Object>
{
public:

	jboolean onQueryTextSubmit(ref<java::lang::String> p1);
	jboolean onQueryTextChange(ref<java::lang::String> p1);

protected:

	SearchView_OnQueryTextListener(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::widget {

inline jboolean SearchView_OnQueryTextListener::onQueryTextSubmit(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("onQueryTextSubmit"), jboolean>(p1); }
inline jboolean SearchView_OnQueryTextListener::onQueryTextChange(ref<java::lang::String> p1) { return call_method<SCAPIX_META_STRING("onQueryTextChange"), jboolean>(p1); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_SEARCHVIEW_ONQUERYTEXTLISTENER_H
