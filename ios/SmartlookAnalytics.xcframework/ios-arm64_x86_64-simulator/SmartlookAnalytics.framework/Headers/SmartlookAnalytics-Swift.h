#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef SMARTLOOKANALYTICS_SWIFT_H
#define SMARTLOOKANALYTICS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SmartlookAnalytics",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class SLFrameworkInfo;
@class NSString;
@class SLBridgeWireframe;

/// A protocol defines a basic set of functions that the bridge must implement.
/// note:
/// This protocol is designed only for internal use in SDK.
SWIFT_PROTOCOL_NAMED("BridgeInterface")
@protocol SLBridgeInterface <NSObject>
/// Basic information about the bridge.
/// Bridges that have synchronous access to the required information should use this property
/// to pass the information to Smartlook.
/// When this property has non-null value, the <code>obtainFrameworkInfo(completion:)</code> is <em>not</em> called.
@property (nonatomic, strong) SLFrameworkInfo * _Nullable frameworkInfo;
/// Attempts to asynchronously request for basic information about the bridge.
/// \param completion The block to execute with the results.
/// If the result is not known yet, it returns <code>nil</code>.
///
- (void)obtainFrameworkInfoWithCompletion:(void (^ _Nonnull)(SLFrameworkInfo * _Nullable))completion;
/// Attempts to asynchronously request wireframe root classes.
/// \param completion The block to execute with the results.
///
- (void)obtainWireframeRootClassesWithCompletion:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull))completion;
/// Attempts to asynchronously request for wireframe data.
/// \param identifier Unique identification for processed view.
///
/// \param completion The block to execute with the results.
/// If the result is currently unknown or impossible
/// to get the wireframe data, it returns <code>nil.</code>
///
- (void)obtainWireframeDataWithIdentifier:(id _Nullable)identifier completion:(void (^ _Nonnull)(SLBridgeWireframe * _Nullable))completion;
@end

@class SLBridgeWireframeView;

/// An object represents all minimal data for the one wireframe.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("BridgeWireframe")
@interface SLBridgeWireframe : NSObject
/// An array with wireframe items.
@property (nonatomic, strong) SLBridgeWireframeView * _Nullable root;
/// The width of a wireframe.
@property (nonatomic) double width;
/// The height of a wireframe.
@property (nonatomic) double height;
/// Creates an empty wireframe model object.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum SLSkeletonType : NSInteger;
@class SLBridgeWireframeSkeletonFlags;

/// An object represents one skeleton in the wireframe model.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("BridgeWireframeSkeleton")
@interface SLBridgeWireframeSkeleton : NSObject
/// A type of view’s skeleton. Default value is <code>.undefined</code>.
@property (nonatomic) enum SLSkeletonType type;
/// The frame rectangle describes the skeleton location
/// and size <em>relative to the root element</em>.
@property (nonatomic) CGRect rect;
/// The radius to use when drawing rounded corners for background.
/// Default value is 0.
@property (nonatomic) NSInteger radius;
/// The skeleton’s alpha value. Default value is 1.
@property (nonatomic) CGFloat alpha;
/// The skeleton item’s color.
@property (nonatomic, copy) NSString * _Nonnull color;
/// An optional flags for the skeleton.
@property (nonatomic, strong) SLBridgeWireframeSkeletonFlags * _Nullable flags;
/// Creates new skeleton instance with default values.
/// \param rect The frame rectangle describes the skeleton.
///
/// \param color The skeleton item’s color.
///
- (nonnull instancetype)initWithRect:(CGRect)rect color:(NSString * _Nonnull)color;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum SLSkeletonFlagShadow : NSInteger;

/// An object defines optional flags for the skeleton in the wireframe view.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("BridgeWireframeSkeletonFlags")
@interface SLBridgeWireframeSkeletonFlags : NSObject
/// A type of casted shadow. Default value is <code>.none</code>.
@property (nonatomic) enum SLSkeletonFlagShadow shadow;
/// Creates new instance with default values.
- (nonnull instancetype)init;
@end

enum SLSubviewType : NSInteger;

/// An object represents one view in the wireframe model.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("BridgeWireframeView")
@interface SLBridgeWireframeView : NSObject
/// A unique element identifier.
@property (nonatomic, copy) NSString * _Nonnull identifier;
/// A string with user identification of the element.
@property (nonatomic, copy) NSString * _Nullable name;
/// A string with the system-specific name of the element (typically class name).
@property (nonatomic, copy) NSString * _Nonnull typeName;
/// A type of element that generally describes view function.
/// Default value is <code>.undefined</code>.
@property (nonatomic) enum SLSubviewType type;
/// The frame rectangle describes the view location
/// and size <em>relative to the root element</em>.
@property (nonatomic) CGRect rect;
/// The content shift in the element’s internal space.
/// Default value is <code>.zero</code>.
/// SDK can use this offset for interpolation between frames.
@property (nonatomic) CGPoint offset;
/// The view’s alpha value. Default value is 1.
@property (nonatomic) CGFloat alpha;
/// Indicates that the view is currently focused.
/// Default value is <code>false</code>.
@property (nonatomic) BOOL isFocused;
/// Determines whether the view should be considered sensitive.
/// Default value is <code>false</code>.
@property (nonatomic) BOOL isSensitive;
/// List of skeletons that visually describe the view.
/// If the view has no describable representation, it is empty.
@property (nonatomic, copy) NSArray<SLBridgeWireframeSkeleton *> * _Nullable skeletons;
/// List of skeletons that visually describe the foreground part of the view.
/// warning:
/// This property currently isn’t processed on Apple platforms.
@property (nonatomic, copy) NSArray<SLBridgeWireframeSkeleton *> * _Nullable foregroundSkeletons;
/// An array of subviews.
@property (nonatomic, copy) NSArray<SLBridgeWireframeView *> * _Nullable subviews;
/// Creates new wireframe view instance with default values.
/// \param id The unique element identifier.
///
/// \param typeName The system-specific name of the element.
///
/// \param rect The rectangle of the frame describing the view.
///
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id typeName:(NSString * _Nonnull)typeName rect:(CGRect)rect;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





/// An object represents essential information about the bridge.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("FrameworkInfo")
@interface SLFrameworkInfo : NSObject
/// A technology of bridged framework.
@property (nonatomic, copy) NSString * _Nullable framework;
/// A version of the technology used by the bridge.
@property (nonatomic, copy) NSString * _Nullable frameworkVersion;
/// A version of the bridge plugin itself.
@property (nonatomic, copy) NSString * _Nullable frameworkPluginVersion;
/// Returns an empty framework info object.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






/// A type of casted shadow.
/// Describes the possible shadow types that the skeleton casts on its parent view.
/// note:
/// This enumeration is designed only for internal use in SDK.
typedef SWIFT_ENUM_NAMED(NSInteger, SLSkeletonFlagShadow, "SkeletonFlagShadow", open) {
/// Skeleton has no shadow.
  SLSkeletonFlagShadowNone = 0,
/// Skeleton has an outline shadow,
/// and this shadow occurs in <em>dark</em> mode.
  SLSkeletonFlagShadowLight = 1,
/// Skeleton has an outline shadow,
/// and this shadow occurs in <em>light</em> mode.
  SLSkeletonFlagShadowDark = 2,
};

/// A type of skeleton.
/// note:
/// This enumeration is designed only for internal use in SDK.
typedef SWIFT_ENUM_NAMED(NSInteger, SLSkeletonType, "SkeletonType", open) {
/// A general skeleton without a specific way of representation.
/// <ul>
///   <li>
///     Tip: All background or non-text skeletons should fall under this type.
///   </li>
/// </ul>
  SLSkeletonTypeUndefined = 0,
/// A skeleton representing text.
  SLSkeletonTypeText = 1,
};

/// A type of element that generally describes subview function.
/// Describes the element type by its essential features.
/// This type can be used to categorize the element.
/// note:
/// This enumeration is designed only for internal use in SDK.
typedef SWIFT_ENUM_NAMED(NSInteger, SLSubviewType, "SubviewType", open) {
/// The meaning of subview in UI design is neither defined nor obvious.
/// <ul>
///   <li>
///     Tip: All technical and layout subviews should fall under this type.
///   </li>
/// </ul>
  SLSubviewTypeUndefined = 0,
/// Display or edit texts (Label, TextEdit, etc.).
  SLSubviewTypeText = 1,
/// Elements whose primary purpose is to display images.
  SLSubviewTypeImage = 2,
/// Elements that do not act as a container for other
/// views (visual spacers, graphical elements, etc.).
  SLSubviewTypeArea = 3,
/// Darkens the overlaid content.
  SLSubviewTypeDimming = 4,
/// Elements that overlaid content with
/// some effect (like a blur, etc.).
  SLSubviewTypeVisualEffect = 5,
/// Embedded web content.
  SLSubviewTypeWebView = 6,
/// Elements allowing interaction with the map.
  SLSubviewTypeMap = 7,
/// Elements with graphical tabs.
  SLSubviewTypeTabBar = 8,
/// Standard system popovers.
  SLSubviewTypePopover = 9,
/// Date entry elements.
  SLSubviewTypeDatePicker = 10,
/// Time entry elements.
  SLSubviewTypeTimePicker = 11,
/// Showing the current progress to the final range.
  SLSubviewTypeProgress = 12,
/// Representing an ongoing activity (without a clear end).
  SLSubviewTypeSpinningWheel = 13,
/// An element used to display video.
  SLSubviewTypeVideo = 14,
/// GPU rendered stuff, bitmaps, etc.
  SLSubviewTypeSurface = 15,
/// Elements that act as clickable
/// buttons (Button, BarButton, etc.).
  SLSubviewTypeButton = 16,
/// Elements that allow the user to pick
/// a value from multiple choices.
  SLSubviewTypeSpinner = 17,
/// Advertisement.
/// note:
/// This option is not used in native Apple SDKs.
  SLSubviewTypeAd = 18,
/// Compact elements that represent
/// an attribute, text, entity, or action.
/// note:
/// This option is not used in native Apple SDKs.
  SLSubviewTypeChip = 19,
};

























#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef SMARTLOOKANALYTICS_SWIFT_H
#define SMARTLOOKANALYTICS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SmartlookAnalytics",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class SLFrameworkInfo;
@class NSString;
@class SLBridgeWireframe;

/// A protocol defines a basic set of functions that the bridge must implement.
/// note:
/// This protocol is designed only for internal use in SDK.
SWIFT_PROTOCOL_NAMED("BridgeInterface")
@protocol SLBridgeInterface <NSObject>
/// Basic information about the bridge.
/// Bridges that have synchronous access to the required information should use this property
/// to pass the information to Smartlook.
/// When this property has non-null value, the <code>obtainFrameworkInfo(completion:)</code> is <em>not</em> called.
@property (nonatomic, strong) SLFrameworkInfo * _Nullable frameworkInfo;
/// Attempts to asynchronously request for basic information about the bridge.
/// \param completion The block to execute with the results.
/// If the result is not known yet, it returns <code>nil</code>.
///
- (void)obtainFrameworkInfoWithCompletion:(void (^ _Nonnull)(SLFrameworkInfo * _Nullable))completion;
/// Attempts to asynchronously request wireframe root classes.
/// \param completion The block to execute with the results.
///
- (void)obtainWireframeRootClassesWithCompletion:(void (^ _Nonnull)(NSArray<NSString *> * _Nonnull))completion;
/// Attempts to asynchronously request for wireframe data.
/// \param identifier Unique identification for processed view.
///
/// \param completion The block to execute with the results.
/// If the result is currently unknown or impossible
/// to get the wireframe data, it returns <code>nil.</code>
///
- (void)obtainWireframeDataWithIdentifier:(id _Nullable)identifier completion:(void (^ _Nonnull)(SLBridgeWireframe * _Nullable))completion;
@end

@class SLBridgeWireframeView;

/// An object represents all minimal data for the one wireframe.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("BridgeWireframe")
@interface SLBridgeWireframe : NSObject
/// An array with wireframe items.
@property (nonatomic, strong) SLBridgeWireframeView * _Nullable root;
/// The width of a wireframe.
@property (nonatomic) double width;
/// The height of a wireframe.
@property (nonatomic) double height;
/// Creates an empty wireframe model object.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum SLSkeletonType : NSInteger;
@class SLBridgeWireframeSkeletonFlags;

/// An object represents one skeleton in the wireframe model.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("BridgeWireframeSkeleton")
@interface SLBridgeWireframeSkeleton : NSObject
/// A type of view’s skeleton. Default value is <code>.undefined</code>.
@property (nonatomic) enum SLSkeletonType type;
/// The frame rectangle describes the skeleton location
/// and size <em>relative to the root element</em>.
@property (nonatomic) CGRect rect;
/// The radius to use when drawing rounded corners for background.
/// Default value is 0.
@property (nonatomic) NSInteger radius;
/// The skeleton’s alpha value. Default value is 1.
@property (nonatomic) CGFloat alpha;
/// The skeleton item’s color.
@property (nonatomic, copy) NSString * _Nonnull color;
/// An optional flags for the skeleton.
@property (nonatomic, strong) SLBridgeWireframeSkeletonFlags * _Nullable flags;
/// Creates new skeleton instance with default values.
/// \param rect The frame rectangle describes the skeleton.
///
/// \param color The skeleton item’s color.
///
- (nonnull instancetype)initWithRect:(CGRect)rect color:(NSString * _Nonnull)color;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum SLSkeletonFlagShadow : NSInteger;

/// An object defines optional flags for the skeleton in the wireframe view.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("BridgeWireframeSkeletonFlags")
@interface SLBridgeWireframeSkeletonFlags : NSObject
/// A type of casted shadow. Default value is <code>.none</code>.
@property (nonatomic) enum SLSkeletonFlagShadow shadow;
/// Creates new instance with default values.
- (nonnull instancetype)init;
@end

enum SLSubviewType : NSInteger;

/// An object represents one view in the wireframe model.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("BridgeWireframeView")
@interface SLBridgeWireframeView : NSObject
/// A unique element identifier.
@property (nonatomic, copy) NSString * _Nonnull identifier;
/// A string with user identification of the element.
@property (nonatomic, copy) NSString * _Nullable name;
/// A string with the system-specific name of the element (typically class name).
@property (nonatomic, copy) NSString * _Nonnull typeName;
/// A type of element that generally describes view function.
/// Default value is <code>.undefined</code>.
@property (nonatomic) enum SLSubviewType type;
/// The frame rectangle describes the view location
/// and size <em>relative to the root element</em>.
@property (nonatomic) CGRect rect;
/// The content shift in the element’s internal space.
/// Default value is <code>.zero</code>.
/// SDK can use this offset for interpolation between frames.
@property (nonatomic) CGPoint offset;
/// The view’s alpha value. Default value is 1.
@property (nonatomic) CGFloat alpha;
/// Indicates that the view is currently focused.
/// Default value is <code>false</code>.
@property (nonatomic) BOOL isFocused;
/// Determines whether the view should be considered sensitive.
/// Default value is <code>false</code>.
@property (nonatomic) BOOL isSensitive;
/// List of skeletons that visually describe the view.
/// If the view has no describable representation, it is empty.
@property (nonatomic, copy) NSArray<SLBridgeWireframeSkeleton *> * _Nullable skeletons;
/// List of skeletons that visually describe the foreground part of the view.
/// warning:
/// This property currently isn’t processed on Apple platforms.
@property (nonatomic, copy) NSArray<SLBridgeWireframeSkeleton *> * _Nullable foregroundSkeletons;
/// An array of subviews.
@property (nonatomic, copy) NSArray<SLBridgeWireframeView *> * _Nullable subviews;
/// Creates new wireframe view instance with default values.
/// \param id The unique element identifier.
///
/// \param typeName The system-specific name of the element.
///
/// \param rect The rectangle of the frame describing the view.
///
- (nonnull instancetype)initWithId:(NSString * _Nonnull)id typeName:(NSString * _Nonnull)typeName rect:(CGRect)rect;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





/// An object represents essential information about the bridge.
/// note:
/// This object is designed only for internal use in SDK.
SWIFT_CLASS_NAMED("FrameworkInfo")
@interface SLFrameworkInfo : NSObject
/// A technology of bridged framework.
@property (nonatomic, copy) NSString * _Nullable framework;
/// A version of the technology used by the bridge.
@property (nonatomic, copy) NSString * _Nullable frameworkVersion;
/// A version of the bridge plugin itself.
@property (nonatomic, copy) NSString * _Nullable frameworkPluginVersion;
/// Returns an empty framework info object.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






/// A type of casted shadow.
/// Describes the possible shadow types that the skeleton casts on its parent view.
/// note:
/// This enumeration is designed only for internal use in SDK.
typedef SWIFT_ENUM_NAMED(NSInteger, SLSkeletonFlagShadow, "SkeletonFlagShadow", open) {
/// Skeleton has no shadow.
  SLSkeletonFlagShadowNone = 0,
/// Skeleton has an outline shadow,
/// and this shadow occurs in <em>dark</em> mode.
  SLSkeletonFlagShadowLight = 1,
/// Skeleton has an outline shadow,
/// and this shadow occurs in <em>light</em> mode.
  SLSkeletonFlagShadowDark = 2,
};

/// A type of skeleton.
/// note:
/// This enumeration is designed only for internal use in SDK.
typedef SWIFT_ENUM_NAMED(NSInteger, SLSkeletonType, "SkeletonType", open) {
/// A general skeleton without a specific way of representation.
/// <ul>
///   <li>
///     Tip: All background or non-text skeletons should fall under this type.
///   </li>
/// </ul>
  SLSkeletonTypeUndefined = 0,
/// A skeleton representing text.
  SLSkeletonTypeText = 1,
};

/// A type of element that generally describes subview function.
/// Describes the element type by its essential features.
/// This type can be used to categorize the element.
/// note:
/// This enumeration is designed only for internal use in SDK.
typedef SWIFT_ENUM_NAMED(NSInteger, SLSubviewType, "SubviewType", open) {
/// The meaning of subview in UI design is neither defined nor obvious.
/// <ul>
///   <li>
///     Tip: All technical and layout subviews should fall under this type.
///   </li>
/// </ul>
  SLSubviewTypeUndefined = 0,
/// Display or edit texts (Label, TextEdit, etc.).
  SLSubviewTypeText = 1,
/// Elements whose primary purpose is to display images.
  SLSubviewTypeImage = 2,
/// Elements that do not act as a container for other
/// views (visual spacers, graphical elements, etc.).
  SLSubviewTypeArea = 3,
/// Darkens the overlaid content.
  SLSubviewTypeDimming = 4,
/// Elements that overlaid content with
/// some effect (like a blur, etc.).
  SLSubviewTypeVisualEffect = 5,
/// Embedded web content.
  SLSubviewTypeWebView = 6,
/// Elements allowing interaction with the map.
  SLSubviewTypeMap = 7,
/// Elements with graphical tabs.
  SLSubviewTypeTabBar = 8,
/// Standard system popovers.
  SLSubviewTypePopover = 9,
/// Date entry elements.
  SLSubviewTypeDatePicker = 10,
/// Time entry elements.
  SLSubviewTypeTimePicker = 11,
/// Showing the current progress to the final range.
  SLSubviewTypeProgress = 12,
/// Representing an ongoing activity (without a clear end).
  SLSubviewTypeSpinningWheel = 13,
/// An element used to display video.
  SLSubviewTypeVideo = 14,
/// GPU rendered stuff, bitmaps, etc.
  SLSubviewTypeSurface = 15,
/// Elements that act as clickable
/// buttons (Button, BarButton, etc.).
  SLSubviewTypeButton = 16,
/// Elements that allow the user to pick
/// a value from multiple choices.
  SLSubviewTypeSpinner = 17,
/// Advertisement.
/// note:
/// This option is not used in native Apple SDKs.
  SLSubviewTypeAd = 18,
/// Compact elements that represent
/// an attribute, text, entity, or action.
/// note:
/// This option is not used in native Apple SDKs.
  SLSubviewTypeChip = 19,
};

























#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
