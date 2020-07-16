

#import <UIKit/UIKit.h>
#import "PATypedefConfig.h"
@interface PATransitionManager : NSObject<UIViewControllerAnimatedTransitioning>


@property (nonatomic, assign) NSTimeInterval                    animationTime;
@property (nonatomic, assign) PATransitionType                 transitionType;
@property (nonatomic, assign) PATransitionAnimationType        animationType;
@property (nonatomic, assign) PATransitionAnimationType        backAnimationType;
@property (nonatomic, assign) PAGestureType                    backGestureType;

@property (nonatomic, weak) UIView                              *startView;
@property (nonatomic, weak) UIView                              *targetView;

@property (nonatomic, assign) BOOL                              isSysBackAnimation;
@property (nonatomic, assign) BOOL                              autoShowAndHideNavBar;
@property (nonatomic, assign) BOOL                              backGestureEnable;

@property (nonatomic, copy) void(^willEndInteractiveBlock)(BOOL success);
@property (nonatomic, copy) void(^completionBlock)();


+(PATransitionManager *)copyPropertyFromObjcet:(id)object toObjcet:(id)targetObjcet;

- (UIImage *)imageFromView: (UIView *)view atFrame:(CGRect)rect;


@end
