// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_GRAPHICS_COLOR_H
#define SCAPIX_ANDROID_GRAPHICS_COLOR_H

namespace scapix::java_api {

namespace android::graphics { class ColorSpace; }
namespace android::graphics { class ColorSpace_Connector; }
namespace android::graphics { class ColorSpace_Model; }
namespace java::lang { class String; }

namespace android::graphics {

class Color : public object_base<SCAPIX_META_STRING("android/graphics/Color"),
	java::lang::Object>
{
public:

	static jint BLACK_();
	static jint BLUE_();
	static jint CYAN_();
	static jint DKGRAY_();
	static jint GRAY_();
	static jint GREEN_();
	static jint LTGRAY_();
	static jint MAGENTA_();
	static jint RED_();
	static jint TRANSPARENT_();
	static jint WHITE_();
	static jint YELLOW_();

	static ref<Color> new_object();
	ref<android::graphics::ColorSpace> getColorSpace();
	ref<android::graphics::ColorSpace_Model> getModel();
	jboolean isWideGamut();
	jboolean isSrgb();
	jint getComponentCount();
	jlong pack();
	ref<android::graphics::Color> convert(ref<android::graphics::ColorSpace> colorSpace);
	jint toArgb();
	jfloat red();
	jfloat green();
	jfloat blue();
	jfloat alpha();
	ref<link::java::array<jfloat>> getComponents();
	ref<link::java::array<jfloat>> getComponents(ref<link::java::array<jfloat>> components);
	jfloat getComponent(jint component);
	jfloat luminance();
	jboolean equals(ref<java::lang::Object> o);
	jint hashCode();
	ref<java::lang::String> toString();
	static ref<android::graphics::ColorSpace> colorSpace(jlong color);
	static jfloat red(jlong color);
	static jfloat green(jlong color);
	static jfloat blue(jlong color);
	static jfloat alpha(jlong color);
	static jboolean isSrgb(jlong color);
	static jboolean isWideGamut(jlong color);
	static jboolean isInColorSpace(jlong color, ref<android::graphics::ColorSpace> p2);
	static jint toArgb(jlong color);
	static ref<android::graphics::Color> valueOf(jint color);
	static ref<android::graphics::Color> valueOf(jlong color);
	static ref<android::graphics::Color> valueOf(jfloat r, jfloat g, jfloat b);
	static ref<android::graphics::Color> valueOf(jfloat r, jfloat g, jfloat b, jfloat a);
	static ref<android::graphics::Color> valueOf(jfloat r, jfloat g, jfloat b, jfloat a, ref<android::graphics::ColorSpace> colorSpace);
	static ref<android::graphics::Color> valueOf(ref<link::java::array<jfloat>> components, ref<android::graphics::ColorSpace> colorSpace);
	static jlong pack(jint color);
	static jlong pack(jfloat red, jfloat green, jfloat blue);
	static jlong pack(jfloat red, jfloat green, jfloat blue, jfloat alpha);
	static jlong pack(jfloat red, jfloat green, jfloat blue, jfloat alpha, ref<android::graphics::ColorSpace> colorSpace);
	static jlong convert(jint color, ref<android::graphics::ColorSpace> colorSpace);
	static jlong convert(jlong color, ref<android::graphics::ColorSpace> p2);
	static jlong convert(jfloat r, jfloat g, jfloat b, jfloat a, ref<android::graphics::ColorSpace> source, ref<android::graphics::ColorSpace> destination);
	static jlong convert(jlong color, ref<android::graphics::ColorSpace_Connector> p2);
	static jlong convert(jfloat r, jfloat g, jfloat b, jfloat a, ref<android::graphics::ColorSpace_Connector> connector);
	static jfloat luminance(jlong color);
	static jint alpha(jint color);
	static jint red(jint color);
	static jint green(jint color);
	static jint blue(jint color);
	static jint rgb(jint red, jint green, jint blue);
	static jint rgb(jfloat red, jfloat green, jfloat blue);
	static jint argb(jint alpha, jint red, jint green, jint blue);
	static jint argb(jfloat alpha, jfloat red, jfloat green, jfloat blue);
	static jfloat luminance(jint color);
	static jint parseColor(ref<java::lang::String> colorString);
	static void RGBToHSV(jint red, jint green, jint blue, ref<link::java::array<jfloat>> hsv);
	static void colorToHSV(jint color, ref<link::java::array<jfloat>> hsv);
	static jint HSVToColor(ref<link::java::array<jfloat>> hsv);
	static jint HSVToColor(jint alpha, ref<link::java::array<jfloat>> hsv);

protected:

	Color(handle_type h) : base_(h) {}

};

} // namespace android::graphics
} // namespace scapix::java_api

#include <scapix/java_api/android/graphics/ColorSpace.h>
#include <scapix/java_api/android/graphics/ColorSpace_Connector.h>
#include <scapix/java_api/android/graphics/ColorSpace_Model.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::graphics {

inline jint Color::BLACK_() { return get_static_field<SCAPIX_META_STRING("BLACK"), jint>(); }
inline jint Color::BLUE_() { return get_static_field<SCAPIX_META_STRING("BLUE"), jint>(); }
inline jint Color::CYAN_() { return get_static_field<SCAPIX_META_STRING("CYAN"), jint>(); }
inline jint Color::DKGRAY_() { return get_static_field<SCAPIX_META_STRING("DKGRAY"), jint>(); }
inline jint Color::GRAY_() { return get_static_field<SCAPIX_META_STRING("GRAY"), jint>(); }
inline jint Color::GREEN_() { return get_static_field<SCAPIX_META_STRING("GREEN"), jint>(); }
inline jint Color::LTGRAY_() { return get_static_field<SCAPIX_META_STRING("LTGRAY"), jint>(); }
inline jint Color::MAGENTA_() { return get_static_field<SCAPIX_META_STRING("MAGENTA"), jint>(); }
inline jint Color::RED_() { return get_static_field<SCAPIX_META_STRING("RED"), jint>(); }
inline jint Color::TRANSPARENT_() { return get_static_field<SCAPIX_META_STRING("TRANSPARENT"), jint>(); }
inline jint Color::WHITE_() { return get_static_field<SCAPIX_META_STRING("WHITE"), jint>(); }
inline jint Color::YELLOW_() { return get_static_field<SCAPIX_META_STRING("YELLOW"), jint>(); }
inline ref<Color> Color::new_object() { return base_::new_object(); }
inline ref<android::graphics::ColorSpace> Color::getColorSpace() { return call_method<SCAPIX_META_STRING("getColorSpace"), ref<android::graphics::ColorSpace>>(); }
inline ref<android::graphics::ColorSpace_Model> Color::getModel() { return call_method<SCAPIX_META_STRING("getModel"), ref<android::graphics::ColorSpace_Model>>(); }
inline jboolean Color::isWideGamut() { return call_method<SCAPIX_META_STRING("isWideGamut"), jboolean>(); }
inline jboolean Color::isSrgb() { return call_method<SCAPIX_META_STRING("isSrgb"), jboolean>(); }
inline jint Color::getComponentCount() { return call_method<SCAPIX_META_STRING("getComponentCount"), jint>(); }
inline jlong Color::pack() { return call_method<SCAPIX_META_STRING("pack"), jlong>(); }
inline ref<android::graphics::Color> Color::convert(ref<android::graphics::ColorSpace> colorSpace) { return call_method<SCAPIX_META_STRING("convert"), ref<android::graphics::Color>>(colorSpace); }
inline jint Color::toArgb() { return call_method<SCAPIX_META_STRING("toArgb"), jint>(); }
inline jfloat Color::red() { return call_method<SCAPIX_META_STRING("red"), jfloat>(); }
inline jfloat Color::green() { return call_method<SCAPIX_META_STRING("green"), jfloat>(); }
inline jfloat Color::blue() { return call_method<SCAPIX_META_STRING("blue"), jfloat>(); }
inline jfloat Color::alpha() { return call_method<SCAPIX_META_STRING("alpha"), jfloat>(); }
inline ref<link::java::array<jfloat>> Color::getComponents() { return call_method<SCAPIX_META_STRING("getComponents"), ref<link::java::array<jfloat>>>(); }
inline ref<link::java::array<jfloat>> Color::getComponents(ref<link::java::array<jfloat>> components) { return call_method<SCAPIX_META_STRING("getComponents"), ref<link::java::array<jfloat>>>(components); }
inline jfloat Color::getComponent(jint component) { return call_method<SCAPIX_META_STRING("getComponent"), jfloat>(component); }
inline jfloat Color::luminance() { return call_method<SCAPIX_META_STRING("luminance"), jfloat>(); }
inline jboolean Color::equals(ref<java::lang::Object> o) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(o); }
inline jint Color::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline ref<java::lang::String> Color::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }
inline ref<android::graphics::ColorSpace> Color::colorSpace(jlong color) { return call_static_method<SCAPIX_META_STRING("colorSpace"), ref<android::graphics::ColorSpace>>(color); }
inline jfloat Color::red(jlong color) { return call_static_method<SCAPIX_META_STRING("red"), jfloat>(color); }
inline jfloat Color::green(jlong color) { return call_static_method<SCAPIX_META_STRING("green"), jfloat>(color); }
inline jfloat Color::blue(jlong color) { return call_static_method<SCAPIX_META_STRING("blue"), jfloat>(color); }
inline jfloat Color::alpha(jlong color) { return call_static_method<SCAPIX_META_STRING("alpha"), jfloat>(color); }
inline jboolean Color::isSrgb(jlong color) { return call_static_method<SCAPIX_META_STRING("isSrgb"), jboolean>(color); }
inline jboolean Color::isWideGamut(jlong color) { return call_static_method<SCAPIX_META_STRING("isWideGamut"), jboolean>(color); }
inline jboolean Color::isInColorSpace(jlong color, ref<android::graphics::ColorSpace> p2) { return call_static_method<SCAPIX_META_STRING("isInColorSpace"), jboolean>(color, p2); }
inline jint Color::toArgb(jlong color) { return call_static_method<SCAPIX_META_STRING("toArgb"), jint>(color); }
inline ref<android::graphics::Color> Color::valueOf(jint color) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Color>>(color); }
inline ref<android::graphics::Color> Color::valueOf(jlong color) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Color>>(color); }
inline ref<android::graphics::Color> Color::valueOf(jfloat r, jfloat g, jfloat b) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Color>>(r, g, b); }
inline ref<android::graphics::Color> Color::valueOf(jfloat r, jfloat g, jfloat b, jfloat a) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Color>>(r, g, b, a); }
inline ref<android::graphics::Color> Color::valueOf(jfloat r, jfloat g, jfloat b, jfloat a, ref<android::graphics::ColorSpace> colorSpace) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Color>>(r, g, b, a, colorSpace); }
inline ref<android::graphics::Color> Color::valueOf(ref<link::java::array<jfloat>> components, ref<android::graphics::ColorSpace> colorSpace) { return call_static_method<SCAPIX_META_STRING("valueOf"), ref<android::graphics::Color>>(components, colorSpace); }
inline jlong Color::pack(jint color) { return call_static_method<SCAPIX_META_STRING("pack"), jlong>(color); }
inline jlong Color::pack(jfloat red, jfloat green, jfloat blue) { return call_static_method<SCAPIX_META_STRING("pack"), jlong>(red, green, blue); }
inline jlong Color::pack(jfloat red, jfloat green, jfloat blue, jfloat alpha) { return call_static_method<SCAPIX_META_STRING("pack"), jlong>(red, green, blue, alpha); }
inline jlong Color::pack(jfloat red, jfloat green, jfloat blue, jfloat alpha, ref<android::graphics::ColorSpace> colorSpace) { return call_static_method<SCAPIX_META_STRING("pack"), jlong>(red, green, blue, alpha, colorSpace); }
inline jlong Color::convert(jint color, ref<android::graphics::ColorSpace> colorSpace) { return call_static_method<SCAPIX_META_STRING("convert"), jlong>(color, colorSpace); }
inline jlong Color::convert(jlong color, ref<android::graphics::ColorSpace> p2) { return call_static_method<SCAPIX_META_STRING("convert"), jlong>(color, p2); }
inline jlong Color::convert(jfloat r, jfloat g, jfloat b, jfloat a, ref<android::graphics::ColorSpace> source, ref<android::graphics::ColorSpace> destination) { return call_static_method<SCAPIX_META_STRING("convert"), jlong>(r, g, b, a, source, destination); }
inline jlong Color::convert(jlong color, ref<android::graphics::ColorSpace_Connector> p2) { return call_static_method<SCAPIX_META_STRING("convert"), jlong>(color, p2); }
inline jlong Color::convert(jfloat r, jfloat g, jfloat b, jfloat a, ref<android::graphics::ColorSpace_Connector> connector) { return call_static_method<SCAPIX_META_STRING("convert"), jlong>(r, g, b, a, connector); }
inline jfloat Color::luminance(jlong color) { return call_static_method<SCAPIX_META_STRING("luminance"), jfloat>(color); }
inline jint Color::alpha(jint color) { return call_static_method<SCAPIX_META_STRING("alpha"), jint>(color); }
inline jint Color::red(jint color) { return call_static_method<SCAPIX_META_STRING("red"), jint>(color); }
inline jint Color::green(jint color) { return call_static_method<SCAPIX_META_STRING("green"), jint>(color); }
inline jint Color::blue(jint color) { return call_static_method<SCAPIX_META_STRING("blue"), jint>(color); }
inline jint Color::rgb(jint red, jint green, jint blue) { return call_static_method<SCAPIX_META_STRING("rgb"), jint>(red, green, blue); }
inline jint Color::rgb(jfloat red, jfloat green, jfloat blue) { return call_static_method<SCAPIX_META_STRING("rgb"), jint>(red, green, blue); }
inline jint Color::argb(jint alpha, jint red, jint green, jint blue) { return call_static_method<SCAPIX_META_STRING("argb"), jint>(alpha, red, green, blue); }
inline jint Color::argb(jfloat alpha, jfloat red, jfloat green, jfloat blue) { return call_static_method<SCAPIX_META_STRING("argb"), jint>(alpha, red, green, blue); }
inline jfloat Color::luminance(jint color) { return call_static_method<SCAPIX_META_STRING("luminance"), jfloat>(color); }
inline jint Color::parseColor(ref<java::lang::String> colorString) { return call_static_method<SCAPIX_META_STRING("parseColor"), jint>(colorString); }
inline void Color::RGBToHSV(jint red, jint green, jint blue, ref<link::java::array<jfloat>> hsv) { return call_static_method<SCAPIX_META_STRING("RGBToHSV"), void>(red, green, blue, hsv); }
inline void Color::colorToHSV(jint color, ref<link::java::array<jfloat>> hsv) { return call_static_method<SCAPIX_META_STRING("colorToHSV"), void>(color, hsv); }
inline jint Color::HSVToColor(ref<link::java::array<jfloat>> hsv) { return call_static_method<SCAPIX_META_STRING("HSVToColor"), jint>(hsv); }
inline jint Color::HSVToColor(jint alpha, ref<link::java::array<jfloat>> hsv) { return call_static_method<SCAPIX_META_STRING("HSVToColor"), jint>(alpha, hsv); }

} // namespace android::graphics
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_GRAPHICS_COLOR_H
