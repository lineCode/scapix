// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/text/style/MetricAffectingSpan.h>
#include <scapix/java_api/android/text/ParcelableSpan.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_RELATIVESIZESPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_RELATIVESIZESPAN_H

namespace scapix::java_api {

namespace android::os { class Parcel; }
namespace android::text { class TextPaint; }

namespace android::text::style {

class RelativeSizeSpan : public object_base<SCAPIX_META_STRING("android/text/style/RelativeSizeSpan"),
	android::text::style::MetricAffectingSpan,
	android::text::ParcelableSpan>
{
public:

	static ref<RelativeSizeSpan> new_object(jfloat proportion);
	static ref<RelativeSizeSpan> new_object(ref<android::os::Parcel> src);
	jint getSpanTypeId();
	jint describeContents();
	void writeToParcel(ref<android::os::Parcel> dest, jint flags);
	jfloat getSizeChange();
	void updateDrawState(ref<android::text::TextPaint> ds);
	void updateMeasureState(ref<android::text::TextPaint> ds);

protected:

	RelativeSizeSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/text/TextPaint.h>

namespace scapix::java_api {
namespace android::text::style {

inline ref<RelativeSizeSpan> RelativeSizeSpan::new_object(jfloat proportion) { return base_::new_object(proportion); }
inline ref<RelativeSizeSpan> RelativeSizeSpan::new_object(ref<android::os::Parcel> src) { return base_::new_object(src); }
inline jint RelativeSizeSpan::getSpanTypeId() { return call_method<SCAPIX_META_STRING("getSpanTypeId"), jint>(); }
inline jint RelativeSizeSpan::describeContents() { return call_method<SCAPIX_META_STRING("describeContents"), jint>(); }
inline void RelativeSizeSpan::writeToParcel(ref<android::os::Parcel> dest, jint flags) { return call_method<SCAPIX_META_STRING("writeToParcel"), void>(dest, flags); }
inline jfloat RelativeSizeSpan::getSizeChange() { return call_method<SCAPIX_META_STRING("getSizeChange"), jfloat>(); }
inline void RelativeSizeSpan::updateDrawState(ref<android::text::TextPaint> ds) { return call_method<SCAPIX_META_STRING("updateDrawState"), void>(ds); }
inline void RelativeSizeSpan::updateMeasureState(ref<android::text::TextPaint> ds) { return call_method<SCAPIX_META_STRING("updateMeasureState"), void>(ds); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_RELATIVESIZESPAN_H
