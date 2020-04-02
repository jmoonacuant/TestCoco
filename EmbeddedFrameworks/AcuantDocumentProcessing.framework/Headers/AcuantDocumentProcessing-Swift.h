// Generated by Apple Swift version 5.2 (swiftlang-1103.0.32.1 clang-1103.0.32.29)
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

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AcuantCommon;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AcuantDocumentProcessing",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC24AcuantDocumentProcessing6Action")
@interface Action : NSObject
@property (nonatomic, copy) NSString * _Nullable actions;
@property (nonatomic, copy) NSString * _Nullable actionDescription;
@property (nonatomic, copy) NSString * _Nullable disposition;
@property (nonatomic, copy) NSString * _Nullable Id;
@property (nonatomic, copy) NSString * _Nullable information;
@property (nonatomic, copy) NSString * _Nullable key;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable result;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Action * _Nullable)initWithJSONObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end

@class IdOptions;
@protocol CreateInstanceDelegate;
@class IdData;
@protocol UploadImageDelegate;
@protocol GetDataDelegate;
@protocol DeleteDelegate;

SWIFT_CLASS("_TtC24AcuantDocumentProcessing24AcuantDocumentProcessing")
@interface AcuantDocumentProcessing : NSObject
+ (void)createInstanceWithOptions:(IdOptions * _Nonnull)options delegate:(id <CreateInstanceDelegate> _Nonnull)delegate;
+ (void)uploadImageWithInstancdId:(NSString * _Nonnull)instancdId data:(IdData * _Nonnull)data options:(IdOptions * _Nonnull)options delegate:(id <UploadImageDelegate> _Nonnull)delegate;
+ (void)getDataWithInstanceId:(NSString * _Nonnull)instanceId isHealthCard:(BOOL)isHealthCard delegate:(id <GetDataDelegate> _Nonnull)delegate;
+ (void)deleteInstanceWithInstanceId:(NSString * _Nonnull)instanceId type:(enum DeleteType)type delegate:(id <DeleteDelegate> _Nonnull)delegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing6Alerts")
@interface Alerts : NSObject
@property (nonatomic, copy) NSArray<Action *> * _Nullable actions;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Alerts * _Nullable)initWithJsonArrayWithJsonArray:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)jsonArray SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing13AssureIDImage")
@interface AssureIDImage : NSObject
@property (nonatomic) NSInteger horizontalResolution;
@property (nonatomic) NSInteger verticalResolution;
@property (nonatomic) NSInteger side;
@property (nonatomic) NSInteger light;
@property (nonatomic) BOOL isCropped;
@property (nonatomic) BOOL isTampered;
@property (nonatomic, copy) NSString * _Nullable Id;
@property (nonatomic, copy) NSString * _Nullable mimeType;
@property (nonatomic, copy) NSString * _Nullable uri;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (AssureIDImage * _Nullable)initWithJSONObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing10Biographic")
@interface Biographic : NSObject
@property (nonatomic) NSInteger age;
@property (nonatomic, copy) NSString * _Nullable birthDate;
@property (nonatomic, copy) NSString * _Nullable expirationDate;
@property (nonatomic, copy) NSString * _Nullable fullName;
@property (nonatomic) NSInteger gender;
@property (nonatomic, copy) NSString * _Nullable photo;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Biographic * _Nonnull)initWithJsonObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, CardSide, open) {
  CardSideFront = 0,
  CardSideBack = 1,
};

@class Type;

SWIFT_CLASS("_TtC24AcuantDocumentProcessing14Classification")
@interface Classification : NSObject
@property (nonatomic) NSInteger mode;
@property (nonatomic) BOOL orientationChanged;
@property (nonatomic) BOOL presentationChanged;
@property (nonatomic, strong) Type * _Nullable type;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Classification * _Nonnull)initWithJsonObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end

@class AcuantError;

SWIFT_PROTOCOL("_TtP24AcuantDocumentProcessing22CreateInstanceDelegate_")
@protocol CreateInstanceDelegate
- (void)instanceCreatedWithInstanceId:(NSString * _Nullable)instanceId error:(AcuantError * _Nullable)error;
@end

@class RegionOfInterest;

SWIFT_CLASS("_TtC24AcuantDocumentProcessing9DataField")
@interface DataField : NSObject
@property (nonatomic) NSInteger dataSource;
@property (nonatomic, copy) NSString * _Nullable fieldDescrption;
@property (nonatomic, copy) NSString * _Nullable Id;
@property (nonatomic) BOOL isImage;
@property (nonatomic, copy) NSString * _Nullable key;
@property (nonatomic, strong) RegionOfInterest * _Nullable regionOfInterest;
@property (nonatomic, copy) NSString * _Nullable regionReference;
@property (nonatomic) double reliability;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable value;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (DataField * _Nullable)initWithJSONObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing10DataFields")
@interface DataFields : NSObject
@property (nonatomic, copy) NSArray<DataField *> * _Nullable dataFields;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (DataFields * _Nullable)initWithJsonArrayWithJsonArray:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)jsonArray SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP24AcuantDocumentProcessing14DeleteDelegate_")
@protocol DeleteDelegate
- (void)instanceDeletedWithSuccess:(BOOL)success;
@end

@class DeviceType;

SWIFT_CLASS("_TtC24AcuantDocumentProcessing6Device")
@interface Device : NSObject
@property (nonatomic) BOOL hasContactlessChipReader;
@property (nonatomic) BOOL hasMagneticStripeReader;
@property (nonatomic, copy) NSString * _Nullable serialNumber;
@property (nonatomic, strong) DeviceType * _Nullable type;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Device * _Nullable)initWithJsonObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing10DeviceType")
@interface DeviceType : NSObject
@property (nonatomic, copy) NSString * _Nullable manufacturer;
@property (nonatomic, copy) NSString * _Nullable model;
@property (nonatomic) NSInteger sensorType;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (DeviceType * _Nullable)initWithJsonObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP24AcuantDocumentProcessing30DocumentClassificationDelegate_")
@protocol DocumentClassificationDelegate
- (void)documentClassifiedWithSuccess:(BOOL)success classification:(Classification * _Nullable)classification error:(AcuantError * _Nullable)error;
@end

@class RegionRectangle;

SWIFT_CLASS("_TtC24AcuantDocumentProcessing15DocumentElement")
@interface DocumentElement : NSObject
@property (nonatomic) NSInteger documentElement;
@property (nonatomic, copy) NSString * _Nullable imageReference;
@property (nonatomic, copy) NSString * _Nullable key;
@property (nonatomic, copy) NSString * _Nullable Id;
@property (nonatomic, strong) RegionRectangle * _Nullable rectangle;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (DocumentElement * _Nullable)initWithJSONObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing13DocumentField")
@interface DocumentField : NSObject
@property (nonatomic) NSInteger dataSource;
@property (nonatomic, copy) NSString * _Nullable fieldDescription;
@property (nonatomic, copy) NSString * _Nullable Id;
@property (nonatomic) BOOL isImage;
@property (nonatomic, copy) NSString * _Nullable key;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, copy) NSString * _Nullable regionReference;
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable value;
@property (nonatomic, copy) NSArray<NSString *> * _Nullable dataFieldReference;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (DocumentField * _Nullable)initWithJsonObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing6Fields")
@interface Fields : NSObject
@property (nonatomic, copy) NSArray<DocumentField *> * _Nullable documentFields;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Fields * _Nullable)initWithJsonArrayWithJsonArray:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)jsonArray SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end

@class ProcessingResult;

SWIFT_PROTOCOL("_TtP24AcuantDocumentProcessing15GetDataDelegate_")
@protocol GetDataDelegate
- (void)processingResultReceivedWithProcessingResult:(ProcessingResult * _Nonnull)processingResult;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing16ProcessingResult")
@interface ProcessingResult : NSObject
@property (nonatomic, strong) AcuantError * _Nullable error;
+ (ProcessingResult * _Nonnull)createInstance SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

SWIFT_CLASS("_TtC24AcuantDocumentProcessing25HealthInsuranceCardResult")
@interface HealthInsuranceCardResult : ProcessingResult
@property (nonatomic, copy) NSString * _Nullable copayOv;
@property (nonatomic, copy) NSString * _Nullable copaySp;
@property (nonatomic, copy) NSString * _Nullable copayUc;
@property (nonatomic, copy) NSString * _Nullable coverage;
@property (nonatomic, copy) NSString * _Nullable contractCode;
@property (nonatomic, copy) NSString * _Nullable dateOfBirth;
@property (nonatomic, copy) NSString * _Nullable deductible;
@property (nonatomic, copy) NSString * _Nullable effectiveDate;
@property (nonatomic, copy) NSString * _Nullable employer;
@property (nonatomic, copy) NSString * _Nullable expirationDate;
@property (nonatomic, copy) NSString * _Nullable firstName;
@property (nonatomic, copy) NSString * _Nullable groupName;
@property (nonatomic, copy) NSString * _Nullable groupNumber;
@property (nonatomic, copy) NSString * _Nullable issuerNumber;
@property (nonatomic, copy) NSString * _Nullable lastName;
@property (nonatomic, copy) NSString * _Nullable memberId;
@property (nonatomic, copy) NSString * _Nullable memberName;
@property (nonatomic, copy) NSString * _Nullable middlename;
@property (nonatomic, copy) NSString * _Nullable namePrefix;
@property (nonatomic, copy) NSString * _Nullable nameSuffix;
@property (nonatomic, copy) NSString * _Nullable other;
@property (nonatomic, copy) NSString * _Nullable payerId;
@property (nonatomic, copy) NSString * _Nullable planAdmin;
@property (nonatomic, copy) NSString * _Nullable planProvider;
@property (nonatomic, copy) NSString * _Nullable planType;
@property (nonatomic, strong) UIImage * _Nullable frontImage;
@property (nonatomic, copy) NSString * _Nullable rxBin;
@property (nonatomic, copy) NSString * _Nullable rxGroup;
@property (nonatomic, copy) NSString * _Nullable rxId;
@property (nonatomic, copy) NSString * _Nullable rxPcn;
@property (nonatomic, strong) UIImage * _Nullable backImage;
@property (nonatomic, copy) NSString * _Nullable fullAddress;
@property (nonatomic, copy) NSString * _Nullable state;
@property (nonatomic, copy) NSString * _Nullable street;
@property (nonatomic, copy) NSString * _Nullable zip;
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable planCode;
@property (nonatomic, copy) NSString * _Nullable phoneNumber;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable webAddress;
@property (nonatomic, copy) NSString * _Nullable transactionId;
@property (nonatomic, copy) NSString * _Nullable instanceID;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (HealthInsuranceCardResult * _Nonnull)initWithJsonStringWithJsonString:(NSString * _Nullable)jsonString instanceID:(NSString * _Nullable)instanceID SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end

@class Subscription;
@class Images;
@class Regions;

SWIFT_CLASS("_TtC24AcuantDocumentProcessing8IDResult")
@interface IDResult : ProcessingResult
@property (nonatomic, copy) NSString * _Nullable instanceID;
@property (nonatomic) NSInteger authenticationSensitivity;
@property (nonatomic, copy) NSString * _Nullable engineVersion;
@property (nonatomic, copy) NSString * _Nullable libraryVersion;
@property (nonatomic) NSInteger processMode;
@property (nonatomic) NSInteger result;
@property (nonatomic, strong) Subscription * _Nullable subscription;
@property (nonatomic, strong) Biographic * _Nullable biographic;
@property (nonatomic, strong) Classification * _Nullable classification;
@property (nonatomic, strong) Device * _Nullable device;
@property (nonatomic, strong) Alerts * _Nullable alerts;
@property (nonatomic, strong) DataFields * _Nullable dataFields;
@property (nonatomic, strong) Fields * _Nullable fields;
@property (nonatomic, strong) Images * _Nullable images;
@property (nonatomic, strong) Regions * _Nullable regions;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (IDResult * _Nonnull)initWithJsonStringWithJsonString:(NSString * _Nullable)jsonString SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing6IdData")
@interface IdData : NSObject
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic, copy) NSString * _Nullable barcodeString;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (IdData * _Nonnull)createInstance SWIFT_WARN_UNUSED_RESULT;
@end

enum AuthenticationSensitivity : NSInteger;

SWIFT_CLASS("_TtC24AcuantDocumentProcessing9IdOptions")
@interface IdOptions : NSObject
@property (nonatomic) enum CardSide cardSide;
@property (nonatomic) BOOL isHealthCard;
@property (nonatomic) BOOL isRetrying;
@property (nonatomic) enum AuthenticationSensitivity authenticationSensitivity;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (IdOptions * _Nonnull)createInstance SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM(NSInteger, AuthenticationSensitivity, open) {
  AuthenticationSensitivityNormal = 0,
  AuthenticationSensitivityHigh = 1,
  AuthenticationSensitivityLow = 2,
};


SWIFT_CLASS("_TtC24AcuantDocumentProcessing6Images")
@interface Images : NSObject
@property (nonatomic, copy) NSArray<AssureIDImage *> * _Nullable images;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Images * _Nullable)initWithJsonArrayWithJsonArray:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)jsonArray SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC24AcuantDocumentProcessing16RegionOfInterest")
@interface RegionOfInterest : NSObject
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger x;
@property (nonatomic) NSInteger y;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (RegionOfInterest * _Nullable)initWithJSONObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing15RegionRectangle")
@interface RegionRectangle : NSObject
@property (nonatomic) NSInteger height;
@property (nonatomic) NSInteger width;
@property (nonatomic) NSInteger x;
@property (nonatomic) NSInteger y;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (RegionRectangle * _Nullable)initWithJSONObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing7Regions")
@interface Regions : NSObject
@property (nonatomic, copy) NSArray<DocumentElement *> * _Nullable regions;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Regions * _Nullable)initWithJsonArrayWithJsonArray:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)jsonArray SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing12Subscription")
@interface Subscription : NSObject
@property (nonatomic) NSInteger documentProcessMode;
@property (nonatomic, copy) NSString * _Nullable Id;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isDevelopment;
@property (nonatomic) BOOL isTrial;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) BOOL storePII;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Subscription * _Nonnull)initWithJsonObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nonnull)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC24AcuantDocumentProcessing4Type")
@interface Type : NSObject
@property (nonatomic) NSInteger Class;
@property (nonatomic, copy) NSString * _Nullable classCode;
@property (nonatomic, copy) NSString * _Nullable className;
@property (nonatomic, copy) NSString * _Nullable Id;
@property (nonatomic) BOOL isGeneric;
@property (nonatomic, copy) NSString * _Nullable issue;
@property (nonatomic, copy) NSString * _Nullable issueType;
@property (nonatomic, copy) NSString * _Nullable issuerCode;
@property (nonatomic, copy) NSString * _Nullable issuerName;
@property (nonatomic, copy) NSString * _Nullable keesingCode;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) NSInteger size;
@property (nonatomic, copy) NSArray<NSDictionary<NSString *, id> *> * _Nullable supportedImages;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (Type * _Nullable)initWithJsonObjectWithJsonDict:(NSDictionary<NSString *, id> * _Nullable)jsonDict SWIFT_METHOD_FAMILY(none) SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_PROTOCOL("_TtP24AcuantDocumentProcessing19UploadImageDelegate_")
@protocol UploadImageDelegate
- (void)imageUploadedWithError:(AcuantError * _Nullable)error classification:(Classification * _Nullable)classification;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
