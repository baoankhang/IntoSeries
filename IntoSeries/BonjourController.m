//
//  BonjourController.m
//  IntoSeries
//
//  Created by Roman on 16.01.13.
//  Copyright (c) 2013 MrThrasher. All rights reserved.
//

#import "BonjourController.h"

@implementation BonjourController

- (IBAction)startScan:(NSButton *)sender {
    
    NSString *result = @"Test";
    
    [_scanResults setStringValue: result];
}
@end
