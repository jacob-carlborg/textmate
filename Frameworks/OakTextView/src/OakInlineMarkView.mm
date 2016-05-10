#import "OakInlineMarkView.h"

@implementation OakInlineMarkView

- (void)drawRect:(NSRect)rect
{
    //[super drawRect:dirtyRect];
    
	[[NSColor redColor] set];
	NSRectFillUsingOperation(self.bounds, NSCompositeSourceOver);
}

- (id)initWithFrame:(NSRect)frame
{
	if (self = [super initWithFrame:frame])
	{
		[self setAutoresizingMask:NSViewWidthSizable];
	}

	return self;
}
@end
