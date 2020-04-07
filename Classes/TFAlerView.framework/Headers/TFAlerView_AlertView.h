//
//  TFAlerView_AlertView.h
//  TFAlerView
//
//  Created by snackstops on 2020/4/1.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define kScreenWidth    [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight   [[UIScreen mainScreen] bounds].size.height

typedef NS_ENUM(NSInteger, OpenType) {
    OpenTypeNormal       = 0,
    OpenTypeJUMG         = 1,
};

typedef NS_ENUM(NSInteger, Position) {
    PositionLeft = 0,
    PositionRight = 1,
};

typedef NS_ENUM(NSInteger, TFAlerViewState) {
    TFAlerViewStateNormal       = 0,
    TFAlerViewStateTips         = 1,
    TFAlerViewStateMaskView     = 2,
};

typedef NS_ENUM(NSInteger, MaskViewTYPS) {
    MaskViewNormal       = 0,
    MaskViewBtm         = 1,
};


@protocol TFAlerView_AlertViewDelegate <NSObject>
@optional
- (void)NOWCLOSE;
@end


#define kWidthHeight  30

@interface TFAlerView_AlertView : UIView
@property (nonatomic, weak) id <TFAlerView_AlertViewDelegate> delegate;
/** 点击倒计时图标回调 */
//@property (nonatomic, copy) NSString * (^tapBlock)(void);
@property (nonatomic, assign) CGFloat   topMargin;  //距屏幕顶部留白
@property (nonatomic, assign) CGFloat   btomMargin; //距屏幕底部留白
@property (nonatomic, assign) CGFloat   stayDuration;   //tip显示时间，默认为3s，<=0则不自动隐藏

@property (nonatomic, strong) NSString *msg;

@property (nonatomic, strong) UIImage *SuspensionIMG;   //悬浮窗图片
@property (nonatomic, strong) UIImageView   * imgV;//悬浮窗
@property (nonatomic) BOOL isAniamtion;   //是否显示动画

@property (nonatomic, assign) TFAlerViewState  tfAlerViewState;
@property (nonatomic, strong) UIView *contentView;//传入View

//初始化 设置类型
-(instancetype)initWithFrame:(CGRect)frame WithTFAlerViewState:(TFAlerViewState)TFAlerViewState;

//初始化设置弹出信息
-(instancetype)initWithFrame:(CGRect)frame WithMsg:(NSString *)msg;


@property (nonatomic, assign) MaskViewTYPS type;
// 点击背景时候隐藏alert
@property (nonatomic, assign) BOOL hiddenWhenTapBG;
//初始化设置弹窗View
-(instancetype)initWithFrame:(CGRect)frame WithContentView:(UIView *)ContentView;

//初始化设置弹窗View
+(instancetype)sheradTFAlerView;
//初始化设置弹窗View
-(instancetype)initWithFrame:(CGRect)frame WithAletViewOBJType:(OpenType)Type;
@property (nonatomic, strong) UIViewController *SuperVC;


-(void)cornerRadius:(CGFloat)Radius;


/** 弹出提示提示语 */
- (void)show;

- (void)showWithMsg:(NSString *)msg;

- (void)dismiss;

@end

NS_ASSUME_NONNULL_END
