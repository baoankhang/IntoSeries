//
//  BonjourController.h
//  IntoSeries
//
//  Created by Roman on 16.01.13.
//  Copyright (c) 2013 MrThrasher. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BonjourController : NSObject {
    
    __weak NSTextField *_scanResults;
}
- (IBAction)startScan:(NSButton *)sender;

@property (weak) IBOutlet NSTextField *scanResults;
@end
