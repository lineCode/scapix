// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/text/style/ParagraphStyle.h>

#ifndef SCAPIX_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_H
#define SCAPIX_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_H

namespace scapix::java_api {

namespace android::graphics { class Canvas; }
namespace android::graphics { class Paint; }
namespace java::lang { class CharSequence; }

namespace android::text::style {

class LineBackgroundSpan : public object_base<SCAPIX_META_STRING("android/text/style/LineBackgroundSpan"),
	java::lang::Object,
	android::text::style::ParagraphStyle>
{
public:

	void drawBackground(ref<android::graphics::Canvas> p1, ref<android::graphics::Paint> p2, jint p3, jint p4, jint p5, jint p6, jint p7, ref<java::lang::CharSequence> p8, jint p9, jint p10, jint p11);

protected:

	LineBackgroundSpan(handle_type h) : base_(h) {}

};

} // namespace android::text::style
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/Paint.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::text::style {

inline void LineBackgroundSpan::drawBackground(ref<android::graphics::Canvas> p1, ref<android::graphics::Paint> p2, jint p3, jint p4, jint p5, jint p6, jint p7, ref<java::lang::CharSequence> p8, jint p9, jint p10, jint p11) { return call_method<SCAPIX_META_STRING("drawBackground"), void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }

} // namespace android::text::style
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_TEXT_STYLE_LINEBACKGROUNDSPAN_H
