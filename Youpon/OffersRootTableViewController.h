//
//  OffersRootTableViewController.h
//  Youpon
//
//  Created by Garrison Prinslow on 11/2/11.
//  Copyright (c) 2011 Garrison Prinslow. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GroupedListTableViewController.h"
#import "NSArray+NestedArray.h"
#import "StringValueDisplay.h"

#import "RailsService.h"

@interface OffersRootTableViewController : GroupedListTableViewController <UIAlertViewDelegate> {
    
    
    //Added for service calls
    RailsServiceRequest *offersServiceRequest;
    RailsServiceResponse *offersServiceResponse;
}

-(void)getOffersResponseReceived;
-(void)refreshResults;
-(void)doSignOut;

@end
