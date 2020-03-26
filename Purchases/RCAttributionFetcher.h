//
//  RCAttributionFetcher.h
//  Purchases
//
//  Created by RevenueCat.
//  Copyright © 2019 RevenueCat. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RCAttributionFetcher : NSObject
- (nullable NSString *)identifierForVendor;
@end

NS_ASSUME_NONNULL_END
