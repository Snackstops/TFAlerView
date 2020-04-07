//
//  TFAlerView_Config.h
//  PhotoBrowseDemo
//
//  Created by snackstops on 2020/3/31.
//  Copyright © 2020 TFAlerView. All rights reserved.
//

#ifndef TFAlerView_Config_h
#define TFAlerView_Config_h

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#define STATUSBAR_HEIGHT [[UIApplication sharedApplication] statusBarFrame].size.height

typedef NS_ENUM(NSInteger, TFToastType) {
    
    //灰色背景、无图标
    TFToastTypeDefault = 1,
    //绿色背景+成功图标
    TFToastTypeSuccess = 2,
    //红色背景+错误图标
    TFToastTypeError = 3,
    //橙色背景+警告图标
    TFToastTypeWarning = 4,
    //灰蓝色背景+信息图标
    TFToastTypeInfo = 5,
    
};

typedef NS_ENUM(NSInteger, TFToastPosition) {
    
    //显示在屏幕顶部
    TFToastPositionDefault = 0,
    //显示在状态栏下方
    TFToastPositionBelowStatusBar = 1,
    //显示在状态栏下方+圆角+左右边距
    TFToastPositionBelowStatusBarWithFillet = 2,
    //显示在屏幕底部
    TFToastPositionBottom = 3,
    //显示在屏幕底部+圆角
    TFToastPositionBottomWithFillet = 4,
    
};

#endif /* TFAlerView_Config_h */
