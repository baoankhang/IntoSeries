//
//  IntoSeriesAppDelegate.h
//  IntoSeries
//
//  Created by Roman on 16.01.13.
//  Copyright (c) 2013 MrThrasher. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface IntoSeriesAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
