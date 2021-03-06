//
//  INHorizontalViewController.h
//  Interesting
//
//  Created by Jesse Hammons on 4/28/13.
//  Copyright (c) 2013 Zaggle, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "iCarousel.h"

@class INDataSource;

@interface INHorizontalViewController : UIViewController <UIActionSheetDelegate, iCarouselDataSource, iCarouselDelegate, UIGestureRecognizerDelegate>

@property (nonatomic, strong) iCarousel *carousel;

@property (nonatomic, strong) INDataSource *dataSource;
@property (nonatomic, assign) BOOL isScrolling;
@property (nonatomic, assign) NSInteger currentIndex;
@property (nonatomic, assign) BOOL isLoading;

- (void)updateDataSource:(INDataSource*)dataSource;
- (void)loadPhoto:(NSDictionary*)photo;
- (void)loadTag:(NSString*)tag completion:(void (^)(void))completion;

@end
