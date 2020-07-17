//
//  PAT_IMGZOOMViewController.h
//  PATransition
//
//  Created by snackstops on 2020/7/17.
//  Copyright © 2020 PATransition. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PAT_IMGZOOMViewController : UIViewController
@property (nonatomic,strong) UIColor *BGColor;//背景颜色 默认黑
@property (nonatomic,strong) UIImageView *imageView;//显示图片
@property (nonatomic) CGRect ImgFrame;//设置位置大小 默认70%
@property (nonatomic) BOOL ImgCenter;//是否居中 默认居中

/**
 UIImageView *imageView  = (UIImageView *)recognizer.view;
 PAT_IMGZOOMViewController *vc = [[PAT_IMGZOOMViewController alloc] init];
 vc.imageView.image  = imageView.image;
 __weak PAT_IMGZOOMViewController *weakVC = vc;
 [self.navigationController PA_pushViewController:vc makeTransition:^(PATransitionProperty *transition) {
     transition.animationType = PATransitionAnimationTypeViewMoveToNextVC;
     //transition.animationTime = 0.64;
     transition.startView  = imageView;
     transition.targetView = weakVC.imageView;
 }];
 */


@end

NS_ASSUME_NONNULL_END
