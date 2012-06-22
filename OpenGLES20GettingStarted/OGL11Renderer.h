//
//  OGL11Renderer.h
//  OpenGLES20GettingStarted
//
//  Created by socalcodecamp on 6/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RenderConsumer.h"

@interface OGL11Renderer : NSObject<RenderConsumer> {
@private
    EAGLContext* mContext;
    unsigned int mFrameBuffer;
    unsigned int mRenderBuffer;
    int mWidth;
    int mHeight;
}

-(id) initWithLayer:(CALayer*) layer;

@end