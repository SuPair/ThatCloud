//
//  FPSaveController.h
//  FPPicker
//
//  Created by Liyan David Chang on 7/7/12.
//  Copyright (c) 2013 Ink (Cloudtop Inc), All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "FPExternalHeaders.h"

@interface SourceListSaveController : UINavigationController <FPSourcePickerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate>

@property (nonatomic, assign) id <FPSaveDelegate> fpdelegate;
@property (nonatomic, strong) NSArray *sourceNames;

@property (nonatomic, strong) NSData *data;
@property (nonatomic, strong) NSURL *dataurl;

@property (nonatomic, strong) NSString *dataType;
@property (nonatomic, strong) NSString *dataExtension;

@property (nonatomic, strong) NSString *proposedFilename;

@property (nonatomic, strong) NSString *startingSource;

- (void) saveFileName:(NSString *)filename To:(NSString *)path;
- (void) saveFileLocally;

- (NSString *) getExtensionString;



@end