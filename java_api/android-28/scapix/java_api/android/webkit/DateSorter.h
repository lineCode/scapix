// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WEBKIT_DATESORTER_H
#define SCAPIX_ANDROID_WEBKIT_DATESORTER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace java::lang { class String; }

namespace android::webkit {

class DateSorter : public object_base<SCAPIX_META_STRING("android/webkit/DateSorter"),
	java::lang::Object>
{
public:

	static jint DAY_COUNT_();

	static ref<DateSorter> new_object(ref<android::content::Context> context);
	jint getIndex(jlong time);
	ref<java::lang::String> getLabel(jint index);
	jlong getBoundary(jint index);

protected:

	DateSorter(handle_type h) : base_(h) {}

};

} // namespace android::webkit
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::webkit {

inline jint DateSorter::DAY_COUNT_() { return get_static_field<SCAPIX_META_STRING("DAY_COUNT"), jint>(); }
inline ref<DateSorter> DateSorter::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline jint DateSorter::getIndex(jlong time) { return call_method<SCAPIX_META_STRING("getIndex"), jint>(time); }
inline ref<java::lang::String> DateSorter::getLabel(jint index) { return call_method<SCAPIX_META_STRING("getLabel"), ref<java::lang::String>>(index); }
inline jlong DateSorter::getBoundary(jint index) { return call_method<SCAPIX_META_STRING("getBoundary"), jlong>(index); }

} // namespace android::webkit
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WEBKIT_DATESORTER_H
