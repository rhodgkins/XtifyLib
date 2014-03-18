//
//  XLTagMgr.h
//  Xtify Sample App
//
//  Created by Sucharita/Gilad on 2/22/11.
/*
 * Licensed Materials - Property of IBM
 *
 * 5725E28, 5725I03
 *
 * (c) Copyright IBM Corp. 2011, 2014
 * US Government Users Restricted Rights - Use, duplication or disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */
//

#import <CoreData/CoreData.h>

@interface XLTagMgr : NSObject{
    NSManagedObjectContext *localObjectContext;	 
    NSManagedObjectModel *localObjectModel;
    NSPersistentStoreCoordinator *localStoreCoordinator;
    BOOL tagsChanged;
    NSMutableDictionary *recentTags;
}

- (NSString *)applicationDocumentsDirectory ;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSManagedObjectContext *) managedObjectContext;

+(XLTagMgr *) get;
-(void)insertTag:(NSString *)tagName withFlag:(NSString *)isSet;
- (NSMutableDictionary *) getRecentTags ;
-(void) removeTags;
-(void)  deleteTagRow:(NSString *)tagName;
- (void) sendTagsToServerBulk;
- (void) notifyTagsChanged:(BOOL) value;

@property (nonatomic, retain, readonly) NSManagedObjectContext *localObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *localObjectModel ;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *localStoreCoordinator;
@property (nonatomic, assign) BOOL tagsChanged;

@end
