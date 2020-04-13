//
//  TFAlerView_Tools.h
//  TFAlerView
//
//  Created by snackstops on 2020/4/6.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TFAlerView_Tools : NSObject
//初始化设置弹窗View
+(instancetype)sheradTFAlerViewTools;
-(NSString *)GetuserDefaults;
-(void)SaveuserDefaultsWithTYPE:(NSString *)TYPE;
-(NSMutableDictionary *)getTFAlertypes;
@end

NS_ASSUME_NONNULL_END
