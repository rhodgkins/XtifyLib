//
//  TaggingPreferenceScreen.h
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

#import <UIKit/UIKit.h>

@class AboutPage;

@interface TaggingPreferenceScreen : UIViewController <UITableViewDataSource,UIActionSheetDelegate , UITableViewDelegate> 
{
	UITableView			*settingTableView;
    UISwitch        *fooddrinkSettingSwitch ;
    UILabel     *fooddrinkSettingLabel1 ;
  
    NSArray *fooddrinkTableArray;
    
   UISwitch        *apparelSettingSwitch ;
   UILabel     *apparelSettingLabel1 ;
    
NSArray *apparelTableArray;

    UISwitch        *entertainmentSettingSwitch ;
    UILabel     *entertainmentSettingLabel1 ;
    
    NSArray *entertainmentTableArray;
    
    UISwitch        *mediaSettingSwitch ;
    UILabel     *mediaSettingLabel1 ;
    
    NSArray *mediaTableArray;
    
    UISwitch        *elecSettingSwitch ;
    UILabel     *elecSettingLabel1 ;
    
    NSArray *elecTableArray;
  
    
    NSMutableArray *listOfItems;
    NSMutableDictionary *tags;
    BOOL isFdOn, isAOn, isEOn, isMOn, isElOn;
	
}
+(TaggingPreferenceScreen*)get;
- (void)updateSettingsTable;
- (void)fdpreferenceSettingAction:(id)sender;
- (void)apreferenceSettingAction:(id)sender;
- (void)epreferenceSettingAction:(id)sender;
- (void)mpreferenceSettingAction:(id)sender;
- (void)elpreferenceSettingAction:(id)sender;
- (void) notifyTagsChanged;

// Example to get active tags
- (void) myMethodToHandleGetActiveTags :(NSMutableArray * )anArray ;

@property (nonatomic, retain) UITableView *settingTableView;
@property (nonatomic, assign)	BOOL isFdOn, isAOn, isEOn, isMOn, isElOn;
@property (nonatomic, assign) NSMutableDictionary *tags;
@end
