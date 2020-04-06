//
//  TFAlerView_BaseToastView.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/3/31.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TFAlerView_Config.h"
#import "NSString+TFAlerView_Toast.h"
#import "UIImage+TFAlerView_Toast.h"

NS_ASSUME_NONNULL_BEGIN

@interface TFAlerView_BaseToastView : UIView

//Toast点击回调
typedef void(^handler)(void);

//背景颜色
@property (strong, nonatomic) UIColor* toastBackgroundColor;
//Toast标题文字颜色
@property (strong, nonatomic) UIColor* titleTextColor;
//Toast内容文字颜色
@property (strong, nonatomic) UIColor* messageTextColor;

//Toast标题文字字体
@property (strong, nonatomic) UIFont* titleFont;
//Toast文字字体
@property (strong, nonatomic) UIFont* messageFont;

//Toast View圆角
@property(assign,nonatomic)CGFloat toastCornerRadius;
//Toast View透明度
@property(assign,nonatomic)CGFloat toastAlpha;

//Toast显示时长
@property(assign,nonatomic)NSTimeInterval duration;
//Toast消失动画是否启用
@property(assign,nonatomic)BOOL dismissToastAnimated;

//Toast显示位置
@property (assign, nonatomic) TFToastPosition toastPosition;
//Toast显示类型
@property (assign, nonatomic) TFToastType toastType;



/**
 创建一个Toast
 
 @param title 标题
 @param message 消息内容
 @param iconImage 消息icon
 @return Toast
 */
- (instancetype)initToastWithTitle:(NSString *)title message:(NSString *)message iconImage:(UIImage*)iconImage;


/**
 显示一个Toast
 */
- (void)show;

/**
 显示一个Toast
 
 @param handler Toast点击回调
 */
- (void)show:(handler)handler;


@end

NS_ASSUME_NONNULL_END
