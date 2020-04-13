//
//  TFAlerView_TimeTools.h
//  TFAlerView
//
//  Created by snackstops on 2020/4/12.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TFAlerView_TimeTools : NSObject

+ (void)DismissTime:(NSString *)DismissTime WithSuccess:(void(^)(id Success))Success WithError:(void(^)(id Error))Error;

@end

NS_ASSUME_NONNULL_END
