// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT_H
#define SCAPIX_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT_H

namespace scapix::java_api {

namespace android::webkit { class WebView; }

namespace android::webkit {

class WebView_WebViewTransport : public object_base<SCAPIX_META_STRING("android/webkit/WebView$WebViewTransport"),
	java::lang::Object>
{
public:

	static ref<WebView_WebViewTransport> new_object(ref<android::webkit::WebView> this_0);
	void setWebView(ref<android::webkit::WebView> webview);
	ref<android::webkit::WebView> getWebView();

protected:

	WebView_WebViewTransport(handle_type h) : base_(h) {}

};

} // namespace android::webkit
} // namespace scapix::java_api

#include <scapix/java_api/android/webkit/WebView.h>

namespace scapix::java_api {
namespace android::webkit {

inline ref<WebView_WebViewTransport> WebView_WebViewTransport::new_object(ref<android::webkit::WebView> this_0) { return base_::new_object(this_0); }
inline void WebView_WebViewTransport::setWebView(ref<android::webkit::WebView> webview) { return call_method<SCAPIX_META_STRING("setWebView"), void>(webview); }
inline ref<android::webkit::WebView> WebView_WebViewTransport::getWebView() { return call_method<SCAPIX_META_STRING("getWebView"), ref<android::webkit::WebView>>(); }

} // namespace android::webkit
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_WEBKIT_WEBVIEW_WEBVIEWTRANSPORT_H
