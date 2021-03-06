// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/CharacterStyle.h>
#include <scapix/java_api/android/text/style/UpdateAppearance.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_BACKGROUNDCOLORSPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_BACKGROUNDCOLORSPAN_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::text { class TextPaint; }

namespace android::text::style {

class BackgroundColorSpan : public object_base<SCAPIX_META_STRING("android/text/style/BackgroundColorSpan"),
	android::text::style::CharacterStyle,
	android::text::style::UpdateAppearance,
	android::text::ParcelableSpan>
{
public:

	static ref<BackgroundColorSpan> new_object(jint color);
	static ref<BackgroundColorSpan> new_object(ref<android::os::Parcel> src);
	jint getSpanTypeId();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jint getBackgroundColor();
	void updateDrawState(ref<android::text::TextPaint> textPaint);

protected:

	BackgroundColorSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<BackgroundColorSpan> BackgroundColorSpan::new_object(jint color) { return base_::new_object(color); }
inline ref<BackgroundColorSpan> BackgroundColorSpan::new_object(ref<android::os::Parcel> src) { return base_::new_object(src); }
inline jint BackgroundColorSpan::getSpanTypeId() { return call_method<SCAPIX_META_STRING("getSpanTypeId"), jint>(); }
inline jint BackgroundColorSpan::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void BackgroundColorSpan::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jint BackgroundColorSpan::getBackgroundColor() { return call_method<SCAPIX_META_STRING("getBackgroundColor"), jint>(); }
inline void BackgroundColorSpan::updateDrawState(ref<android::text::TextPaint> textPaint) { return call_method<SCAPIX_META_STRING("updateDrawState"), void>(textPaint); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_BACKGROUNDCOLORSPAN_H
