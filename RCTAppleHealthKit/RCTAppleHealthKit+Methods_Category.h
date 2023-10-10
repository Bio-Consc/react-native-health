//
//  RCTAppleHealthKit+Methods_Category.h
//  RCTAppleHealthKit
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Category)

- (void)sleep_getSleepSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)category_registerObserver:(NSString *)type
                          bridge:(RCTBridge *)bridge
                    hasListeners:(bool)hasListeners;

@end
