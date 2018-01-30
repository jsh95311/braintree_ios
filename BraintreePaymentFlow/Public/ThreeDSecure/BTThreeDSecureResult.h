#import <Foundation/Foundation.h>
#if __has_include("BraintreeCore.h")
#import "BraintreeCore.h"
#else
#import <BraintreeCore/BraintreeCore.h>
#endif
#if __has_include("BraintreeCard.h")
#import "BTCardNonce.h"
#else
#import <BraintreeCard/BTCardNonce.h>
#endif
#import "BTPaymentFlowResult.h"

/**
 @brief The result of a 3D Secure payment flow
 */
@interface BTThreeDSecureResult : BTPaymentFlowResult

/**
 @brief True if the 3D Secure flow was successful
 */
@property (nonatomic, assign) BOOL success;

/**
 @brief The `BTCardNonce` resulting from the 3D Secure flow
 */
@property (nonatomic, strong) BTCardNonce *tokenizedCard;

/**
 @brief The error message when the 3D Secure flow is unsuccessful
 */
@property (nonatomic, copy) NSString *errorMessage;

/**
 @brief Initialize a BTThreeDSecureResult
 
 @param JSON BTJSON used to initialize the BTThreeDSecureResult
 */
- (instancetype)initWithJSON:(BTJSON *)JSON;

@end
