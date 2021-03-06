// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER_H
#define SCAPIX_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER_H

namespace scapix::java_api {

namespace android::content { class ContentProviderOperation; }
namespace android::content { class ContentValues; }
namespace java::lang { class String; }

namespace android::content {

class ContentProviderOperation_Builder : public object_base<SCAPIX_META_STRING("android/content/ContentProviderOperation$Builder"),
	java::lang::Object>
{
public:

	ref<android::content::ContentProviderOperation> build();
	ref<android::content::ContentProviderOperation_Builder> withValueBackReferences(ref<android::content::ContentValues> backReferences);
	ref<android::content::ContentProviderOperation_Builder> withValueBackReference(ref<java::lang::String> key, jint previousResult);
	ref<android::content::ContentProviderOperation_Builder> withSelectionBackReference(jint selectionArgIndex, jint previousResult);
	ref<android::content::ContentProviderOperation_Builder> withValues(ref<android::content::ContentValues> values);
	ref<android::content::ContentProviderOperation_Builder> withValue(ref<java::lang::String> key, ref<java::lang::Object> value);
	ref<android::content::ContentProviderOperation_Builder> withSelection(ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs);
	ref<android::content::ContentProviderOperation_Builder> withExpectedCount(jint count);
	ref<android::content::ContentProviderOperation_Builder> withYieldAllowed(jboolean yieldAllowed);

protected:

	ContentProviderOperation_Builder(handle_type h) : base_(h) {}

};

} // namespace android::content
} // namespace scapix::java_api

#include <scapix/java_api/android/content/ContentProviderOperation.h>
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/java/lang/String.h>

namespace scapix::java_api {
namespace android::content {

inline ref<android::content::ContentProviderOperation> ContentProviderOperation_Builder::build() { return call_method<SCAPIX_META_STRING("build"), ref<android::content::ContentProviderOperation>>(); }
inline ref<android::content::ContentProviderOperation_Builder> ContentProviderOperation_Builder::withValueBackReferences(ref<android::content::ContentValues> backReferences) { return call_method<SCAPIX_META_STRING("withValueBackReferences"), ref<android::content::ContentProviderOperation_Builder>>(backReferences); }
inline ref<android::content::ContentProviderOperation_Builder> ContentProviderOperation_Builder::withValueBackReference(ref<java::lang::String> key, jint previousResult) { return call_method<SCAPIX_META_STRING("withValueBackReference"), ref<android::content::ContentProviderOperation_Builder>>(key, previousResult); }
inline ref<android::content::ContentProviderOperation_Builder> ContentProviderOperation_Builder::withSelectionBackReference(jint selectionArgIndex, jint previousResult) { return call_method<SCAPIX_META_STRING("withSelectionBackReference"), ref<android::content::ContentProviderOperation_Builder>>(selectionArgIndex, previousResult); }
inline ref<android::content::ContentProviderOperation_Builder> ContentProviderOperation_Builder::withValues(ref<android::content::ContentValues> values) { return call_method<SCAPIX_META_STRING("withValues"), ref<android::content::ContentProviderOperation_Builder>>(values); }
inline ref<android::content::ContentProviderOperation_Builder> ContentProviderOperation_Builder::withValue(ref<java::lang::String> key, ref<java::lang::Object> value) { return call_method<SCAPIX_META_STRING("withValue"), ref<android::content::ContentProviderOperation_Builder>>(key, value); }
inline ref<android::content::ContentProviderOperation_Builder> ContentProviderOperation_Builder::withSelection(ref<java::lang::String> selection, ref<link::java::array<java::lang::String>> selectionArgs) { return call_method<SCAPIX_META_STRING("withSelection"), ref<android::content::ContentProviderOperation_Builder>>(selection, selectionArgs); }
inline ref<android::content::ContentProviderOperation_Builder> ContentProviderOperation_Builder::withExpectedCount(jint count) { return call_method<SCAPIX_META_STRING("withExpectedCount"), ref<android::content::ContentProviderOperation_Builder>>(count); }
inline ref<android::content::ContentProviderOperation_Builder> ContentProviderOperation_Builder::withYieldAllowed(jboolean yieldAllowed) { return call_method<SCAPIX_META_STRING("withYieldAllowed"), ref<android::content::ContentProviderOperation_Builder>>(yieldAllowed); }

} // namespace android::content
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_CONTENT_CONTENTPROVIDEROPERATION_BUILDER_H
