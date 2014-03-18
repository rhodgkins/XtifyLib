//
//  XLTag.h
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

@interface XLTag : NSManagedObject
{
    
}
@property (nonatomic, retain) NSString * tagName;
@property (nonatomic, retain) NSString * isSet;
@end
