//
//  SettingViewController.h
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
@class TaggingPreferenceScreen;
@class  AboutSetting;
@class AboutPage;

@interface SettingViewController : UIViewController <UITableViewDataSource,UIActionSheetDelegate , UITableViewDelegate> 
{
	UITableView			*settingTableView;
	Boolean				isSettingChanged;
    UISwitch        *locationSettingSwitch ;
    UISwitch        *badgeSettingSwitch ;
    UILabel     *locationSettingLabel ;
    UILabel     *badgeSettingLabel ;
    NSArray *aboutTableArray;
    NSArray *locationTableArray;
    NSArray *badgeTableArray;
    AboutSetting *aboutSettingPage;
    TaggingPreferenceScreen *taggingPref;
    
    NSMutableArray *listOfItems;
	
}
- (void)locationSettingAction:(id)sender;
- (void)badgeSettingAction:(id)sender;
- (void)settingsChanged;
-(void)updateSettingsTable;
- (void) setLocationPreference:(BOOL)value;


@property (nonatomic, retain) UITableView *settingTableView;


@property (nonatomic)Boolean isSettingChanged;
@property (nonatomic, retain) TaggingPreferenceScreen *taggingPrefController;


@end
