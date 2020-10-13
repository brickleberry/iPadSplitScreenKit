//
//  iPadSplitScreenDefineHeader.h
//  iPadSplitScreenKit
//
//  Created by DevDragonLi on 9/10/2020.
//

#ifndef iPadSplitScreenDefineHeader_h
#define iPadSplitScreenDefineHeader_h

/// APP 横竖屏详细状态

typedef NS_ENUM(NSInteger, SplitScreenInterfaceType) {
    
    SplitUnknown                     = -1, // 预置占位类型
    
    SplitPadPortraitFullScreen       = 0,  // 全屏幕 竖屏【Pad】
    
    SplitPadLandscapeFullScreen      = 1,  // 全屏幕 横屏【Pad】
    
    SplitPadLandscapeTwoThirdScreen  = 2,  // 约2/3屏幕 横屏【Pad】
    
    //#define kCHECKISFULLSCREENVALUE 100
    SplitPadCheckFullScreen          = 100, // 基准类型
    
    SplitPadLandscapeHalfScreen      = 101,  //  约1/2屏幕 横屏【Pad】
    
    SplitPadLandscapeThirdScreen     = 102,  //  约1/3屏幕 横屏【Pad】
    
    SplitPadPortraitThirdScreen      = 103,  //  约4/10屏幕 竖屏【Pad】
    
    SplitPadPortraitTwoThirdScreen   = 104,  //  约6/10屏幕 竖屏【Pad】
    
} API_UNAVAILABLE(watchos, tvos);


typedef NS_ENUM(NSInteger, ZDInterfaceChangeType) {
    ZDInterfaceChangeUnknown                = -1, // 预置占位类型
    
    ZDInterfaceChangedEarliest              = 0, // 屏幕改变即第一时间调用【时机最先】
    
    ZDInterfaceChanging                     = 1, // 屏幕改变中调用
    
    ZDInterfaceChangeLatter                 = 2, // 组件内部处理完成后调用【已完成布局】
    
} API_UNAVAILABLE(watchos, tvos);



#endif /* iPadSplitScreenDefineHeader_h */
