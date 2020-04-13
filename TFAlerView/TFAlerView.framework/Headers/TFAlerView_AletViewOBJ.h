//
//  TFAlerView_AletViewOBJ.h
//  TFAlerView
//
//  Created by snackstops on 2020/4/4.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, VerificationType) {
    VerificationTypeNomal = 0,
    VerificationTypewithinJump = 1,
    VerificationTypeExternalJump = 2,
};


@protocol TFAlerView_AletViewOBJDelegate <NSObject>
@optional
- (void)VerificationType:(VerificationType)Type WithOBJ:(NSString *)OBJ;
@end



@interface TFAlerView_AletViewOBJ : NSObject
@property (nonatomic, weak) id <TFAlerView_AletViewOBJDelegate> delegate;

//初始化设置弹窗View
+(instancetype)sheradAletViewOBJ;

//- (void)sn_getAletViewOBJWithVerificationType:(void(^)(VerificationType Type))Type;

- (void)Initialization;
@end

NS_ASSUME_NONNULL_END
