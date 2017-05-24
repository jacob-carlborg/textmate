#import <OakAppKit/OakTabBarView.h>

@interface ProjectLayoutView : NSView
@property (nonatomic) OakTabBarView* tabBarView;
@property (nonatomic) NSView* documentView;
@property (nonatomic) NSView* fileBrowserView;
@property (nonatomic) NSView* fileBrowserHeaderView;
@property (nonatomic) NSView* minimapView;
@property (nonatomic) NSView* htmlOutputView;

@property (nonatomic) CGFloat fileBrowserWidth;
@property (nonatomic) BOOL fileBrowserOnRight;

@property (nonatomic) CGFloat minimapWidth;
@property (nonatomic) BOOL minimapOnRight;

@property (nonatomic) NSSize htmlOutputSize;
@property (nonatomic) BOOL htmlOutputOnRight;
@property (nonatomic) BOOL tabsAboveDocument;
@end
