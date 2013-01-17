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
    
    id BonjourServicesDelegate;
    BonjourServicesDelegate = [[BonjourServicesDelegate alloc] init];
    NSNetServiceBrowser *browser = [[NSNetServiceBrowser alloc] init];
    
    [browser setDelegate:BonjourServicesDelegate];
    [browser searchForServicesOfType:@"" inDomain:@""];
}
@end
