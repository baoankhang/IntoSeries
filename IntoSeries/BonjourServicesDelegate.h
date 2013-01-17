//
//  BonjourServicesDelegate.h
//  IntoSeries
//
//  Created by Roman on 16.01.13.
//  Copyright (c) 2013 MrThrasher. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BonjourServicesDelegate : NSObject <NSNetServiceBrowserDelegate>
{
    // Keeps track of available services
    NSMutableArray *services;
    
    // Keeps track of search status
    BOOL searching;
}

// NSNetServiceBrowser delegate methods for service browsing
- (void)netServiceBrowserWillSearch:(NSNetServiceBrowser *)browser;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)browser;
- (void)netServiceBrowser:(NSNetServiceBrowser *)browser
             didNotSearch:(NSDictionary *)errorDict;
- (void)netServiceBrowser:(NSNetServiceBrowser *)browser
           didFindService:(NSNetService *)aNetService
               moreComing:(BOOL)moreComing;
- (void)netServiceBrowser:(NSNetServiceBrowser *)browser
         didRemoveService:(NSNetService *)aNetService
               moreComing:(BOOL)moreComing;

// Other methods
- (void)handleError:(NSNumber *)error;
- (void)updateUI;
@end
