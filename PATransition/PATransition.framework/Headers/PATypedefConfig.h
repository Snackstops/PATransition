//
//  PATypedefConfig.h
//  PATransition
//
//  Created by 王小树 on 16/6/3.
//  Copyright © 2016年 王小树. All rights reserved.
//

#ifndef PATypedefConfig_h
#define PATypedefConfig_h


// ************** Enum **************
typedef NS_ENUM(NSInteger,PATransitionAnimationType){
    //----------- 系统 ------------
    PATransitionAnimationTypeSysFade = 1,                   //淡入淡出
    
    PATransitionAnimationTypeSysPushFromRight,
    PATransitionAnimationTypeSysPushFromLeft,
    PATransitionAnimationTypeSysPushFromTop,
    PATransitionAnimationTypeSysPushFromBottom,//Push
    
    PATransitionAnimationTypeSysRevealFromRight,
    PATransitionAnimationTypeSysRevealFromLeft,
    PATransitionAnimationTypeSysRevealFromTop,
    PATransitionAnimationTypeSysRevealFromBottom,//揭开
    
    PATransitionAnimationTypeSysMoveInFromRight,
    PATransitionAnimationTypeSysMoveInFromLeft,
    PATransitionAnimationTypeSysMoveInFromTop,
    PATransitionAnimationTypeSysMoveInFromBottom,//覆盖
    
    PATransitionAnimationTypeSysCubeFromRight,
    PATransitionAnimationTypeSysCubeFromLeft,
    PATransitionAnimationTypeSysCubeFromTop,
    PATransitionAnimationTypeSysCubeFromBottom,//立方体
    
    PATransitionAnimationTypeSysSuckEffect,                 //吮吸
    
    PATransitionAnimationTypeSysOglFlipFromRight,
    PATransitionAnimationTypeSysOglFlipFromLeft,
    PATransitionAnimationTypeSysOglFlipFromTop,
    PATransitionAnimationTypeSysOglFlipFromBottom, //翻转
    
    PATransitionAnimationTypeSysRippleEffect,               //波纹
    
    PATransitionAnimationTypeSysPageCurlFromRight,
    PATransitionAnimationTypeSysPageCurlFromLeft,
    PATransitionAnimationTypeSysPageCurlFromTop,
    PATransitionAnimationTypeSysPageCurlFromBottom,//翻页
    
    PATransitionAnimationTypeSysPageUnCurlFromRight,
    PATransitionAnimationTypeSysPageUnCurlFromLeft,
    PATransitionAnimationTypeSysPageUnCurlFromTop,
    PATransitionAnimationTypeSysPageUnCurlFromBottom,//反翻页
    
    PATransitionAnimationTypeSysCameraIrisHollowOpen,       //开镜头
    
    PATransitionAnimationTypeSysCameraIrisHollowClose,      //关镜头
    
    //----------- 自定义 ------------
    PATransitionAnimationTypeDefault,
    
    PATransitionAnimationTypePageTransition,
    
    PATransitionAnimationTypeViewMoveToNextVC,
    PATransitionAnimationTypeViewMoveNormalToNextVC,
    
    PATransitionAnimationTypeCover,
    
    PATransitionAnimationTypeSpreadFromRight,
    PATransitionAnimationTypeSpreadFromLeft,
    PATransitionAnimationTypeSpreadFromTop,
    PATransitionAnimationTypeSpreadFromBottom,
    PATransitionAnimationTypePointSpreadPresent,
    
    PATransitionAnimationTypeBoom,
    
    PATransitionAnimationTypeBrickOpenVertical,
    PATransitionAnimationTypeBrickOpenHorizontal,
    PATransitionAnimationTypeBrickCloseVertical, 
    PATransitionAnimationTypeBrickCloseHorizontal,
    
    PATransitionAnimationTypeInsideThenPush,
    
    PATransitionAnimationTypeFragmentShowFromRight,
    PATransitionAnimationTypeFragmentShowFromLeft,
    PATransitionAnimationTypeFragmentShowFromTop,
    PATransitionAnimationTypeFragmentShowFromBottom,
    
    PATransitionAnimationTypeFragmentHideFromRight,
    PATransitionAnimationTypeFragmentHideFromLeft,
    PATransitionAnimationTypeFragmentHideFromTop,
    PATransitionAnimationTypeFragmentHideFromBottom,
    PATransitionAnimationTypeTipFlip,
    
};

typedef NS_ENUM(NSInteger,PATransitionType){
    
    PATransitionTypePop,
    PATransitionTypePush,
    PATransitionTypePresent,
    PATransitionTypeDismiss,
};


typedef NS_ENUM(NSInteger,PAGestureType){

    PAGestureTypeNone,
    PAGestureTypePanLeft,
    PAGestureTypePanRight,
    PAGestureTypePanUp,
    PAGestureTypePanDown,
    
};
//系统动画类型
typedef NS_ENUM(NSInteger,PATransitionSysAnimationType){
    
    PATransitionSysAnimationTypeFade = 1,                   //淡入淡出
    PATransitionSysAnimationTypePush,                       //推挤
    PATransitionSysAnimationTypeReveal,                     //揭开
    PATransitionSysAnimationTypeMoveIn,                     //覆盖
    PATransitionSysAnimationTypeCube,                       //立方体
    PATransitionSysAnimationTypeSuckEffect,                 //吮吸
    PATransitionSysAnimationTypeOglFlip,                    //翻转
    PATransitionSysAnimationTypeRippleEffect,               //波纹
    PATransitionSysAnimationTypePageCurl,                   //翻页
    PATransitionSysAnimationTypePageUnCurl,                 //反翻页
    PATransitionSysAnimationTypeCameraIrisHollowOpen,       //开镜头
    PATransitionSysAnimationTypeCameraIrisHollowClose,      //关镜头
    PATransitionSysAnimationTypeCurlDown,                   //下翻页
    PATransitionSysAnimationTypeCurlUp,                     //上翻页
    PATransitionSysAnimationTypeFlipFromLeft,               //左翻转
    PATransitionSysAnimationTypeFlipFromRight,              //右翻转
    
};



#endif /* PATypedefConfig_h */
