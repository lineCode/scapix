// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/widget/ViewAnimator.h>

#ifndef SCAPIX_ANDROID_WIDGET_VIEWFLIPPER_H
#define SCAPIX_ANDROID_WIDGET_VIEWFLIPPER_H

namespace scapix::java_api {

namespace android::content { class Context; }
namespace android::util { class AttributeSet; }
namespace java::lang { class CharSequence; }

namespace android::widget {

class ViewFlipper : public object_base<SCAPIX_META_STRING("android/widget/ViewFlipper"),
	android::widget::ViewAnimator>
{
public:

	static ref<ViewFlipper> new_object(ref<android::content::Context> context);
	static ref<ViewFlipper> new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs);
	void setFlipInterval(jint milliseconds);
	void startFlipping();
	void stopFlipping();
	ref<java::lang::CharSequence> getAccessibilityClassName();
	jboolean isFlipping();
	void setAutoStart(jboolean autoStart);
	jboolean isAutoStart();

protected:

	ViewFlipper(handle_type h) : base_(h) {}

};

} // namespace android::widget
} // namespace scapix::java_api

#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/CharSequence.h>

namespace scapix::java_api {
namespace android::widget {

inline ref<ViewFlipper> ViewFlipper::new_object(ref<android::content::Context> context) { return base_::new_object(context); }
inline ref<ViewFlipper> ViewFlipper::new_object(ref<android::content::Context> context, ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
inline void ViewFlipper::setFlipInterval(jint milliseconds) { return call_method<SCAPIX_META_STRING("setFlipInterval"), void>(milliseconds); }
inline void ViewFlipper::startFlipping() { return call_method<SCAPIX_META_STRING("startFlipping"), void>(); }
inline void ViewFlipper::stopFlipping() { return call_method<SCAPIX_META_STRING("stopFlipping"), void>(); }
inline ref<java::lang::CharSequence> ViewFlipper::getAccessibilityClassName() { return call_method<SCAPIX_META_STRING("getAccessibilityClassName"), ref<java::lang::CharSequence>>(); }
inline jboolean ViewFlipper::isFlipping() { return call_method<SCAPIX_META_STRING("isFlipping"), jboolean>(); }
inline void ViewFlipper::setAutoStart(jboolean autoStart) { return call_method<SCAPIX_META_STRING("setAutoStart"), void>(autoStart); }
inline jboolean ViewFlipper::isAutoStart() { return call_method<SCAPIX_META_STRING("isAutoStart"), jboolean>(); }

} // namespace android::widget
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WIDGET_VIEWFLIPPER_H
