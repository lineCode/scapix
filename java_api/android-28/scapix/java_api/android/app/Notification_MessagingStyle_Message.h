// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE_H
#define SCAPIX_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE_H

namespace scapix::java_api {

namespace android::app { class Person; }
namespace android::net { class Uri; }
namespace android::os { class Bundle; }
namespace java::lang { class CharSequence; }
namespace java::lang { class String; }

namespace android::app {

class Notification_MessagingStyle_Message : public object_base<SCAPIX_META_STRING("android/app/Notification$MessagingStyle$Message"),
	java::lang::Object>
{
public:

	static ref<Notification_MessagingStyle_Message> new_object(ref<java::lang::CharSequence> text, jlong timestamp, ref<java::lang::CharSequence> p3);
	static ref<Notification_MessagingStyle_Message> new_object(ref<java::lang::CharSequence> text, jlong timestamp, ref<android::app::Person> p3);
	ref<android::app::Notification_MessagingStyle_Message> setData(ref<java::lang::String> dataMimeType, ref<android::net::Uri> dataUri);
	ref<java::lang::CharSequence> getText();
	jlong getTimestamp();
	ref<android::os::Bundle> getExtras();
	ref<java::lang::CharSequence> getSender();
	ref<android::app::Person> getSenderPerson();
	ref<java::lang::String> getDataMimeType();
	ref<android::net::Uri> getDataUri();

protected:

	Notification_MessagingStyle_Message(handle_type h) : base_(h) {}

};

} // namespace android::app
} // namespace scapix::java_api

#include <scapix/java_api/android/app/Person.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::app {

inline ref<Notification_MessagingStyle_Message> Notification_MessagingStyle_Message::new_object(ref<java::lang::CharSequence> text, jlong timestamp, ref<java::lang::CharSequence> p3) { return base_::new_object(text, timestamp, p3); }
inline ref<Notification_MessagingStyle_Message> Notification_MessagingStyle_Message::new_object(ref<java::lang::CharSequence> text, jlong timestamp, ref<android::app::Person> p3) { return base_::new_object(text, timestamp, p3); }
inline ref<android::app::Notification_MessagingStyle_Message> Notification_MessagingStyle_Message::setData(ref<java::lang::String> dataMimeType, ref<android::net::Uri> dataUri) { return call_method<SCAPIX_META_STRING("setData"), ref<android::app::Notification_MessagingStyle_Message>>(dataMimeType, dataUri); }
inline ref<java::lang::CharSequence> Notification_MessagingStyle_Message::getText() { return call_method<SCAPIX_META_STRING("getText"), ref<java::lang::CharSequence>>(); }
inline jlong Notification_MessagingStyle_Message::getTimestamp() { return call_method<SCAPIX_META_STRING("getTimestamp"), jlong>(); }
inline ref<android::os::Bundle> Notification_MessagingStyle_Message::getExtras() { return call_method<SCAPIX_META_STRING("getExtras"), ref<android::os::Bundle>>(); }
inline ref<java::lang::CharSequence> Notification_MessagingStyle_Message::getSender() { return call_method<SCAPIX_META_STRING("getSender"), ref<java::lang::CharSequence>>(); }
inline ref<android::app::Person> Notification_MessagingStyle_Message::getSenderPerson() { return call_method<SCAPIX_META_STRING("getSenderPerson"), ref<android::app::Person>>(); }
inline ref<java::lang::String> Notification_MessagingStyle_Message::getDataMimeType() { return call_method<SCAPIX_META_STRING("getDataMimeType"), ref<java::lang::String>>(); }
inline ref<android::net::Uri> Notification_MessagingStyle_Message::getDataUri() { return call_method<SCAPIX_META_STRING("getDataUri"), ref<android::net::Uri>>(); }

} // namespace android::app
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_APP_NOTIFICATION_MESSAGINGSTYLE_MESSAGE_H
