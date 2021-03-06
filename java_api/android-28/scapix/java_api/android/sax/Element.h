// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_SAX_ELEMENT_H
#define SCAPIX_ANDROID_SAX_ELEMENT_H

namespace scapix::java_api {

namespace android::sax { class ElementListener; }
namespace android::sax { class EndElementListener; }
namespace android::sax { class EndTextElementListener; }
namespace android::sax { class StartElementListener; }
namespace android::sax { class TextElementListener; }
namespace java::lang { class String; }

namespace android::sax {

class Element : public object_base<SCAPIX_META_STRING("android/sax/Element"),
	java::lang::Object>
{
public:

	ref<android::sax::Element> getChild(ref<java::lang::String> localName);
	ref<android::sax::Element> getChild(ref<java::lang::String> uri, ref<java::lang::String> localName);
	ref<android::sax::Element> requireChild(ref<java::lang::String> localName);
	ref<android::sax::Element> requireChild(ref<java::lang::String> uri, ref<java::lang::String> localName);
	void setElementListener(ref<android::sax::ElementListener> elementListener);
	void setTextElementListener(ref<android::sax::TextElementListener> elementListener);
	void setStartElementListener(ref<android::sax::StartElementListener> startElementListener);
	void setEndElementListener(ref<android::sax::EndElementListener> endElementListener);
	void setEndTextElementListener(ref<android::sax::EndTextElementListener> endTextElementListener);
	ref<java::lang::String> toString();

protected:

	Element(handle_type h) : base_(h) {}

};

} // namespace android::sax
} // namespace scapix::java_api

#include <scapix/java_api/android/sax/ElementListener.h>
#include <scapix/java_api/android/sax/EndElementListener.h>
#include <scapix/java_api/android/sax/EndTextElementListener.h>
#include <scapix/java_api/android/sax/StartElementListener.h>
#include <scapix/java_api/android/sax/TextElementListener.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::sax {

inline ref<android::sax::Element> Element::getChild(ref<java::lang::String> localName) { return call_method<SCAPIX_META_STRING("getChild"), ref<android::sax::Element>>(localName); }
inline ref<android::sax::Element> Element::getChild(ref<java::lang::String> uri, ref<java::lang::String> localName) { return call_method<SCAPIX_META_STRING("getChild"), ref<android::sax::Element>>(uri, localName); }
inline ref<android::sax::Element> Element::requireChild(ref<java::lang::String> localName) { return call_method<SCAPIX_META_STRING("requireChild"), ref<android::sax::Element>>(localName); }
inline ref<android::sax::Element> Element::requireChild(ref<java::lang::String> uri, ref<java::lang::String> localName) { return call_method<SCAPIX_META_STRING("requireChild"), ref<android::sax::Element>>(uri, localName); }
inline void Element::setElementListener(ref<android::sax::ElementListener> elementListener) { return call_method<SCAPIX_META_STRING("setElementListener"), void>(elementListener); }
inline void Element::setTextElementListener(ref<android::sax::TextElementListener> elementListener) { return call_method<SCAPIX_META_STRING("setTextElementListener"), void>(elementListener); }
inline void Element::setStartElementListener(ref<android::sax::StartElementListener> startElementListener) { return call_method<SCAPIX_META_STRING("setStartElementListener"), void>(startElementListener); }
inline void Element::setEndElementListener(ref<android::sax::EndElementListener> endElementListener) { return call_method<SCAPIX_META_STRING("setEndElementListener"), void>(endElementListener); }
inline void Element::setEndTextElementListener(ref<android::sax::EndTextElementListener> endTextElementListener) { return call_method<SCAPIX_META_STRING("setEndTextElementListener"), void>(endTextElementListener); }
inline ref<java::lang::String> Element::toString() { return call_method<SCAPIX_META_STRING("toString"), ref<java::lang::String>>(); }

} // namespace android::sax
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_SAX_ELEMENT_H
