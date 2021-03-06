// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/provider/CalendarContract_ColorsColumns.h>

#ifndef SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_COLORS_H
#define SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_COLORS_H

namespace scapix::java_api {

namespace android::net { class Uri; }

namespace android::provider {

class CalendarContract_Colors : public object_base<SCAPIX_META_STRING("android/provider/CalendarContract$Colors"),
	java::lang::Object,
	android::provider::CalendarContract_ColorsColumns>
{
public:

	static ref<android::net::Uri> CONTENT_URI_();


protected:

	CalendarContract_Colors(handle_type h) : base_(h) {}

};

} // namespace android::provider
} // namespace scapix::java_api

#include <scapix/java_api/android/net/Uri.h>

namespace scapix::java_api {
namespace android::provider {

inline ref<android::net::Uri> CalendarContract_Colors::CONTENT_URI_() { return get_static_field<SCAPIX_META_STRING("CONTENT_URI"), ref<android::net::Uri>>(); }

} // namespace android::provider
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_PROVIDER_CALENDARCONTRACT_COLORS_H
