//
//  GHDUserView.h
//  GHAPIDemo
//
//  Created by Josh Abernathy on 3/13/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface GHDUserView : NSView

@property (assign) IBOutlet NSTextField *usernameTextField;
@property (assign) IBOutlet NSTextField *realNameTextField;
@property (assign) IBOutlet NSProgressIndicator *spinner;
@property (assign) IBOutlet NSView *valuesContainerView;

@end
