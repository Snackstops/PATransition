
#import <UIKit/UIKit.h>
#import "PATransitionManager.h"
#import "PATransitionProperty.h"
#import "PAPercentDrivenInteractiveTransition.h"

typedef void(^PATransitionBlock)(PATransitionProperty *transition);

@interface UIViewController (PATransition) <UIViewControllerTransitioningDelegate,UINavigationControllerDelegate>


- (void)PA_presentViewController:(UIViewController *)viewControllerToPresent animationType:(PATransitionAnimationType )animationType completion:(void (^)(void))completion;
- (void)PA_presentViewController:(UIViewController *)viewControllerToPresent makeTransition:(PATransitionBlock)transitionBlock;
- (void)PA_presentViewController:(UIViewController *)viewControllerToPresent makeTransition:(PATransitionBlock)transitionBlock completion:(void (^)(void))completion;


@end


