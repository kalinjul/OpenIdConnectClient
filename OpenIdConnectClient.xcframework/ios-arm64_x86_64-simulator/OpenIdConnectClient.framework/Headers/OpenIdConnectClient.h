#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Endpoints, OpenIdConnectClientConfig, OICCKtor_client_coreHttpClient, OpenIdConnectClientCompanion, TokenRequest, AuthCodeRequest, OICCKtor_client_coreHttpRequestBuilder, OICCKtor_httpURLBuilder, OICCKtor_httpHttpStatusCode, AccessTokenResponse, OICCOpenIdConnectConfiguration, CodeChallengeMethod, OICCKotlinThrowable, OICCKotlinArray<T>, OICCKotlinException, OpenIdConnectException, OpenIdConnectExceptionAuthenticationFailure, OpenIdConnectExceptionInvalidUrl, OpenIdConnectExceptionTechnicalFailure, OpenIdConnectErrorResponse, OpenIdConnectExceptionUnsuccessfulTokenRequest, OpenIdConnectExceptionUnsupportedFormat, OpenIdConnectClient, AbstractCodeAuthFlow, OICCKtor_httpUrl, OICCKotlinx_serialization_jsonJson, AuthCodeResult, PKCECompanion, PKCE, OICCKotlinEnumCompanion, OICCKotlinEnum<E>, IdToken, JwtHeader, JwtCompanion, Jwt, JwtHeaderCompanion, JwtParser, OICCKtor_client_coreHttpStatement, AccessTokenResponseCompanion, OpenIdConnectErrorResponseError, OpenIdConnectErrorResponseCompanion, OpenIdConnectErrorResponseErrorCompanion, OICCOpenIdConnectConfigurationCompanion, OICCKtor_client_coreHttpClientCall, OICCKtor_utilsGMTDate, OICCKtor_httpHttpProtocolVersion, OICCKtor_client_coreHttpResponse, OICCKtor_client_coreHttpClientEngineConfig, OICCKtor_client_coreHttpClientConfig<T>, OICCKtor_eventsEvents, OICCKtor_client_coreHttpReceivePipeline, OICCKtor_client_coreHttpRequestPipeline, OICCKtor_client_coreHttpResponsePipeline, OICCKtor_client_coreHttpSendPipeline, OICCKotlinRuntimeException, OICCKotlinIllegalStateException, OICCKtor_httpHeadersBuilder, OICCKtor_client_coreHttpRequestBuilderCompanion, OICCKtor_client_coreHttpRequestData, OICCKtor_utilsTypeInfo, OICCKtor_httpHttpMethod, OICCKtor_httpURLProtocol, OICCKtor_httpURLBuilderCompanion, OICCKtor_httpHttpStatusCodeCompanion, OICCKtor_httpUrlCompanion, OICCKotlinx_serialization_coreSerializersModule, OICCKotlinx_serialization_jsonJsonDefault, OICCKotlinx_serialization_jsonJsonElement, OICCKotlinx_serialization_jsonJsonConfiguration, OICCKtor_client_coreHttpResponseData, OICCKtor_client_coreHttpClientCallCompanion, OICCKtor_ioMemory, OICCKtor_ioChunkBuffer, OICCKtor_ioBuffer, OICCKotlinByteArray, OICCKtor_ioByteReadPacket, OICCKtor_utilsGMTDateCompanion, OICCKtor_utilsWeekDay, OICCKtor_utilsMonth, OICCKtor_httpHttpProtocolVersionCompanion, OICCKotlinx_coroutines_coreCoroutineDispatcher, OICCKtor_client_coreProxyConfig, OICCKtor_utilsAttributeKey<T>, OICCKtor_eventsEventDefinition<T>, OICCKtor_utilsPipelinePhase, OICCKtor_utilsPipeline<TSubject, TContext>, OICCKtor_client_coreHttpReceivePipelinePhases, OICCKotlinUnit, OICCKtor_client_coreHttpRequestPipelinePhases, OICCKtor_client_coreHttpResponsePipelinePhases, OICCKtor_client_coreHttpResponseContainer, OICCKtor_client_coreHttpSendPipelinePhases, OICCKtor_utilsStringValuesBuilderImpl, OICCKtor_httpOutgoingContent, OICCKotlinCancellationException, OICCKtor_httpHttpMethodCompanion, OICCKtor_httpURLProtocolCompanion, OICCKotlinx_serialization_jsonJsonElementCompanion, OICCKotlinx_serialization_coreSerialKind, OICCKotlinNothing, OICCKtor_ioMemoryCompanion, OICCKtor_ioBufferCompanion, OICCKtor_ioChunkBufferCompanion, OICCKotlinByteIterator, OICCKtor_ioInputCompanion, OICCKtor_ioInput, OICCKtor_ioByteReadPacketCompanion, OICCKtor_utilsWeekDayCompanion, OICCKtor_utilsMonthCompanion, OICCKotlinAbstractCoroutineContextElement, OICCKotlinx_coroutines_coreCoroutineDispatcherKey, OICCKtor_httpContentType, OICCKotlinKTypeProjection, OICCKotlinAbstractCoroutineContextKey<B, E>, OICCKtor_httpHeaderValueParam, OICCKtor_httpHeaderValueWithParametersCompanion, OICCKtor_httpHeaderValueWithParameters, OICCKtor_httpContentTypeCompanion, OICCKotlinKVariance, OICCKotlinKTypeProjectionCompanion;

@protocol OICCKotlinComparable, OICCKotlinx_serialization_coreKSerializer, OICCKtor_httpParameters, OICCKtor_httpHeaders, OICCKtor_httpHttpMessage, OICCKotlinCoroutineContext, OICCKotlinx_coroutines_coreCoroutineScope, OICCKtor_ioByteReadChannel, OICCKtor_ioCloseable, OICCKtor_client_coreHttpClientEngine, OICCKtor_client_coreHttpClientEngineCapability, OICCKtor_utilsAttributes, OICCKtor_httpHttpMessageBuilder, OICCKotlinx_coroutines_coreJob, OICCKtor_httpParametersBuilder, OICCKotlinIterator, OICCKotlinx_serialization_coreDeserializationStrategy, OICCKotlinx_serialization_coreSerializationStrategy, OICCKotlinx_serialization_coreSerialFormat, OICCKotlinx_serialization_coreStringFormat, OICCKotlinx_serialization_coreEncoder, OICCKotlinx_serialization_coreSerialDescriptor, OICCKotlinx_serialization_coreDecoder, OICCKotlinSuspendFunction1, OICCKotlinMapEntry, OICCKtor_utilsStringValues, OICCKotlinCoroutineContextElement, OICCKotlinCoroutineContextKey, OICCKtor_client_coreHttpRequest, OICCKtor_ioReadSession, OICCKotlinAppendable, OICCKtor_client_coreHttpClientPlugin, OICCKotlinx_coroutines_coreDisposableHandle, OICCKotlinSuspendFunction2, OICCKtor_utilsStringValuesBuilder, OICCKotlinKClass, OICCKotlinKType, OICCKotlinx_coroutines_coreChildHandle, OICCKotlinx_coroutines_coreChildJob, OICCKotlinSequence, OICCKotlinx_coroutines_coreSelectClause0, OICCKotlinx_serialization_coreSerializersModuleCollector, OICCKotlinx_serialization_jsonJsonNamingStrategy, OICCKotlinx_serialization_coreCompositeEncoder, OICCKotlinAnnotation, OICCKotlinx_serialization_coreCompositeDecoder, OICCKotlinFunction, OICCKtor_ioObjectPool, OICCKotlinContinuation, OICCKotlinContinuationInterceptor, OICCKotlinx_coroutines_coreRunnable, OICCKotlinKDeclarationContainer, OICCKotlinKAnnotatedElement, OICCKotlinKClassifier, OICCKotlinx_coroutines_coreParentJob, OICCKotlinx_coroutines_coreSelectInstance, OICCKotlinx_coroutines_coreSelectClause;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface OICCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface OICCBase (OICCBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface OICCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface OICCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorOICCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface OICCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface OICCByte : OICCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface OICCUByte : OICCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface OICCShort : OICCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface OICCUShort : OICCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface OICCInt : OICCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface OICCUInt : OICCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface OICCLong : OICCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface OICCULong : OICCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface OICCFloat : OICCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface OICCDouble : OICCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface OICCBoolean : OICCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
@interface Endpoints : OICCBase
- (instancetype)initWithTokenEndpoint:(NSString * _Nullable)tokenEndpoint authorizationEndpoint:(NSString * _Nullable)authorizationEndpoint userInfoEndpoint:(NSString * _Nullable)userInfoEndpoint endSessionEndpoint:(NSString * _Nullable)endSessionEndpoint __attribute__((swift_name("init(tokenEndpoint:authorizationEndpoint:userInfoEndpoint:endSessionEndpoint:)"))) __attribute__((objc_designated_initializer));
- (void)baseUrlBaseUrl:(NSString *)baseUrl block:(void (^)(Endpoints *))block __attribute__((swift_name("baseUrl(baseUrl:block:)")));
- (Endpoints *)doCopyTokenEndpoint:(NSString * _Nullable)tokenEndpoint authorizationEndpoint:(NSString * _Nullable)authorizationEndpoint userInfoEndpoint:(NSString * _Nullable)userInfoEndpoint endSessionEndpoint:(NSString * _Nullable)endSessionEndpoint __attribute__((swift_name("doCopy(tokenEndpoint:authorizationEndpoint:userInfoEndpoint:endSessionEndpoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable authorizationEndpoint __attribute__((swift_name("authorizationEndpoint")));
@property NSString * _Nullable endSessionEndpoint __attribute__((swift_name("endSessionEndpoint")));
@property NSString * _Nullable tokenEndpoint __attribute__((swift_name("tokenEndpoint")));
@property NSString * _Nullable userInfoEndpoint __attribute__((swift_name("userInfoEndpoint")));
@end

__attribute__((objc_subclassing_restricted))
@interface OpenIdConnectClient : OICCBase
- (instancetype)initWithConfig:(OpenIdConnectClientConfig *)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHttpClient:(OICCKtor_client_coreHttpClient *)httpClient config:(OpenIdConnectClientConfig *)config __attribute__((swift_name("init(httpClient:config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OpenIdConnectClientCompanion *companion __attribute__((swift_name("companion")));
- (TokenRequest *)createAccessTokenRequestAuthCodeRequest:(AuthCodeRequest *)authCodeRequest code:(NSString *)code configure:(void (^ _Nullable)(OICCKtor_client_coreHttpRequestBuilder *))configure __attribute__((swift_name("createAccessTokenRequest(authCodeRequest:code:configure:)")));
- (AuthCodeRequest *)createAuthorizationCodeRequestConfigure:(void (^ _Nullable)(OICCKtor_httpURLBuilder *))configure __attribute__((swift_name("createAuthorizationCodeRequest(configure:)")));
- (TokenRequest *)createRefreshTokenRequestRefreshToken:(NSString *)refreshToken configure:(void (^ _Nullable)(OICCKtor_client_coreHttpRequestBuilder *))configure __attribute__((swift_name("createRefreshTokenRequest(refreshToken:configure:)")));

/**
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discoverWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("discover(completionHandler:)")));

/**
 * RP-initiated logout.
 * Just performs the GET request for logout, we skip the redirect part for convenience.
 *
 * https://openid.net/specs/openid-connect-rpinitiated-1_0.html
 *
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)endSessionIdToken:(NSString *)idToken configure:(void (^ _Nullable)(OICCKtor_client_coreHttpRequestBuilder *))configure completionHandler:(void (^)(OICCKtor_httpHttpStatusCode * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("endSession(idToken:configure:completionHandler:)")));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.3
 * + code verifier https://datatracker.ietf.org/doc/html/rfc7636#section-4.5
 *
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)exchangeTokenAuthCodeRequest:(AuthCodeRequest *)authCodeRequest code:(NSString *)code configure:(void (^ _Nullable)(OICCKtor_client_coreHttpRequestBuilder *))configure completionHandler:(void (^)(AccessTokenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exchangeToken(authCodeRequest:code:configure:completionHandler:)")));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-6
 *
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTokenRefreshToken:(NSString *)refreshToken configure:(void (^ _Nullable)(OICCKtor_client_coreHttpRequestBuilder *))configure completionHandler:(void (^)(AccessTokenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshToken(refreshToken:configure:completionHandler:)")));
@property (readonly) OpenIdConnectClientConfig *config __attribute__((swift_name("config")));
@property OICCOpenIdConnectConfiguration * _Nullable discoverDocument __attribute__((swift_name("discoverDocument")));
@property (readonly) OICCKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectClient.Companion")))
@interface OpenIdConnectClientCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OpenIdConnectClientCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_client_coreHttpClient *DefaultHttpClient __attribute__((swift_name("DefaultHttpClient")));
@end

__attribute__((objc_subclassing_restricted))
@interface OpenIdConnectClientConfig : OICCBase
- (instancetype)initWithDiscoveryUri:(NSString * _Nullable)discoveryUri endpoints:(Endpoints *)endpoints clientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret scope:(NSString * _Nullable)scope codeChallengeMethod:(CodeChallengeMethod *)codeChallengeMethod redirectUri:(NSString * _Nullable)redirectUri __attribute__((swift_name("init(discoveryUri:endpoints:clientId:clientSecret:scope:codeChallengeMethod:redirectUri:)"))) __attribute__((objc_designated_initializer));
- (void)endpointsBlock:(void (^)(Endpoints *))block __attribute__((swift_name("endpoints(block:)")));

/**
 * Update this client config with discovery document.
 * Will NOT override already set properties in config.
 */
- (void)updateWithDiscoveryConfig:(OICCOpenIdConnectConfiguration *)config __attribute__((swift_name("updateWithDiscovery(config:)")));

/**
 * REQUIRED
 * https://datatracker.ietf.org/doc/html/rfc6749#section-2.2
 */
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property CodeChallengeMethod *codeChallengeMethod __attribute__((swift_name("codeChallengeMethod")));

/**
 * If discoveryUri is set, no further endpoints have to be configured.
 */
@property (readonly) NSString * _Nullable discoveryUri __attribute__((swift_name("discoveryUri")));
@property Endpoints *endpoints __attribute__((swift_name("endpoints")));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-3.1.2
 */
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));

/**
 * OPTIONAL
 * https://datatracker.ietf.org/doc/html/rfc6749#section-3.3
 */
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface OICCKotlinThrowable : OICCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (OICCKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OICCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface OICCKotlinException : OICCKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

@interface OpenIdConnectException : OICCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) OICCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectException.AuthenticationFailure")))
@interface OpenIdConnectExceptionAuthenticationFailure : OpenIdConnectException
- (instancetype)initWithMessage:(NSString *)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (OpenIdConnectExceptionAuthenticationFailure *)doCopyMessage:(NSString *)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("doCopy(message:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OICCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectException.InvalidUrl")))
@interface OpenIdConnectExceptionInvalidUrl : OpenIdConnectException
- (instancetype)initWithUrl:(NSString * _Nullable)url cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(url:cause:)"))) __attribute__((objc_designated_initializer));
- (OpenIdConnectExceptionInvalidUrl *)doCopyUrl:(NSString * _Nullable)url cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("doCopy(url:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OICCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectException.TechnicalFailure")))
@interface OpenIdConnectExceptionTechnicalFailure : OpenIdConnectException
- (instancetype)initWithMessage:(NSString *)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (OpenIdConnectExceptionTechnicalFailure *)doCopyMessage:(NSString *)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("doCopy(message:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OICCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectException.UnsuccessfulTokenRequest")))
@interface OpenIdConnectExceptionUnsuccessfulTokenRequest : OpenIdConnectException
- (instancetype)initWithMessage:(NSString *)message statusCode:(OICCKtor_httpHttpStatusCode *)statusCode body:(NSString * _Nullable)body errorResponse:(OpenIdConnectErrorResponse * _Nullable)errorResponse cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:statusCode:body:errorResponse:cause:)"))) __attribute__((objc_designated_initializer));
- (OpenIdConnectExceptionUnsuccessfulTokenRequest *)doCopyMessage:(NSString *)message statusCode:(OICCKtor_httpHttpStatusCode *)statusCode body:(NSString * _Nullable)body errorResponse:(OpenIdConnectErrorResponse * _Nullable)errorResponse cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("doCopy(message:statusCode:body:errorResponse:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property (readonly) OICCKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) OpenIdConnectErrorResponse * _Nullable errorResponse __attribute__((swift_name("errorResponse")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) OICCKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectException.UnsupportedFormat")))
@interface OpenIdConnectExceptionUnsupportedFormat : OpenIdConnectException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (OpenIdConnectExceptionUnsupportedFormat *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end


/**
 * Implements the OAuth 2.0 Code Authorization Flow.
 * See: https://datatracker.ietf.org/doc/html/rfc6749#section-4.1
 *
 * Implementations have to provide their own method to get the authorization code,
 * as this requires user interaction (e.g. via browser).
 */
@interface AbstractCodeAuthFlow : OICCBase
- (instancetype)initWithClient:(OpenIdConnectClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException, OpenIdConnectException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAccessTokenWithCompletionHandler:(void (^)(AccessTokenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAccessToken(completionHandler:)")));

/**
 * Uses the request URL to open a browser and perform authorization.
 * Should return the Authorization Code.
 *
 * @note This method converts instances of CancellationException, OpenIdConnectException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAuthorizationCodeRequest:(AuthCodeRequest *)request completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAuthorizationCode(request:completionHandler:)")));
@property (readonly) OpenIdConnectClient *client __attribute__((swift_name("client")));
@end


/**
 * Implements the OAuth 2.0 Code Authorization Flow.
 * See: https://datatracker.ietf.org/doc/html/rfc6749#section-4.1
 *
 * Implementations have to provide their own method to get the authorization code,
 * as this requires user interaction (e.g. via browser).
 */
__attribute__((objc_subclassing_restricted))
@interface CodeAuthFlow : AbstractCodeAuthFlow
- (instancetype)initWithClient:(OpenIdConnectClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException, OpenIdConnectException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAuthorizationCodeRequest:(AuthCodeRequest *)request completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAuthorizationCode(request:completionHandler:)")));
@end

__attribute__((unavailable("Kotlin subclass of Objective-C class can't be imported")))
__attribute__((swift_name("PresentationContext")))
@interface OICCPresentationContext : NSObject
@end

__attribute__((objc_subclassing_restricted))
@interface OpenIdConnectDiscover : OICCBase
- (instancetype)initWithHttpClient:(OICCKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(httpClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)downloadConfigurationConfigurationUrl:(OICCKtor_httpUrl *)configurationUrl completionHandler:(void (^)(OICCOpenIdConnectConfiguration * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("downloadConfiguration(configurationUrl:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)downloadConfigurationConfigurationUrl:(NSString *)configurationUrl completionHandler_:(void (^)(OICCOpenIdConnectConfiguration * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("downloadConfiguration(configurationUrl:completionHandler_:)")));
@property (readonly) OICCKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@property (readonly) OICCKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
@interface AuthCodeResult : OICCBase
- (instancetype)initWithCode:(NSString * _Nullable)code state:(NSString * _Nullable)state __attribute__((swift_name("init(code:state:)"))) __attribute__((objc_designated_initializer));
- (AuthCodeResult *)doCopyCode:(NSString * _Nullable)code state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(code:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
@interface PKCE : OICCBase
- (instancetype)initWithCodeChallengeMethod:(CodeChallengeMethod *)codeChallengeMethod codeVerifier:(NSString *)codeVerifier codeChallenge:(NSString *)codeChallenge __attribute__((swift_name("init(codeChallengeMethod:codeVerifier:codeChallenge:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PKCECompanion *companion __attribute__((swift_name("companion")));

/** For authorization **/
@property (readonly) NSString *codeChallenge __attribute__((swift_name("codeChallenge")));

/** For token request **/
@property (readonly) NSString *codeVerifier __attribute__((swift_name("codeVerifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PKCE.Companion")))
@interface PKCECompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PKCECompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
@interface AuthCodeRequest : OICCBase
- (instancetype)initWithUrl:(OICCKtor_httpUrl *)url config:(OpenIdConnectClientConfig *)config pkce:(PKCE *)pkce state:(NSString *)state nonce:(NSString *)nonce __attribute__((swift_name("init(url:config:pkce:state:nonce:)"))) __attribute__((objc_designated_initializer));
- (AuthCodeRequest *)doCopyUrl:(OICCKtor_httpUrl *)url config:(OpenIdConnectClientConfig *)config pkce:(PKCE *)pkce state:(NSString *)state nonce:(NSString *)nonce __attribute__((swift_name("doCopy(url:config:pkce:state:nonce:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OpenIdConnectClientConfig *config __attribute__((swift_name("config")));
@property (readonly) NSString *nonce __attribute__((swift_name("nonce")));
@property (readonly) PKCE *pkce __attribute__((swift_name("pkce")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) OICCKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol OICCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface OICCKotlinEnum<E> : OICCBase <OICCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
@interface CodeChallengeMethod : OICCKotlinEnum<CodeChallengeMethod *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) CodeChallengeMethod *s256 __attribute__((swift_name("s256")));
@property (class, readonly) CodeChallengeMethod *plain __attribute__((swift_name("plain")));
@property (class, readonly) CodeChallengeMethod *off __attribute__((swift_name("off")));
+ (OICCKotlinArray<CodeChallengeMethod *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<CodeChallengeMethod *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString * _Nullable queryString __attribute__((swift_name("queryString")));
@end


/**
 * https://openid.net/specs/openid-connect-core-1_0.html#IDToken
 */
__attribute__((objc_subclassing_restricted))
@interface IdToken : OICCBase
- (instancetype)initWithIss:(NSString * _Nullable)iss sub:(NSString * _Nullable)sub aud:(NSArray<NSString *> * _Nullable)aud exp:(OICCLong * _Nullable)exp iat:(OICCLong * _Nullable)iat auth_time:(OICCLong * _Nullable)auth_time nonce:(NSString * _Nullable)nonce acr:(NSString * _Nullable)acr amr:(NSString * _Nullable)amr azp:(NSString * _Nullable)azp alg:(NSString * _Nullable)alg kid:(NSString * _Nullable)kid at_hash:(NSString * _Nullable)at_hash additionalClaims:(NSDictionary<NSString *, id> *)additionalClaims __attribute__((swift_name("init(iss:sub:aud:exp:iat:auth_time:nonce:acr:amr:azp:alg:kid:at_hash:additionalClaims:)"))) __attribute__((objc_designated_initializer));

/**
 * https://openid.net/specs/openid-connect-core-1_0.html#IDToken
 */
- (IdToken *)doCopyIss:(NSString * _Nullable)iss sub:(NSString * _Nullable)sub aud:(NSArray<NSString *> * _Nullable)aud exp:(OICCLong * _Nullable)exp iat:(OICCLong * _Nullable)iat auth_time:(OICCLong * _Nullable)auth_time nonce:(NSString * _Nullable)nonce acr:(NSString * _Nullable)acr amr:(NSString * _Nullable)amr azp:(NSString * _Nullable)azp alg:(NSString * _Nullable)alg kid:(NSString * _Nullable)kid at_hash:(NSString * _Nullable)at_hash additionalClaims:(NSDictionary<NSString *, id> *)additionalClaims __attribute__((swift_name("doCopy(iss:sub:aud:exp:iat:auth_time:nonce:acr:amr:azp:alg:kid:at_hash:additionalClaims:)")));

/**
 * https://openid.net/specs/openid-connect-core-1_0.html#IDToken
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * https://openid.net/specs/openid-connect-core-1_0.html#IDToken
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * https://openid.net/specs/openid-connect-core-1_0.html#IDToken
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** Optional: Authentication Context Class Reference **/
@property (readonly) NSString * _Nullable acr __attribute__((swift_name("acr")));
@property (readonly) NSDictionary<NSString *, id> *additionalClaims __attribute__((swift_name("additionalClaims")));
@property (readonly) NSString * _Nullable alg __attribute__((swift_name("alg")));

/** Optional: Authentication Methods References**/
@property (readonly) NSString * _Nullable amr __attribute__((swift_name("amr")));

/** Optional: Access Token hash **/
@property (readonly) NSString * _Nullable at_hash __attribute__((swift_name("at_hash")));

/** Required: Audience (must contain client_id) **/
@property (readonly) NSArray<NSString *> * _Nullable aud __attribute__((swift_name("aud")));

/** Optional time of user auth **/
@property (readonly) OICCLong * _Nullable auth_time __attribute__((swift_name("auth_time")));

/** Optiona: Authorized Party **/
@property (readonly) NSString * _Nullable azp __attribute__((swift_name("azp")));

/** Required: Expiration time **/
@property (readonly) OICCLong * _Nullable exp __attribute__((swift_name("exp")));

/** Required: Issued at **/
@property (readonly) OICCLong * _Nullable iat __attribute__((swift_name("iat")));

/** Required: Issuer (must match the discovery document) **/
@property (readonly) NSString * _Nullable iss __attribute__((swift_name("iss")));
@property (readonly) NSString * _Nullable kid __attribute__((swift_name("kid")));

/** Optional, if present, must match request nonce **/
@property (readonly) NSString * _Nullable nonce __attribute__((swift_name("nonce")));

/** Required: Subject identifier **/
@property (readonly) NSString * _Nullable sub __attribute__((swift_name("sub")));
@end

__attribute__((objc_subclassing_restricted))
@interface Jwt : OICCBase
- (instancetype)initWithHeader:(JwtHeader *)header payload:(IdToken *)payload signature:(NSString * _Nullable)signature __attribute__((swift_name("init(header:payload:signature:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) JwtCompanion *companion __attribute__((swift_name("companion")));
- (Jwt *)doCopyHeader:(JwtHeader *)header payload:(IdToken *)payload signature:(NSString * _Nullable)signature __attribute__((swift_name("doCopy(header:payload:signature:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) JwtHeader *header __attribute__((swift_name("header")));
@property (readonly) IdToken *payload __attribute__((swift_name("payload")));
@property (readonly) NSString * _Nullable signature __attribute__((swift_name("signature")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Jwt.Companion")))
@interface JwtCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) JwtCompanion *shared __attribute__((swift_name("shared")));

/**
 * JWTs are either encoded using JWS Compact Serialization (signed, 3 parts) or JWE Compact Serialization (encrypted, 5 parts).
 * We only support JWS Compact Serialization.
 *
 * @note This method converts instances of OpenIdConnectException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (Jwt * _Nullable)parseString:(NSString *)string error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(string:)")));
@end


/**
 * https://datatracker.ietf.org/doc/html/rfc7515#section-4.1
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface JwtHeader : OICCBase
- (instancetype)initWithAlg:(NSString *)alg jku:(NSString * _Nullable)jku jwk:(NSString * _Nullable)jwk kid:(NSString * _Nullable)kid x5u:(NSString * _Nullable)x5u x5c:(NSString * _Nullable)x5c x5t:(NSString * _Nullable)x5t x5tS256:(NSString * _Nullable)x5tS256 typ:(NSString * _Nullable)typ cty:(NSString * _Nullable)cty crit:(NSString * _Nullable)crit __attribute__((swift_name("init(alg:jku:jwk:kid:x5u:x5c:x5t:x5tS256:typ:cty:crit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) JwtHeaderCompanion *companion __attribute__((swift_name("companion")));

/**
 * https://datatracker.ietf.org/doc/html/rfc7515#section-4.1
 */
- (JwtHeader *)doCopyAlg:(NSString *)alg jku:(NSString * _Nullable)jku jwk:(NSString * _Nullable)jwk kid:(NSString * _Nullable)kid x5u:(NSString * _Nullable)x5u x5c:(NSString * _Nullable)x5c x5t:(NSString * _Nullable)x5t x5tS256:(NSString * _Nullable)x5tS256 typ:(NSString * _Nullable)typ cty:(NSString * _Nullable)cty crit:(NSString * _Nullable)crit __attribute__((swift_name("doCopy(alg:jku:jwk:kid:x5u:x5c:x5t:x5tS256:typ:cty:crit:)")));

/**
 * https://datatracker.ietf.org/doc/html/rfc7515#section-4.1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * https://datatracker.ietf.org/doc/html/rfc7515#section-4.1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * https://datatracker.ietf.org/doc/html/rfc7515#section-4.1
 */
- (NSString *)description __attribute__((swift_name("description()")));

/** Required: Algorithm. Possible values: https://datatracker.ietf.org/doc/html/rfc7518#section-3.1 **/
@property (readonly) NSString *alg __attribute__((swift_name("alg")));
@property (readonly) NSString * _Nullable crit __attribute__((swift_name("crit")));
@property (readonly) NSString * _Nullable cty __attribute__((swift_name("cty")));
@property (readonly) NSString * _Nullable jku __attribute__((swift_name("jku")));
@property (readonly) NSString * _Nullable jwk __attribute__((swift_name("jwk")));
@property (readonly) NSString * _Nullable kid __attribute__((swift_name("kid")));
@property (readonly) NSString * _Nullable typ __attribute__((swift_name("typ")));
@property (readonly) NSString * _Nullable x5c __attribute__((swift_name("x5c")));
@property (readonly) NSString * _Nullable x5t __attribute__((swift_name("x5t")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x5t#S256")
*/
@property (readonly) NSString * _Nullable x5tS256 __attribute__((swift_name("x5tS256")));
@property (readonly) NSString * _Nullable x5u __attribute__((swift_name("x5u")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JwtHeader.Companion")))
@interface JwtHeaderCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) JwtHeaderCompanion *shared __attribute__((swift_name("shared")));
- (JwtHeader *)parseString:(NSString *)string __attribute__((swift_name("parse(string:)")));
- (id<OICCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
@interface JwtParser : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jwtParser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) JwtParser *shared __attribute__((swift_name("shared")));

/**
 * Objective-C convenience function
 * @see Jwt.parse
 *
 * @note This method converts instances of OpenIdConnectException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (Jwt * _Nullable)parseFrom:(NSString *)from error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("parse(from:)")));
@end

__attribute__((objc_subclassing_restricted))
@interface TokenRequest : OICCBase
- (instancetype)initWithRequest:(OICCKtor_client_coreHttpStatement *)request formParameters:(id<OICCKtor_httpParameters>)formParameters __attribute__((swift_name("init(request:formParameters:)"))) __attribute__((objc_designated_initializer));
- (TokenRequest *)doCopyRequest:(OICCKtor_client_coreHttpStatement *)request formParameters:(id<OICCKtor_httpParameters>)formParameters __attribute__((swift_name("doCopy(request:formParameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<OICCKtor_httpParameters> formParameters __attribute__((swift_name("formParameters")));
@property (readonly) OICCKtor_client_coreHttpStatement *request __attribute__((swift_name("request")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface AccessTokenResponse : OICCBase
- (instancetype)initWithAccess_token:(NSString *)access_token token_type:(NSString * _Nullable)token_type expires_in:(OICCInt * _Nullable)expires_in refresh_token:(NSString * _Nullable)refresh_token refresh_token_expires_in:(OICCInt * _Nullable)refresh_token_expires_in id_token:(NSString * _Nullable)id_token scope:(NSString * _Nullable)scope received_at:(int64_t)received_at __attribute__((swift_name("init(access_token:token_type:expires_in:refresh_token:refresh_token_expires_in:id_token:scope:received_at:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) AccessTokenResponseCompanion *companion __attribute__((swift_name("companion")));
- (AccessTokenResponse *)doCopyAccess_token:(NSString *)access_token token_type:(NSString * _Nullable)token_type expires_in:(OICCInt * _Nullable)expires_in refresh_token:(NSString * _Nullable)refresh_token refresh_token_expires_in:(OICCInt * _Nullable)refresh_token_expires_in id_token:(NSString * _Nullable)id_token scope:(NSString * _Nullable)scope received_at:(int64_t)received_at __attribute__((swift_name("doCopy(access_token:token_type:expires_in:refresh_token:refresh_token_expires_in:id_token:scope:received_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *access_token __attribute__((swift_name("access_token")));
@property (readonly) OICCInt * _Nullable expires_in __attribute__((swift_name("expires_in")));
@property (readonly) NSString * _Nullable id_token __attribute__((swift_name("id_token")));
@property (readonly) int64_t received_at __attribute__((swift_name("received_at")));
@property (readonly) NSString * _Nullable refresh_token __attribute__((swift_name("refresh_token")));
@property (readonly) OICCInt * _Nullable refresh_token_expires_in __attribute__((swift_name("refresh_token_expires_in")));
@property (readonly) NSString * _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) NSString * _Nullable token_type __attribute__((swift_name("token_type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccessTokenResponse.Companion")))
@interface AccessTokenResponseCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) AccessTokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<OICCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.2.1
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
@interface OpenIdConnectErrorResponse : OICCBase
- (instancetype)initWithError:(OpenIdConnectErrorResponseError *)error error_description:(NSString * _Nullable)error_description error_uri:(NSString * _Nullable)error_uri state:(NSString * _Nullable)state __attribute__((swift_name("init(error:error_description:error_uri:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OpenIdConnectErrorResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.2.1
 */
- (OpenIdConnectErrorResponse *)doCopyError:(OpenIdConnectErrorResponseError *)error error_description:(NSString * _Nullable)error_description error_uri:(NSString * _Nullable)error_uri state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(error:error_description:error_uri:state:)")));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.2.1
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.2.1
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.2.1
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OpenIdConnectErrorResponseError *error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable error_description __attribute__((swift_name("error_description")));
@property (readonly) NSString * _Nullable error_uri __attribute__((swift_name("error_uri")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@end


/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.2.1
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectErrorResponse.Companion")))
@interface OpenIdConnectErrorResponseCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.2.1
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OpenIdConnectErrorResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://datatracker.ietf.org/doc/html/rfc6749#section-4.1.2.1
 */
- (id<OICCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectErrorResponse.Error")))
@interface OpenIdConnectErrorResponseError : OICCKotlinEnum<OpenIdConnectErrorResponseError *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OpenIdConnectErrorResponseErrorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) OpenIdConnectErrorResponseError *badVerificationCode __attribute__((swift_name("badVerificationCode")));
@property (class, readonly) OpenIdConnectErrorResponseError *invalidRequest __attribute__((swift_name("invalidRequest")));
@property (class, readonly) OpenIdConnectErrorResponseError *unauthorizedClient __attribute__((swift_name("unauthorizedClient")));
@property (class, readonly) OpenIdConnectErrorResponseError *accessDenied __attribute__((swift_name("accessDenied")));
@property (class, readonly) OpenIdConnectErrorResponseError *unsupportedResponseType __attribute__((swift_name("unsupportedResponseType")));
@property (class, readonly) OpenIdConnectErrorResponseError *invalidScope __attribute__((swift_name("invalidScope")));
@property (class, readonly) OpenIdConnectErrorResponseError *serverError __attribute__((swift_name("serverError")));
@property (class, readonly) OpenIdConnectErrorResponseError *temporarilyUnavailable __attribute__((swift_name("temporarilyUnavailable")));
+ (OICCKotlinArray<OpenIdConnectErrorResponseError *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<OpenIdConnectErrorResponseError *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectErrorResponse.ErrorCompanion")))
@interface OpenIdConnectErrorResponseErrorCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OpenIdConnectErrorResponseErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<OICCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<OICCKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(OICCKotlinArray<id<OICCKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * Openid-configuration JSON
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectConfiguration")))
@interface OICCOpenIdConnectConfiguration : OICCBase
- (instancetype)initWithAuthorization_endpoint:(NSString * _Nullable)authorization_endpoint token_endpoint:(NSString * _Nullable)token_endpoint device_authorization_endpoint:(NSString * _Nullable)device_authorization_endpoint userinfo_endpoint:(NSString * _Nullable)userinfo_endpoint end_session_endpoint:(NSString * _Nullable)end_session_endpoint introspection_endpoint:(NSString * _Nullable)introspection_endpoint issuer:(NSString * _Nullable)issuer jwks_uri:(NSString * _Nullable)jwks_uri response_types_supported:(NSArray<NSString *> * _Nullable)response_types_supported id_token_signing_alg_values_supported:(NSArray<NSString *> * _Nullable)id_token_signing_alg_values_supported frontchannel_logout_supported:(OICCBoolean * _Nullable)frontchannel_logout_supported scopes_supported:(NSArray<NSString *> * _Nullable)scopes_supported claims_supported:(NSArray<NSString *> * _Nullable)claims_supported subject_types_supported:(NSArray<NSString *> * _Nullable)subject_types_supported token_endpoint_auth_methods_supported:(NSArray<NSString *> * _Nullable)token_endpoint_auth_methods_supported grant_types_supported:(NSArray<NSString *> * _Nullable)grant_types_supported introspection_endpoint_auth_methods_supported:(NSArray<NSString *> * _Nullable)introspection_endpoint_auth_methods_supported __attribute__((swift_name("init(authorization_endpoint:token_endpoint:device_authorization_endpoint:userinfo_endpoint:end_session_endpoint:introspection_endpoint:issuer:jwks_uri:response_types_supported:id_token_signing_alg_values_supported:frontchannel_logout_supported:scopes_supported:claims_supported:subject_types_supported:token_endpoint_auth_methods_supported:grant_types_supported:introspection_endpoint_auth_methods_supported:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCOpenIdConnectConfigurationCompanion *companion __attribute__((swift_name("companion")));

/**
 * Openid-configuration JSON
 */
- (OICCOpenIdConnectConfiguration *)doCopyAuthorization_endpoint:(NSString * _Nullable)authorization_endpoint token_endpoint:(NSString * _Nullable)token_endpoint device_authorization_endpoint:(NSString * _Nullable)device_authorization_endpoint userinfo_endpoint:(NSString * _Nullable)userinfo_endpoint end_session_endpoint:(NSString * _Nullable)end_session_endpoint introspection_endpoint:(NSString * _Nullable)introspection_endpoint issuer:(NSString * _Nullable)issuer jwks_uri:(NSString * _Nullable)jwks_uri response_types_supported:(NSArray<NSString *> * _Nullable)response_types_supported id_token_signing_alg_values_supported:(NSArray<NSString *> * _Nullable)id_token_signing_alg_values_supported frontchannel_logout_supported:(OICCBoolean * _Nullable)frontchannel_logout_supported scopes_supported:(NSArray<NSString *> * _Nullable)scopes_supported claims_supported:(NSArray<NSString *> * _Nullable)claims_supported subject_types_supported:(NSArray<NSString *> * _Nullable)subject_types_supported token_endpoint_auth_methods_supported:(NSArray<NSString *> * _Nullable)token_endpoint_auth_methods_supported grant_types_supported:(NSArray<NSString *> * _Nullable)grant_types_supported introspection_endpoint_auth_methods_supported:(NSArray<NSString *> * _Nullable)introspection_endpoint_auth_methods_supported __attribute__((swift_name("doCopy(authorization_endpoint:token_endpoint:device_authorization_endpoint:userinfo_endpoint:end_session_endpoint:introspection_endpoint:issuer:jwks_uri:response_types_supported:id_token_signing_alg_values_supported:frontchannel_logout_supported:scopes_supported:claims_supported:subject_types_supported:token_endpoint_auth_methods_supported:grant_types_supported:introspection_endpoint_auth_methods_supported:)")));

/**
 * Openid-configuration JSON
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Openid-configuration JSON
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Openid-configuration JSON
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable authorization_endpoint __attribute__((swift_name("authorization_endpoint")));
@property (readonly) NSArray<NSString *> * _Nullable claims_supported __attribute__((swift_name("claims_supported")));
@property (readonly) NSString * _Nullable device_authorization_endpoint __attribute__((swift_name("device_authorization_endpoint")));
@property (readonly) NSString * _Nullable end_session_endpoint __attribute__((swift_name("end_session_endpoint")));
@property (readonly) OICCBoolean * _Nullable frontchannel_logout_supported __attribute__((swift_name("frontchannel_logout_supported")));
@property (readonly) NSArray<NSString *> * _Nullable grant_types_supported __attribute__((swift_name("grant_types_supported")));
@property (readonly) NSArray<NSString *> * _Nullable id_token_signing_alg_values_supported __attribute__((swift_name("id_token_signing_alg_values_supported")));
@property (readonly) NSString * _Nullable introspection_endpoint __attribute__((swift_name("introspection_endpoint")));
@property (readonly) NSArray<NSString *> * _Nullable introspection_endpoint_auth_methods_supported __attribute__((swift_name("introspection_endpoint_auth_methods_supported")));
@property (readonly) NSString * _Nullable issuer __attribute__((swift_name("issuer")));
@property (readonly) NSString * _Nullable jwks_uri __attribute__((swift_name("jwks_uri")));
@property (readonly) NSArray<NSString *> * _Nullable response_types_supported __attribute__((swift_name("response_types_supported")));
@property (readonly) NSArray<NSString *> * _Nullable scopes_supported __attribute__((swift_name("scopes_supported")));
@property (readonly) NSArray<NSString *> * _Nullable subject_types_supported __attribute__((swift_name("subject_types_supported")));
@property (readonly) NSString * _Nullable token_endpoint __attribute__((swift_name("token_endpoint")));
@property (readonly) NSArray<NSString *> * _Nullable token_endpoint_auth_methods_supported __attribute__((swift_name("token_endpoint_auth_methods_supported")));
@property (readonly) NSString * _Nullable userinfo_endpoint __attribute__((swift_name("userinfo_endpoint")));
@end


/**
 * Openid-configuration JSON
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectConfiguration.Companion")))
@interface OICCOpenIdConnectConfigurationCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Openid-configuration JSON
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCOpenIdConnectConfigurationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Openid-configuration JSON
 */
- (id<OICCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol OICCKtor_httpHttpMessage
@required
@property (readonly) id<OICCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol OICCKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<OICCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface OICCKtor_client_coreHttpResponse : OICCBase <OICCKtor_httpHttpMessage, OICCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OICCKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<OICCKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) OICCKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) OICCKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) OICCKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) OICCKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

@interface OICCKtor_client_coreHttpResponse (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)forceUnwrapBodyJson:(OICCKotlinx_serialization_jsonJson *)json completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("forceUnwrapBody(json:completionHandler:)")));
@end

@interface OpenIdConnectClient (Extensions)

/**
 * Objective-C convenience function
 * @see OpenIDConnectClient.createAccessTokenRequest
 *
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (TokenRequest * _Nullable)createAccessTokenRequestAuthCodeRequest:(AuthCodeRequest *)authCodeRequest code:(NSString *)code error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("createAccessTokenRequest(authCodeRequest:code:)")));

/**
 * Objective-C convenience function
 * @see OpenIdConnectClient.createRefreshTokenRequest
 *
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (TokenRequest * _Nullable)createRefreshTokenRequestRefreshToken:(NSString *)refreshToken error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("createRefreshTokenRequest(refreshToken:)")));

/**
 * Objective-C convenience function
 * @see OpenIdConnectClient.endSession
 *
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)endSessionIdToken:(NSString *)idToken completionHandler:(void (^)(OICCKtor_httpHttpStatusCode * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("endSession(idToken:completionHandler:)")));

/**
 * Objective-C convenience function
 * @see OpenIdConnectClient.exchangeToken
 *
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)exchangeTokenAuthCodeRequest:(AuthCodeRequest *)authCodeRequest code:(NSString *)code completionHandler:(void (^)(AccessTokenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exchangeToken(authCodeRequest:code:completionHandler:)")));

/**
 * Objective-C convenience function
 * @see OpenIdConnectClient.refreshToken
 *
 * @note This method converts instances of OpenIdConnectException, CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTokenRefreshToken:(NSString *)refreshToken completionHandler:(void (^)(AccessTokenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshToken(refreshToken:completionHandler:)")));
@end

@interface OpenIdConnectClientConfig (Extensions)
- (void)validate __attribute__((swift_name("validate()")));
@end

@interface AuthCodeRequest (Extensions)
- (BOOL)validateStateState:(NSString *)state __attribute__((swift_name("validateState(state:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JwtKt")))
@interface OICCJwtKt : OICCBase
+ (Jwt *)parseJwt:(NSString *)receiver __attribute__((swift_name("parseJwt(_:)")));
+ (IdToken *)toOpenIdConnectToken:(id)receiver __attribute__((swift_name("toOpenIdConnectToken(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenIdConnectClientKt")))
@interface OICCOpenIdConnectClientKt : OICCBase
+ (OpenIdConnectClient *)OpenIdConnectClientDiscoveryUri:(NSString * _Nullable)discoveryUri block:(void (^)(OpenIdConnectClientConfig *))block __attribute__((swift_name("OpenIdConnectClient(discoveryUri:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunCatchingWrapExceptionKt")))
@interface OICCRunCatchingWrapExceptionKt : OICCBase
+ (id _Nullable)wrapExceptionsBlock:(id _Nullable (^)(void))block __attribute__((swift_name("wrapExceptions(block:)")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol OICCKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface OICCKtor_client_coreHttpClient : OICCBase <OICCKotlinx_coroutines_coreCoroutineScope, OICCKtor_ioCloseable>
- (instancetype)initWithEngine:(id<OICCKtor_client_coreHttpClientEngine>)engine userConfig:(OICCKtor_client_coreHttpClientConfig<OICCKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (OICCKtor_client_coreHttpClient *)configBlock:(void (^)(OICCKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<OICCKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<OICCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<OICCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<OICCKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) OICCKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) OICCKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) OICCKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) OICCKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) OICCKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) OICCKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface OICCKotlinRuntimeException : OICCKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface OICCKotlinIllegalStateException : OICCKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface OICCKotlinCancellationException : OICCKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol OICCKtor_httpHttpMessageBuilder
@required
@property (readonly) OICCKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface OICCKtor_client_coreHttpRequestBuilder : OICCBase <OICCKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) OICCKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (OICCKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<OICCKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<OICCKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<OICCKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (OICCKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(OICCKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (OICCKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(OICCKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(OICCKtor_httpURLBuilder *, OICCKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<OICCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property OICCKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<OICCKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) OICCKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property OICCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) OICCKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface OICCKtor_httpURLBuilder : OICCBase
- (instancetype)initWithProtocol:(OICCKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<OICCKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (OICCKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<OICCKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<OICCKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property OICCKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface OICCKtor_httpHttpStatusCode : OICCBase <OICCKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(OICCKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (OICCKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (OICCKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface OICCKotlinArray<T> : OICCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(OICCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<OICCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface OICCKtor_httpUrl : OICCBase
@property (class, readonly, getter=companion) OICCKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<OICCKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) OICCKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol OICCKotlinx_serialization_coreSerialFormat
@required
@property (readonly) OICCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol OICCKotlinx_serialization_coreStringFormat <OICCKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<OICCKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<OICCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface OICCKotlinx_serialization_jsonJson : OICCBase <OICCKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) OICCKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<OICCKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(OICCKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<OICCKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (OICCKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<OICCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<OICCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (OICCKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) OICCKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) OICCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface OICCKotlinEnumCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol OICCKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<OICCKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<OICCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol OICCKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<OICCKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<OICCKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol OICCKotlinx_serialization_coreKSerializer <OICCKotlinx_serialization_coreSerializationStrategy, OICCKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpStatement")))
@interface OICCKtor_client_coreHttpStatement : OICCBase
- (instancetype)initWithBuilder:(OICCKtor_client_coreHttpRequestBuilder *)builder client:(OICCKtor_client_coreHttpClient *)client __attribute__((swift_name("init(builder:client:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("body(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyBlock:(id<OICCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("body(block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(OICCKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBlock:(id<OICCKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(block:completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol OICCKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<OICCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol OICCKtor_httpParameters <OICCKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol OICCKtor_httpHeaders <OICCKtor_utilsStringValues>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol OICCKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<OICCKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<OICCKotlinCoroutineContextElement> _Nullable)getKey:(id<OICCKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<OICCKotlinCoroutineContext>)minusKeyKey:(id<OICCKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<OICCKotlinCoroutineContext>)plusContext:(id<OICCKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface OICCKtor_client_coreHttpClientCall : OICCBase <OICCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(OICCKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(OICCKtor_client_coreHttpClient *)client requestData:(OICCKtor_client_coreHttpRequestData *)requestData responseData:(OICCKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(OICCKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(OICCKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<OICCKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<OICCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) OICCKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<OICCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<OICCKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property OICCKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol OICCKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause:(OICCKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(OICCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(OICCKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(OICCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(OICCKtor_ioChunkBuffer *)dst completionHandler:(void (^)(OICCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(OICCKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(OICCKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(OICCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(OICCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(OICCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(OICCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(OICCByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(OICCDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(OICCFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(OICCKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(OICCKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(OICCInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(OICCLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(OICCKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(OICCKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<OICCKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(OICCShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<OICCKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<OICCKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(OICCBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) OICCKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface OICCKtor_utilsGMTDate : OICCBase <OICCKotlinComparable>
@property (class, readonly, getter=companion) OICCKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(OICCKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (OICCKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(OICCKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(OICCKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) OICCKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) OICCKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface OICCKtor_httpHttpProtocolVersion : OICCBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (OICCKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol OICCKtor_client_coreHttpClientEngine <OICCKotlinx_coroutines_coreCoroutineScope, OICCKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(OICCKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(OICCKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(OICCKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) OICCKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) OICCKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<OICCKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface OICCKtor_client_coreHttpClientEngineConfig : OICCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property OICCKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface OICCKtor_client_coreHttpClientConfig<T> : OICCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (OICCKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(OICCKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<OICCKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(OICCKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(OICCKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol OICCKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol OICCKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(OICCKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(OICCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(OICCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(OICCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(OICCKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(OICCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(OICCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(OICCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<OICCKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface OICCKtor_eventsEvents : OICCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(OICCKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<OICCKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(OICCKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(OICCKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface OICCKtor_utilsPipeline<TSubject, TContext> : OICCBase
- (instancetype)initWithPhases:(OICCKotlinArray<OICCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(OICCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<OICCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(OICCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(OICCKtor_utilsPipelinePhase *)reference phase:(OICCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(OICCKtor_utilsPipelinePhase *)reference phase:(OICCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(OICCKtor_utilsPipelinePhase *)phase block:(id<OICCKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<OICCKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(OICCKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(OICCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(OICCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(OICCKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<OICCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<OICCKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface OICCKtor_client_coreHttpReceivePipeline : OICCKtor_utilsPipeline<OICCKtor_client_coreHttpResponse *, OICCKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(OICCKotlinArray<OICCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(OICCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<OICCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface OICCKtor_client_coreHttpRequestPipeline : OICCKtor_utilsPipeline<id, OICCKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(OICCKotlinArray<OICCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(OICCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<OICCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface OICCKtor_client_coreHttpResponsePipeline : OICCKtor_utilsPipeline<OICCKtor_client_coreHttpResponseContainer *, OICCKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(OICCKotlinArray<OICCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(OICCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<OICCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface OICCKtor_client_coreHttpSendPipeline : OICCKtor_utilsPipeline<id, OICCKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(OICCKotlinArray<OICCKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(OICCKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<OICCKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol OICCKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<OICCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<OICCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<OICCKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<OICCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface OICCKtor_utilsStringValuesBuilderImpl : OICCBase <OICCKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<OICCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<OICCKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<OICCKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<OICCKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) OICCMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface OICCKtor_httpHeadersBuilder : OICCKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<OICCKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface OICCKtor_client_coreHttpRequestBuilderCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface OICCKtor_client_coreHttpRequestData : OICCBase
- (instancetype)initWithUrl:(OICCKtor_httpUrl *)url method:(OICCKtor_httpHttpMethod *)method headers:(id<OICCKtor_httpHeaders>)headers body:(OICCKtor_httpOutgoingContent *)body executionContext:(id<OICCKotlinx_coroutines_coreJob>)executionContext attributes:(id<OICCKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<OICCKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<OICCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) OICCKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<OICCKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<OICCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) OICCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) OICCKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface OICCKtor_utilsTypeInfo : OICCBase
- (instancetype)initWithType:(id<OICCKotlinKClass>)type reifiedType:(id<OICCKotlinKType>)reifiedType kotlinType:(id<OICCKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (OICCKtor_utilsTypeInfo *)doCopyType:(id<OICCKotlinKClass>)type reifiedType:(id<OICCKotlinKType>)reifiedType kotlinType:(id<OICCKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<OICCKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<OICCKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<OICCKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol OICCKotlinCoroutineContextElement <OICCKotlinCoroutineContext>
@required
@property (readonly) id<OICCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol OICCKotlinx_coroutines_coreJob <OICCKotlinCoroutineContextElement>
@required
- (id<OICCKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<OICCKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(OICCKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (OICCKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<OICCKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(OICCKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<OICCKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(OICCKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<OICCKotlinx_coroutines_coreJob>)plusOther:(id<OICCKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<OICCKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<OICCKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<OICCKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface OICCKtor_httpHttpMethod : OICCBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (OICCKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface OICCKtor_httpURLProtocol : OICCBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (OICCKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface OICCKtor_httpURLBuilderCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol OICCKtor_httpParametersBuilder <OICCKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface OICCKtor_httpHttpStatusCodeCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (OICCKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) OICCKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) OICCKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) OICCKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) OICCKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) OICCKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) OICCKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) OICCKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) OICCKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) OICCKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) OICCKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) OICCKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) OICCKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) OICCKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) OICCKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) OICCKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) OICCKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) OICCKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) OICCKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) OICCKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) OICCKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) OICCKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) OICCKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) OICCKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) OICCKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) OICCKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) OICCKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) OICCKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) OICCKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) OICCKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) OICCKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) OICCKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) OICCKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) OICCKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) OICCKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) OICCKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) OICCKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) OICCKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) OICCKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) OICCKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) OICCKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) OICCKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) OICCKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) OICCKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) OICCKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) OICCKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) OICCKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) OICCKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) OICCKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) OICCKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) OICCKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) OICCKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) OICCKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) OICCKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<OICCKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol OICCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface OICCKtor_httpUrlCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface OICCKotlinx_serialization_coreSerializersModule : OICCBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<OICCKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<OICCKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<OICCKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<OICCKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<OICCKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<OICCKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<OICCKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<OICCKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface OICCKotlinx_serialization_jsonJsonDefault : OICCKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface OICCKotlinx_serialization_jsonJsonElement : OICCBase
@property (class, readonly, getter=companion) OICCKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface OICCKotlinx_serialization_jsonJsonConfiguration : OICCBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<OICCKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol OICCKotlinx_serialization_coreEncoder
@required
- (id<OICCKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<OICCKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<OICCKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<OICCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<OICCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) OICCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol OICCKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<OICCKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<OICCKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<OICCKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) OICCKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol OICCKotlinx_serialization_coreDecoder
@required
- (id<OICCKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<OICCKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (OICCKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<OICCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<OICCKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) OICCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol OICCKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol OICCKotlinSuspendFunction1 <OICCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol OICCKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol OICCKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface OICCKtor_client_coreHttpResponseData : OICCBase
- (instancetype)initWithStatusCode:(OICCKtor_httpHttpStatusCode *)statusCode requestTime:(OICCKtor_utilsGMTDate *)requestTime headers:(id<OICCKtor_httpHeaders>)headers version:(OICCKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<OICCKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<OICCKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<OICCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) OICCKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) OICCKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) OICCKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) OICCKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface OICCKtor_client_coreHttpClientCallCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol OICCKtor_client_coreHttpRequest <OICCKtor_httpHttpMessage, OICCKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<OICCKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) OICCKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) OICCKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) OICCKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) OICCKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface OICCKtor_ioMemory : OICCBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(OICCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(OICCKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (OICCKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (OICCKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface OICCKtor_ioBuffer : OICCBase
- (instancetype)initWithMemory:(OICCKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) OICCKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (OICCKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(OICCKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) OICCKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface OICCKtor_ioChunkBuffer : OICCKtor_ioBuffer
- (instancetype)initWithMemory:(OICCKtor_ioMemory *)memory origin:(OICCKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<OICCKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
- (instancetype)initWithMemory:(OICCKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (OICCKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (OICCKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<OICCKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) OICCKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) OICCKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface OICCKotlinByteArray : OICCBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(OICCByte *(^)(OICCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (OICCKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface OICCKtor_ioInput : OICCBase <OICCKtor_ioCloseable>
- (instancetype)initWithHead:(OICCKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<OICCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("\n    We're migrating to the new kotlinx-io library.\n    This declaration is deprecated and will be removed in Ktor 4.0.0\n    If you have any problems with migration, please contact us in \n    https://youtrack.jetbrains.com/issue/KTOR-6030/Migrate-to-new-kotlinx.io-library\n    ")));
@property (class, readonly, getter=companion) OICCKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (OICCKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(OICCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int32_t)peekToBuffer:(OICCKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int64_t)peekToDestination:(OICCKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<OICCKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<OICCKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<OICCKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface OICCKtor_ioByteReadPacket : OICCKtor_ioInput
- (instancetype)initWithHead:(OICCKtor_ioChunkBuffer *)head pool:(id<OICCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(OICCKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<OICCKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (OICCKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (OICCKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(OICCKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol OICCKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (OICCKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol OICCKotlinAppendable
@required
- (id<OICCKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<OICCKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<OICCKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface OICCKtor_utilsGMTDateCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface OICCKtor_utilsWeekDay : OICCKotlinEnum<OICCKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) OICCKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) OICCKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) OICCKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) OICCKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) OICCKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) OICCKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) OICCKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (OICCKotlinArray<OICCKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface OICCKtor_utilsMonth : OICCKotlinEnum<OICCKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) OICCKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) OICCKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) OICCKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) OICCKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) OICCKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) OICCKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) OICCKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) OICCKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) OICCKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) OICCKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) OICCKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) OICCKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (OICCKotlinArray<OICCKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface OICCKtor_httpHttpProtocolVersionCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (OICCKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (OICCKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) OICCKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) OICCKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) OICCKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) OICCKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) OICCKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface OICCKotlinAbstractCoroutineContextElement : OICCBase <OICCKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<OICCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<OICCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol OICCKotlinContinuationInterceptor <OICCKotlinCoroutineContextElement>
@required
- (id<OICCKotlinContinuation>)interceptContinuationContinuation:(id<OICCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<OICCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface OICCKotlinx_coroutines_coreCoroutineDispatcher : OICCKotlinAbstractCoroutineContextElement <OICCKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<OICCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<OICCKotlinCoroutineContext>)context block:(id<OICCKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<OICCKotlinCoroutineContext>)context block:(id<OICCKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<OICCKotlinContinuation>)interceptContinuationContinuation:(id<OICCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<OICCKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (OICCKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (OICCKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(OICCKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<OICCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface OICCKtor_client_coreProxyConfig : OICCBase
- (instancetype)initWithUrl:(OICCKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OICCKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol OICCKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(OICCKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) OICCKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface OICCKtor_utilsAttributeKey<T> : OICCBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface OICCKtor_eventsEventDefinition<T> : OICCBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol OICCKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface OICCKtor_utilsPipelinePhase : OICCBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol OICCKotlinSuspendFunction2 <OICCKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface OICCKtor_client_coreHttpReceivePipelinePhases : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) OICCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) OICCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface OICCKotlinUnit : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface OICCKtor_client_coreHttpRequestPipelinePhases : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) OICCKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) OICCKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) OICCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) OICCKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface OICCKtor_client_coreHttpResponsePipelinePhases : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) OICCKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) OICCKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) OICCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) OICCKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface OICCKtor_client_coreHttpResponseContainer : OICCBase
- (instancetype)initWithExpectedType:(OICCKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (OICCKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(OICCKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) OICCKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface OICCKtor_client_coreHttpSendPipelinePhases : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) OICCKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) OICCKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) OICCKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) OICCKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface OICCKtor_httpOutgoingContent : OICCBase
- (id _Nullable)getPropertyKey:(OICCKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(OICCKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<OICCKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) OICCLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) OICCKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<OICCKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) OICCKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol OICCKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol OICCKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol OICCKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol OICCKotlinKClass <OICCKotlinKDeclarationContainer, OICCKotlinKAnnotatedElement, OICCKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol OICCKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<OICCKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<OICCKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol OICCKotlinx_coroutines_coreChildHandle <OICCKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(OICCKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<OICCKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol OICCKotlinx_coroutines_coreChildJob <OICCKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<OICCKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol OICCKotlinSequence
@required
- (id<OICCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol OICCKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) OICCKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<OICCKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(OICCKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<OICCKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol OICCKotlinx_coroutines_coreSelectClause0 <OICCKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface OICCKtor_httpHttpMethodCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (OICCKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<OICCKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) OICCKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) OICCKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) OICCKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) OICCKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) OICCKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) OICCKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) OICCKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface OICCKtor_httpURLProtocolCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (OICCKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) OICCKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) OICCKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) OICCKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) OICCKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) OICCKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, OICCKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol OICCKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<OICCKotlinKClass>)kClass provider:(id<OICCKotlinx_serialization_coreKSerializer> (^)(NSArray<id<OICCKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<OICCKotlinKClass>)kClass serializer:(id<OICCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<OICCKotlinKClass>)baseClass actualClass:(id<OICCKotlinKClass>)actualClass actualSerializer:(id<OICCKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<OICCKotlinKClass>)baseClass defaultDeserializerProvider:(id<OICCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<OICCKotlinKClass>)baseClass defaultDeserializerProvider:(id<OICCKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<OICCKotlinKClass>)baseClass defaultSerializerProvider:(id<OICCKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface OICCKotlinx_serialization_jsonJsonElementCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<OICCKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol OICCKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol OICCKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<OICCKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<OICCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<OICCKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) OICCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol OICCKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface OICCKotlinx_serialization_coreSerialKind : OICCBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol OICCKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<OICCKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<OICCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<OICCKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<OICCKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) OICCKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface OICCKotlinNothing : OICCBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface OICCKtor_ioMemoryCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface OICCKtor_ioBufferCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol OICCKtor_ioObjectPool <OICCKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface OICCKtor_ioChunkBufferCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<OICCKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<OICCKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface OICCKotlinByteIterator : OICCBase <OICCKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (OICCByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface OICCKtor_ioInputCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface OICCKtor_ioByteReadPacketCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) OICCKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface OICCKtor_utilsWeekDayCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (OICCKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (OICCKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface OICCKtor_utilsMonthCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (OICCKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (OICCKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol OICCKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<OICCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface OICCKotlinAbstractCoroutineContextKey<B, E> : OICCBase <OICCKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<OICCKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<OICCKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface OICCKotlinx_coroutines_coreCoroutineDispatcherKey : OICCKotlinAbstractCoroutineContextKey<id<OICCKotlinContinuationInterceptor>, OICCKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<OICCKotlinCoroutineContextKey>)baseKey safeCast:(id<OICCKotlinCoroutineContextElement> _Nullable (^)(id<OICCKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol OICCKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface OICCKtor_httpHeaderValueWithParameters : OICCBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<OICCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<OICCKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface OICCKtor_httpContentType : OICCKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<OICCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<OICCKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) OICCKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(OICCKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (OICCKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (OICCKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface OICCKotlinKTypeProjection : OICCBase
- (instancetype)initWithVariance:(OICCKotlinKVariance * _Nullable)variance type:(id<OICCKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) OICCKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (OICCKotlinKTypeProjection *)doCopyVariance:(OICCKotlinKVariance * _Nullable)variance type:(id<OICCKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<OICCKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) OICCKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol OICCKotlinx_coroutines_coreParentJob <OICCKotlinx_coroutines_coreJob>
@required
- (OICCKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol OICCKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<OICCKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<OICCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface OICCKtor_httpHeaderValueParam : OICCBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (OICCKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface OICCKtor_httpHeaderValueWithParametersCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<OICCKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface OICCKtor_httpContentTypeCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (OICCKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) OICCKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface OICCKotlinKVariance : OICCKotlinEnum<OICCKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) OICCKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) OICCKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) OICCKotlinKVariance *out __attribute__((swift_name("out")));
+ (OICCKotlinArray<OICCKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<OICCKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface OICCKotlinKTypeProjectionCompanion : OICCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OICCKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (OICCKotlinKTypeProjection *)contravariantType:(id<OICCKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (OICCKotlinKTypeProjection *)covariantType:(id<OICCKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (OICCKotlinKTypeProjection *)invariantType:(id<OICCKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) OICCKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
