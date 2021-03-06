// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/android/icu/text/UFormat.h>

#ifndef SCAPIX_ANDROID_ICU_TEXT_DATEFORMAT_H
#define SCAPIX_ANDROID_ICU_TEXT_DATEFORMAT_H

namespace scapix::java_api {

namespace android::icu::text { class DateFormat_BooleanAttribute; }
namespace android::icu::text { class DisplayContext; }
namespace android::icu::text { class DisplayContext_Type; }
namespace android::icu::text { class NumberFormat; }
namespace android::icu::util { class Calendar; }
namespace android::icu::util { class TimeZone; }
namespace android::icu::util { class ULocale; }
namespace java::lang { class Object; }
namespace java::lang { class String; }
namespace java::lang { class StringBuffer; }
namespace java::text { class FieldPosition; }
namespace java::text { class ParsePosition; }
namespace java::util { class Date; }
namespace java::util { class Locale; }
namespace android::icu::text { class DateFormat_Field; }

namespace android::icu::text {

class DateFormat : public object_base<SCAPIX_META_STRING("android/icu/text/DateFormat"),
	android::icu::text::UFormat>
{
public:

	using Field = DateFormat_Field;
	using BooleanAttribute = DateFormat_BooleanAttribute;

	static ref<java::lang::String> ABBR_GENERIC_TZ_();
	static ref<java::lang::String> ABBR_MONTH_();
	static ref<java::lang::String> ABBR_MONTH_DAY_();
	static ref<java::lang::String> ABBR_MONTH_WEEKDAY_DAY_();
	static ref<java::lang::String> ABBR_QUARTER_();
	static ref<java::lang::String> ABBR_SPECIFIC_TZ_();
	static ref<java::lang::String> ABBR_UTC_TZ_();
	static ref<java::lang::String> ABBR_WEEKDAY_();
	static jint AM_PM_FIELD_();
	static jint AM_PM_MIDNIGHT_NOON_FIELD_();
	static jint DATE_FIELD_();
	static ref<java::lang::String> DAY_();
	static jint DAY_OF_WEEK_FIELD_();
	static jint DAY_OF_WEEK_IN_MONTH_FIELD_();
	static jint DAY_OF_YEAR_FIELD_();
	static jint DEFAULT_();
	static jint DOW_LOCAL_FIELD_();
	static jint ERA_FIELD_();
	static jint EXTENDED_YEAR_FIELD_();
	static jint FLEXIBLE_DAY_PERIOD_FIELD_();
	static jint FRACTIONAL_SECOND_FIELD_();
	static jint FULL_();
	static ref<java::lang::String> GENERIC_TZ_();
	static ref<java::lang::String> HOUR_();
	static jint HOUR0_FIELD_();
	static jint HOUR1_FIELD_();
	static ref<java::lang::String> HOUR24_();
	static ref<java::lang::String> HOUR24_MINUTE_();
	static ref<java::lang::String> HOUR24_MINUTE_SECOND_();
	static ref<java::lang::String> HOUR_MINUTE_();
	static ref<java::lang::String> HOUR_MINUTE_SECOND_();
	static jint HOUR_OF_DAY0_FIELD_();
	static jint HOUR_OF_DAY1_FIELD_();
	static jint JULIAN_DAY_FIELD_();
	static ref<java::lang::String> LOCATION_TZ_();
	static jint LONG_();
	static jint MEDIUM_();
	static jint MILLISECONDS_IN_DAY_FIELD_();
	static jint MILLISECOND_FIELD_();
	static ref<java::lang::String> MINUTE_();
	static jint MINUTE_FIELD_();
	static ref<java::lang::String> MINUTE_SECOND_();
	static ref<java::lang::String> MONTH_();
	static ref<java::lang::String> MONTH_DAY_();
	static jint MONTH_FIELD_();
	static ref<java::lang::String> MONTH_WEEKDAY_DAY_();
	static jint NONE_();
	static ref<java::lang::String> NUM_MONTH_();
	static ref<java::lang::String> NUM_MONTH_DAY_();
	static ref<java::lang::String> NUM_MONTH_WEEKDAY_DAY_();
	static ref<java::lang::String> QUARTER_();
	static jint QUARTER_FIELD_();
	static jint RELATIVE_();
	static jint RELATIVE_DEFAULT_();
	static jint RELATIVE_FULL_();
	static jint RELATIVE_LONG_();
	static jint RELATIVE_MEDIUM_();
	static jint RELATIVE_SHORT_();
	static ref<java::lang::String> SECOND_();
	static jint SECOND_FIELD_();
	static jint SHORT_();
	static ref<java::lang::String> SPECIFIC_TZ_();
	static jint STANDALONE_DAY_FIELD_();
	static jint STANDALONE_MONTH_FIELD_();
	static jint STANDALONE_QUARTER_FIELD_();
	static jint TIMEZONE_FIELD_();
	static jint TIMEZONE_GENERIC_FIELD_();
	static jint TIMEZONE_ISO_FIELD_();
	static jint TIMEZONE_ISO_LOCAL_FIELD_();
	static jint TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD_();
	static jint TIMEZONE_RFC_FIELD_();
	static jint TIMEZONE_SPECIAL_FIELD_();
	static ref<java::lang::String> WEEKDAY_();
	static jint WEEK_OF_MONTH_FIELD_();
	static jint WEEK_OF_YEAR_FIELD_();
	static ref<java::lang::String> YEAR_();
	static ref<java::lang::String> YEAR_ABBR_MONTH_();
	static ref<java::lang::String> YEAR_ABBR_MONTH_DAY_();
	static ref<java::lang::String> YEAR_ABBR_MONTH_WEEKDAY_DAY_();
	static ref<java::lang::String> YEAR_ABBR_QUARTER_();
	static jint YEAR_FIELD_();
	static ref<java::lang::String> YEAR_MONTH_();
	static ref<java::lang::String> YEAR_MONTH_DAY_();
	static ref<java::lang::String> YEAR_MONTH_WEEKDAY_DAY_();
	static jint YEAR_NAME_FIELD_();
	static ref<java::lang::String> YEAR_NUM_MONTH_();
	static ref<java::lang::String> YEAR_NUM_MONTH_DAY_();
	static ref<java::lang::String> YEAR_NUM_MONTH_WEEKDAY_DAY_();
	static ref<java::lang::String> YEAR_QUARTER_();
	static jint YEAR_WOY_FIELD_();

	ref<java::lang::StringBuffer> format(ref<java::lang::Object> obj, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> fieldPosition);
	ref<java::lang::StringBuffer> format(ref<android::icu::util::Calendar> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3);
	ref<java::lang::StringBuffer> format(ref<java::util::Date> date, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> fieldPosition);
	ref<java::lang::String> format(ref<java::util::Date> date);
	ref<java::util::Date> parse(ref<java::lang::String> text);
	void parse(ref<java::lang::String> p1, ref<android::icu::util::Calendar> p2, ref<java::text::ParsePosition> p3);
	ref<java::util::Date> parse(ref<java::lang::String> text, ref<java::text::ParsePosition> pos);
	ref<java::lang::Object> parseObject(ref<java::lang::String> source, ref<java::text::ParsePosition> pos);
	static ref<android::icu::text::DateFormat> getTimeInstance();
	static ref<android::icu::text::DateFormat> getTimeInstance(jint style);
	static ref<android::icu::text::DateFormat> getTimeInstance(jint style, ref<java::util::Locale> aLocale);
	static ref<android::icu::text::DateFormat> getTimeInstance(jint style, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getDateInstance();
	static ref<android::icu::text::DateFormat> getDateInstance(jint style);
	static ref<android::icu::text::DateFormat> getDateInstance(jint style, ref<java::util::Locale> aLocale);
	static ref<android::icu::text::DateFormat> getDateInstance(jint style, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getDateTimeInstance();
	static ref<android::icu::text::DateFormat> getDateTimeInstance(jint dateStyle, jint timeStyle);
	static ref<android::icu::text::DateFormat> getDateTimeInstance(jint dateStyle, jint timeStyle, ref<java::util::Locale> aLocale);
	static ref<android::icu::text::DateFormat> getDateTimeInstance(jint dateStyle, jint timeStyle, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getInstance();
	static ref<link::java::array<java::util::Locale>> getAvailableLocales();
	void setCalendar(ref<android::icu::util::Calendar> newCalendar);
	ref<android::icu::util::Calendar> getCalendar();
	void setNumberFormat(ref<android::icu::text::NumberFormat> newNumberFormat);
	ref<android::icu::text::NumberFormat> getNumberFormat();
	void setTimeZone(ref<android::icu::util::TimeZone> zone);
	ref<android::icu::util::TimeZone> getTimeZone();
	void setLenient(jboolean lenient);
	jboolean isLenient();
	void setCalendarLenient(jboolean lenient);
	jboolean isCalendarLenient();
	ref<android::icu::text::DateFormat> setBooleanAttribute(ref<android::icu::text::DateFormat_BooleanAttribute> key, jboolean value);
	jboolean getBooleanAttribute(ref<android::icu::text::DateFormat_BooleanAttribute> key);
	void setContext(ref<android::icu::text::DisplayContext> context);
	ref<android::icu::text::DisplayContext> getContext(ref<android::icu::text::DisplayContext_Type> type);
	jint hashCode();
	jboolean equals(ref<java::lang::Object> obj);
	ref<java::lang::Object> clone();
	static ref<android::icu::text::DateFormat> getDateInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, ref<java::util::Locale> locale);
	static ref<android::icu::text::DateFormat> getDateInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getTimeInstance(ref<android::icu::util::Calendar> cal, jint timeStyle, ref<java::util::Locale> locale);
	static ref<android::icu::text::DateFormat> getTimeInstance(ref<android::icu::util::Calendar> cal, jint timeStyle, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getDateTimeInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, jint timeStyle, ref<java::util::Locale> locale);
	static ref<android::icu::text::DateFormat> getDateTimeInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, jint timeStyle, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getInstance(ref<android::icu::util::Calendar> cal, ref<java::util::Locale> locale);
	static ref<android::icu::text::DateFormat> getInstance(ref<android::icu::util::Calendar> cal);
	static ref<android::icu::text::DateFormat> getDateInstance(ref<android::icu::util::Calendar> cal, jint dateStyle);
	static ref<android::icu::text::DateFormat> getTimeInstance(ref<android::icu::util::Calendar> cal, jint timeStyle);
	static ref<android::icu::text::DateFormat> getDateTimeInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, jint timeStyle);
	static ref<android::icu::text::DateFormat> getInstanceForSkeleton(ref<java::lang::String> skeleton);
	static ref<android::icu::text::DateFormat> getInstanceForSkeleton(ref<java::lang::String> skeleton, ref<java::util::Locale> locale);
	static ref<android::icu::text::DateFormat> getInstanceForSkeleton(ref<java::lang::String> skeleton, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getInstanceForSkeleton(ref<android::icu::util::Calendar> cal, ref<java::lang::String> skeleton, ref<java::util::Locale> locale);
	static ref<android::icu::text::DateFormat> getInstanceForSkeleton(ref<android::icu::util::Calendar> cal, ref<java::lang::String> skeleton, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getPatternInstance(ref<java::lang::String> skeleton);
	static ref<android::icu::text::DateFormat> getPatternInstance(ref<java::lang::String> skeleton, ref<java::util::Locale> locale);
	static ref<android::icu::text::DateFormat> getPatternInstance(ref<java::lang::String> skeleton, ref<android::icu::util::ULocale> locale);
	static ref<android::icu::text::DateFormat> getPatternInstance(ref<android::icu::util::Calendar> cal, ref<java::lang::String> skeleton, ref<java::util::Locale> locale);
	static ref<android::icu::text::DateFormat> getPatternInstance(ref<android::icu::util::Calendar> cal, ref<java::lang::String> skeleton, ref<android::icu::util::ULocale> locale);

protected:

	DateFormat(handle_type h) : base_(h) {}

};

} // namespace android::icu::text
} // namespace scapix::java_api

#include <scapix/java_api/android/icu/text/DateFormat_BooleanAttribute.h>
#include <scapix/java_api/android/icu/text/DisplayContext.h>
#include <scapix/java_api/android/icu/text/DisplayContext_Type.h>
#include <scapix/java_api/android/icu/text/NumberFormat.h>
#include <scapix/java_api/android/icu/util/Calendar.h>
#include <scapix/java_api/android/icu/util/TimeZone.h>
#include <scapix/java_api/android/icu/util/ULocale.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/StringBuffer.h>
#include <scapix/java_api/java/text/FieldPosition.h>
#include <scapix/java_api/java/text/ParsePosition.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Locale.h>

namespace scapix::java_api {
namespace android::icu::text {

inline ref<java::lang::String> DateFormat::ABBR_GENERIC_TZ_() { return get_static_field<SCAPIX_META_STRING("ABBR_GENERIC_TZ"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::ABBR_MONTH_() { return get_static_field<SCAPIX_META_STRING("ABBR_MONTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::ABBR_MONTH_DAY_() { return get_static_field<SCAPIX_META_STRING("ABBR_MONTH_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::ABBR_MONTH_WEEKDAY_DAY_() { return get_static_field<SCAPIX_META_STRING("ABBR_MONTH_WEEKDAY_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::ABBR_QUARTER_() { return get_static_field<SCAPIX_META_STRING("ABBR_QUARTER"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::ABBR_SPECIFIC_TZ_() { return get_static_field<SCAPIX_META_STRING("ABBR_SPECIFIC_TZ"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::ABBR_UTC_TZ_() { return get_static_field<SCAPIX_META_STRING("ABBR_UTC_TZ"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::ABBR_WEEKDAY_() { return get_static_field<SCAPIX_META_STRING("ABBR_WEEKDAY"), ref<java::lang::String>>(); }
inline jint DateFormat::AM_PM_FIELD_() { return get_static_field<SCAPIX_META_STRING("AM_PM_FIELD"), jint>(); }
inline jint DateFormat::AM_PM_MIDNIGHT_NOON_FIELD_() { return get_static_field<SCAPIX_META_STRING("AM_PM_MIDNIGHT_NOON_FIELD"), jint>(); }
inline jint DateFormat::DATE_FIELD_() { return get_static_field<SCAPIX_META_STRING("DATE_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::DAY_() { return get_static_field<SCAPIX_META_STRING("DAY"), ref<java::lang::String>>(); }
inline jint DateFormat::DAY_OF_WEEK_FIELD_() { return get_static_field<SCAPIX_META_STRING("DAY_OF_WEEK_FIELD"), jint>(); }
inline jint DateFormat::DAY_OF_WEEK_IN_MONTH_FIELD_() { return get_static_field<SCAPIX_META_STRING("DAY_OF_WEEK_IN_MONTH_FIELD"), jint>(); }
inline jint DateFormat::DAY_OF_YEAR_FIELD_() { return get_static_field<SCAPIX_META_STRING("DAY_OF_YEAR_FIELD"), jint>(); }
inline jint DateFormat::DEFAULT_() { return get_static_field<SCAPIX_META_STRING("DEFAULT"), jint>(); }
inline jint DateFormat::DOW_LOCAL_FIELD_() { return get_static_field<SCAPIX_META_STRING("DOW_LOCAL_FIELD"), jint>(); }
inline jint DateFormat::ERA_FIELD_() { return get_static_field<SCAPIX_META_STRING("ERA_FIELD"), jint>(); }
inline jint DateFormat::EXTENDED_YEAR_FIELD_() { return get_static_field<SCAPIX_META_STRING("EXTENDED_YEAR_FIELD"), jint>(); }
inline jint DateFormat::FLEXIBLE_DAY_PERIOD_FIELD_() { return get_static_field<SCAPIX_META_STRING("FLEXIBLE_DAY_PERIOD_FIELD"), jint>(); }
inline jint DateFormat::FRACTIONAL_SECOND_FIELD_() { return get_static_field<SCAPIX_META_STRING("FRACTIONAL_SECOND_FIELD"), jint>(); }
inline jint DateFormat::FULL_() { return get_static_field<SCAPIX_META_STRING("FULL"), jint>(); }
inline ref<java::lang::String> DateFormat::GENERIC_TZ_() { return get_static_field<SCAPIX_META_STRING("GENERIC_TZ"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::HOUR_() { return get_static_field<SCAPIX_META_STRING("HOUR"), ref<java::lang::String>>(); }
inline jint DateFormat::HOUR0_FIELD_() { return get_static_field<SCAPIX_META_STRING("HOUR0_FIELD"), jint>(); }
inline jint DateFormat::HOUR1_FIELD_() { return get_static_field<SCAPIX_META_STRING("HOUR1_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::HOUR24_() { return get_static_field<SCAPIX_META_STRING("HOUR24"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::HOUR24_MINUTE_() { return get_static_field<SCAPIX_META_STRING("HOUR24_MINUTE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::HOUR24_MINUTE_SECOND_() { return get_static_field<SCAPIX_META_STRING("HOUR24_MINUTE_SECOND"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::HOUR_MINUTE_() { return get_static_field<SCAPIX_META_STRING("HOUR_MINUTE"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::HOUR_MINUTE_SECOND_() { return get_static_field<SCAPIX_META_STRING("HOUR_MINUTE_SECOND"), ref<java::lang::String>>(); }
inline jint DateFormat::HOUR_OF_DAY0_FIELD_() { return get_static_field<SCAPIX_META_STRING("HOUR_OF_DAY0_FIELD"), jint>(); }
inline jint DateFormat::HOUR_OF_DAY1_FIELD_() { return get_static_field<SCAPIX_META_STRING("HOUR_OF_DAY1_FIELD"), jint>(); }
inline jint DateFormat::JULIAN_DAY_FIELD_() { return get_static_field<SCAPIX_META_STRING("JULIAN_DAY_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::LOCATION_TZ_() { return get_static_field<SCAPIX_META_STRING("LOCATION_TZ"), ref<java::lang::String>>(); }
inline jint DateFormat::LONG_() { return get_static_field<SCAPIX_META_STRING("LONG"), jint>(); }
inline jint DateFormat::MEDIUM_() { return get_static_field<SCAPIX_META_STRING("MEDIUM"), jint>(); }
inline jint DateFormat::MILLISECONDS_IN_DAY_FIELD_() { return get_static_field<SCAPIX_META_STRING("MILLISECONDS_IN_DAY_FIELD"), jint>(); }
inline jint DateFormat::MILLISECOND_FIELD_() { return get_static_field<SCAPIX_META_STRING("MILLISECOND_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::MINUTE_() { return get_static_field<SCAPIX_META_STRING("MINUTE"), ref<java::lang::String>>(); }
inline jint DateFormat::MINUTE_FIELD_() { return get_static_field<SCAPIX_META_STRING("MINUTE_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::MINUTE_SECOND_() { return get_static_field<SCAPIX_META_STRING("MINUTE_SECOND"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::MONTH_() { return get_static_field<SCAPIX_META_STRING("MONTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::MONTH_DAY_() { return get_static_field<SCAPIX_META_STRING("MONTH_DAY"), ref<java::lang::String>>(); }
inline jint DateFormat::MONTH_FIELD_() { return get_static_field<SCAPIX_META_STRING("MONTH_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::MONTH_WEEKDAY_DAY_() { return get_static_field<SCAPIX_META_STRING("MONTH_WEEKDAY_DAY"), ref<java::lang::String>>(); }
inline jint DateFormat::NONE_() { return get_static_field<SCAPIX_META_STRING("NONE"), jint>(); }
inline ref<java::lang::String> DateFormat::NUM_MONTH_() { return get_static_field<SCAPIX_META_STRING("NUM_MONTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::NUM_MONTH_DAY_() { return get_static_field<SCAPIX_META_STRING("NUM_MONTH_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::NUM_MONTH_WEEKDAY_DAY_() { return get_static_field<SCAPIX_META_STRING("NUM_MONTH_WEEKDAY_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::QUARTER_() { return get_static_field<SCAPIX_META_STRING("QUARTER"), ref<java::lang::String>>(); }
inline jint DateFormat::QUARTER_FIELD_() { return get_static_field<SCAPIX_META_STRING("QUARTER_FIELD"), jint>(); }
inline jint DateFormat::RELATIVE_() { return get_static_field<SCAPIX_META_STRING("RELATIVE"), jint>(); }
inline jint DateFormat::RELATIVE_DEFAULT_() { return get_static_field<SCAPIX_META_STRING("RELATIVE_DEFAULT"), jint>(); }
inline jint DateFormat::RELATIVE_FULL_() { return get_static_field<SCAPIX_META_STRING("RELATIVE_FULL"), jint>(); }
inline jint DateFormat::RELATIVE_LONG_() { return get_static_field<SCAPIX_META_STRING("RELATIVE_LONG"), jint>(); }
inline jint DateFormat::RELATIVE_MEDIUM_() { return get_static_field<SCAPIX_META_STRING("RELATIVE_MEDIUM"), jint>(); }
inline jint DateFormat::RELATIVE_SHORT_() { return get_static_field<SCAPIX_META_STRING("RELATIVE_SHORT"), jint>(); }
inline ref<java::lang::String> DateFormat::SECOND_() { return get_static_field<SCAPIX_META_STRING("SECOND"), ref<java::lang::String>>(); }
inline jint DateFormat::SECOND_FIELD_() { return get_static_field<SCAPIX_META_STRING("SECOND_FIELD"), jint>(); }
inline jint DateFormat::SHORT_() { return get_static_field<SCAPIX_META_STRING("SHORT"), jint>(); }
inline ref<java::lang::String> DateFormat::SPECIFIC_TZ_() { return get_static_field<SCAPIX_META_STRING("SPECIFIC_TZ"), ref<java::lang::String>>(); }
inline jint DateFormat::STANDALONE_DAY_FIELD_() { return get_static_field<SCAPIX_META_STRING("STANDALONE_DAY_FIELD"), jint>(); }
inline jint DateFormat::STANDALONE_MONTH_FIELD_() { return get_static_field<SCAPIX_META_STRING("STANDALONE_MONTH_FIELD"), jint>(); }
inline jint DateFormat::STANDALONE_QUARTER_FIELD_() { return get_static_field<SCAPIX_META_STRING("STANDALONE_QUARTER_FIELD"), jint>(); }
inline jint DateFormat::TIMEZONE_FIELD_() { return get_static_field<SCAPIX_META_STRING("TIMEZONE_FIELD"), jint>(); }
inline jint DateFormat::TIMEZONE_GENERIC_FIELD_() { return get_static_field<SCAPIX_META_STRING("TIMEZONE_GENERIC_FIELD"), jint>(); }
inline jint DateFormat::TIMEZONE_ISO_FIELD_() { return get_static_field<SCAPIX_META_STRING("TIMEZONE_ISO_FIELD"), jint>(); }
inline jint DateFormat::TIMEZONE_ISO_LOCAL_FIELD_() { return get_static_field<SCAPIX_META_STRING("TIMEZONE_ISO_LOCAL_FIELD"), jint>(); }
inline jint DateFormat::TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD_() { return get_static_field<SCAPIX_META_STRING("TIMEZONE_LOCALIZED_GMT_OFFSET_FIELD"), jint>(); }
inline jint DateFormat::TIMEZONE_RFC_FIELD_() { return get_static_field<SCAPIX_META_STRING("TIMEZONE_RFC_FIELD"), jint>(); }
inline jint DateFormat::TIMEZONE_SPECIAL_FIELD_() { return get_static_field<SCAPIX_META_STRING("TIMEZONE_SPECIAL_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::WEEKDAY_() { return get_static_field<SCAPIX_META_STRING("WEEKDAY"), ref<java::lang::String>>(); }
inline jint DateFormat::WEEK_OF_MONTH_FIELD_() { return get_static_field<SCAPIX_META_STRING("WEEK_OF_MONTH_FIELD"), jint>(); }
inline jint DateFormat::WEEK_OF_YEAR_FIELD_() { return get_static_field<SCAPIX_META_STRING("WEEK_OF_YEAR_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::YEAR_() { return get_static_field<SCAPIX_META_STRING("YEAR"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_ABBR_MONTH_() { return get_static_field<SCAPIX_META_STRING("YEAR_ABBR_MONTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_ABBR_MONTH_DAY_() { return get_static_field<SCAPIX_META_STRING("YEAR_ABBR_MONTH_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_ABBR_MONTH_WEEKDAY_DAY_() { return get_static_field<SCAPIX_META_STRING("YEAR_ABBR_MONTH_WEEKDAY_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_ABBR_QUARTER_() { return get_static_field<SCAPIX_META_STRING("YEAR_ABBR_QUARTER"), ref<java::lang::String>>(); }
inline jint DateFormat::YEAR_FIELD_() { return get_static_field<SCAPIX_META_STRING("YEAR_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::YEAR_MONTH_() { return get_static_field<SCAPIX_META_STRING("YEAR_MONTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_MONTH_DAY_() { return get_static_field<SCAPIX_META_STRING("YEAR_MONTH_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_MONTH_WEEKDAY_DAY_() { return get_static_field<SCAPIX_META_STRING("YEAR_MONTH_WEEKDAY_DAY"), ref<java::lang::String>>(); }
inline jint DateFormat::YEAR_NAME_FIELD_() { return get_static_field<SCAPIX_META_STRING("YEAR_NAME_FIELD"), jint>(); }
inline ref<java::lang::String> DateFormat::YEAR_NUM_MONTH_() { return get_static_field<SCAPIX_META_STRING("YEAR_NUM_MONTH"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_NUM_MONTH_DAY_() { return get_static_field<SCAPIX_META_STRING("YEAR_NUM_MONTH_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_NUM_MONTH_WEEKDAY_DAY_() { return get_static_field<SCAPIX_META_STRING("YEAR_NUM_MONTH_WEEKDAY_DAY"), ref<java::lang::String>>(); }
inline ref<java::lang::String> DateFormat::YEAR_QUARTER_() { return get_static_field<SCAPIX_META_STRING("YEAR_QUARTER"), ref<java::lang::String>>(); }
inline jint DateFormat::YEAR_WOY_FIELD_() { return get_static_field<SCAPIX_META_STRING("YEAR_WOY_FIELD"), jint>(); }
inline ref<java::lang::StringBuffer> DateFormat::format(ref<java::lang::Object> obj, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> fieldPosition) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(obj, toAppendTo, fieldPosition); }
inline ref<java::lang::StringBuffer> DateFormat::format(ref<android::icu::util::Calendar> p1, ref<java::lang::StringBuffer> p2, ref<java::text::FieldPosition> p3) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(p1, p2, p3); }
inline ref<java::lang::StringBuffer> DateFormat::format(ref<java::util::Date> date, ref<java::lang::StringBuffer> toAppendTo, ref<java::text::FieldPosition> fieldPosition) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::StringBuffer>>(date, toAppendTo, fieldPosition); }
inline ref<java::lang::String> DateFormat::format(ref<java::util::Date> date) { return call_method<SCAPIX_META_STRING("format"), ref<java::lang::String>>(date); }
inline ref<java::util::Date> DateFormat::parse(ref<java::lang::String> text) { return call_method<SCAPIX_META_STRING("parse"), ref<java::util::Date>>(text); }
inline void DateFormat::parse(ref<java::lang::String> p1, ref<android::icu::util::Calendar> p2, ref<java::text::ParsePosition> p3) { return call_method<SCAPIX_META_STRING("parse"), void>(p1, p2, p3); }
inline ref<java::util::Date> DateFormat::parse(ref<java::lang::String> text, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parse"), ref<java::util::Date>>(text, pos); }
inline ref<java::lang::Object> DateFormat::parseObject(ref<java::lang::String> source, ref<java::text::ParsePosition> pos) { return call_method<SCAPIX_META_STRING("parseObject"), ref<java::lang::Object>>(source, pos); }
inline ref<android::icu::text::DateFormat> DateFormat::getTimeInstance() { return call_static_method<SCAPIX_META_STRING("getTimeInstance"), ref<android::icu::text::DateFormat>>(); }
inline ref<android::icu::text::DateFormat> DateFormat::getTimeInstance(jint style) { return call_static_method<SCAPIX_META_STRING("getTimeInstance"), ref<android::icu::text::DateFormat>>(style); }
inline ref<android::icu::text::DateFormat> DateFormat::getTimeInstance(jint style, ref<java::util::Locale> aLocale) { return call_static_method<SCAPIX_META_STRING("getTimeInstance"), ref<android::icu::text::DateFormat>>(style, aLocale); }
inline ref<android::icu::text::DateFormat> DateFormat::getTimeInstance(jint style, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getTimeInstance"), ref<android::icu::text::DateFormat>>(style, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateInstance() { return call_static_method<SCAPIX_META_STRING("getDateInstance"), ref<android::icu::text::DateFormat>>(); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateInstance(jint style) { return call_static_method<SCAPIX_META_STRING("getDateInstance"), ref<android::icu::text::DateFormat>>(style); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateInstance(jint style, ref<java::util::Locale> aLocale) { return call_static_method<SCAPIX_META_STRING("getDateInstance"), ref<android::icu::text::DateFormat>>(style, aLocale); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateInstance(jint style, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getDateInstance"), ref<android::icu::text::DateFormat>>(style, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateTimeInstance() { return call_static_method<SCAPIX_META_STRING("getDateTimeInstance"), ref<android::icu::text::DateFormat>>(); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateTimeInstance(jint dateStyle, jint timeStyle) { return call_static_method<SCAPIX_META_STRING("getDateTimeInstance"), ref<android::icu::text::DateFormat>>(dateStyle, timeStyle); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateTimeInstance(jint dateStyle, jint timeStyle, ref<java::util::Locale> aLocale) { return call_static_method<SCAPIX_META_STRING("getDateTimeInstance"), ref<android::icu::text::DateFormat>>(dateStyle, timeStyle, aLocale); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateTimeInstance(jint dateStyle, jint timeStyle, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getDateTimeInstance"), ref<android::icu::text::DateFormat>>(dateStyle, timeStyle, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getInstance() { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::DateFormat>>(); }
inline ref<link::java::array<java::util::Locale>> DateFormat::getAvailableLocales() { return call_static_method<SCAPIX_META_STRING("getAvailableLocales"), ref<link::java::array<java::util::Locale>>>(); }
inline void DateFormat::setCalendar(ref<android::icu::util::Calendar> newCalendar) { return call_method<SCAPIX_META_STRING("setCalendar"), void>(newCalendar); }
inline ref<android::icu::util::Calendar> DateFormat::getCalendar() { return call_method<SCAPIX_META_STRING("getCalendar"), ref<android::icu::util::Calendar>>(); }
inline void DateFormat::setNumberFormat(ref<android::icu::text::NumberFormat> newNumberFormat) { return call_method<SCAPIX_META_STRING("setNumberFormat"), void>(newNumberFormat); }
inline ref<android::icu::text::NumberFormat> DateFormat::getNumberFormat() { return call_method<SCAPIX_META_STRING("getNumberFormat"), ref<android::icu::text::NumberFormat>>(); }
inline void DateFormat::setTimeZone(ref<android::icu::util::TimeZone> zone) { return call_method<SCAPIX_META_STRING("setTimeZone"), void>(zone); }
inline ref<android::icu::util::TimeZone> DateFormat::getTimeZone() { return call_method<SCAPIX_META_STRING("getTimeZone"), ref<android::icu::util::TimeZone>>(); }
inline void DateFormat::setLenient(jboolean lenient) { return call_method<SCAPIX_META_STRING("setLenient"), void>(lenient); }
inline jboolean DateFormat::isLenient() { return call_method<SCAPIX_META_STRING("isLenient"), jboolean>(); }
inline void DateFormat::setCalendarLenient(jboolean lenient) { return call_method<SCAPIX_META_STRING("setCalendarLenient"), void>(lenient); }
inline jboolean DateFormat::isCalendarLenient() { return call_method<SCAPIX_META_STRING("isCalendarLenient"), jboolean>(); }
inline ref<android::icu::text::DateFormat> DateFormat::setBooleanAttribute(ref<android::icu::text::DateFormat_BooleanAttribute> key, jboolean value) { return call_method<SCAPIX_META_STRING("setBooleanAttribute"), ref<android::icu::text::DateFormat>>(key, value); }
inline jboolean DateFormat::getBooleanAttribute(ref<android::icu::text::DateFormat_BooleanAttribute> key) { return call_method<SCAPIX_META_STRING("getBooleanAttribute"), jboolean>(key); }
inline void DateFormat::setContext(ref<android::icu::text::DisplayContext> context) { return call_method<SCAPIX_META_STRING("setContext"), void>(context); }
inline ref<android::icu::text::DisplayContext> DateFormat::getContext(ref<android::icu::text::DisplayContext_Type> type) { return call_method<SCAPIX_META_STRING("getContext"), ref<android::icu::text::DisplayContext>>(type); }
inline jint DateFormat::hashCode() { return call_method<SCAPIX_META_STRING("hashCode"), jint>(); }
inline jboolean DateFormat::equals(ref<java::lang::Object> obj) { return call_method<SCAPIX_META_STRING("equals"), jboolean>(obj); }
inline ref<java::lang::Object> DateFormat::clone() { return call_method<SCAPIX_META_STRING("clone"), ref<java::lang::Object>>(); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getDateInstance"), ref<android::icu::text::DateFormat>>(cal, dateStyle, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getDateInstance"), ref<android::icu::text::DateFormat>>(cal, dateStyle, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getTimeInstance(ref<android::icu::util::Calendar> cal, jint timeStyle, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getTimeInstance"), ref<android::icu::text::DateFormat>>(cal, timeStyle, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getTimeInstance(ref<android::icu::util::Calendar> cal, jint timeStyle, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getTimeInstance"), ref<android::icu::text::DateFormat>>(cal, timeStyle, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateTimeInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, jint timeStyle, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getDateTimeInstance"), ref<android::icu::text::DateFormat>>(cal, dateStyle, timeStyle, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateTimeInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, jint timeStyle, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getDateTimeInstance"), ref<android::icu::text::DateFormat>>(cal, dateStyle, timeStyle, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getInstance(ref<android::icu::util::Calendar> cal, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::DateFormat>>(cal, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getInstance(ref<android::icu::util::Calendar> cal) { return call_static_method<SCAPIX_META_STRING("getInstance"), ref<android::icu::text::DateFormat>>(cal); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateInstance(ref<android::icu::util::Calendar> cal, jint dateStyle) { return call_static_method<SCAPIX_META_STRING("getDateInstance"), ref<android::icu::text::DateFormat>>(cal, dateStyle); }
inline ref<android::icu::text::DateFormat> DateFormat::getTimeInstance(ref<android::icu::util::Calendar> cal, jint timeStyle) { return call_static_method<SCAPIX_META_STRING("getTimeInstance"), ref<android::icu::text::DateFormat>>(cal, timeStyle); }
inline ref<android::icu::text::DateFormat> DateFormat::getDateTimeInstance(ref<android::icu::util::Calendar> cal, jint dateStyle, jint timeStyle) { return call_static_method<SCAPIX_META_STRING("getDateTimeInstance"), ref<android::icu::text::DateFormat>>(cal, dateStyle, timeStyle); }
inline ref<android::icu::text::DateFormat> DateFormat::getInstanceForSkeleton(ref<java::lang::String> skeleton) { return call_static_method<SCAPIX_META_STRING("getInstanceForSkeleton"), ref<android::icu::text::DateFormat>>(skeleton); }
inline ref<android::icu::text::DateFormat> DateFormat::getInstanceForSkeleton(ref<java::lang::String> skeleton, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getInstanceForSkeleton"), ref<android::icu::text::DateFormat>>(skeleton, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getInstanceForSkeleton(ref<java::lang::String> skeleton, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getInstanceForSkeleton"), ref<android::icu::text::DateFormat>>(skeleton, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getInstanceForSkeleton(ref<android::icu::util::Calendar> cal, ref<java::lang::String> skeleton, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getInstanceForSkeleton"), ref<android::icu::text::DateFormat>>(cal, skeleton, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getInstanceForSkeleton(ref<android::icu::util::Calendar> cal, ref<java::lang::String> skeleton, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getInstanceForSkeleton"), ref<android::icu::text::DateFormat>>(cal, skeleton, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getPatternInstance(ref<java::lang::String> skeleton) { return call_static_method<SCAPIX_META_STRING("getPatternInstance"), ref<android::icu::text::DateFormat>>(skeleton); }
inline ref<android::icu::text::DateFormat> DateFormat::getPatternInstance(ref<java::lang::String> skeleton, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getPatternInstance"), ref<android::icu::text::DateFormat>>(skeleton, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getPatternInstance(ref<java::lang::String> skeleton, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getPatternInstance"), ref<android::icu::text::DateFormat>>(skeleton, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getPatternInstance(ref<android::icu::util::Calendar> cal, ref<java::lang::String> skeleton, ref<java::util::Locale> locale) { return call_static_method<SCAPIX_META_STRING("getPatternInstance"), ref<android::icu::text::DateFormat>>(cal, skeleton, locale); }
inline ref<android::icu::text::DateFormat> DateFormat::getPatternInstance(ref<android::icu::util::Calendar> cal, ref<java::lang::String> skeleton, ref<android::icu::util::ULocale> locale) { return call_static_method<SCAPIX_META_STRING("getPatternInstance"), ref<android::icu::text::DateFormat>>(cal, skeleton, locale); }

} // namespace android::icu::text
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_ICU_TEXT_DATEFORMAT_H
