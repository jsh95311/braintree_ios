#import <Foundation/Foundation.h>
#import "BTJSON.h"

NS_ASSUME_NONNULL_BEGIN

@interface BTThreeDSecureInfo : NSObject

/**
 @brief Create a `BTThreeDSecureInfo` object from JSON.
 */
- (instancetype)initWithJSON:(BTJSON *)json;

/**
 @brief If the 3D Secure liability shift has occurred
 */
@property (nonatomic, readonly, assign) BOOL liabilityShifted;

/**
 @brief If the 3D Secure liability shift is possible
 */
@property (nonatomic, readonly, assign) BOOL liabilityShiftPossible;

@end

NS_ASSUME_NONNULL_END
