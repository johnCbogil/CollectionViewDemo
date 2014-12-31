//
//  ViewController.h
//  FlickrSearch
//
//  Created by John Bogil on 12/30/14.
//  Copyright (c) 2014 John Bogil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Flickr.h"
#import "FlickrPhoto.h"

@interface ViewController : UIViewController

@property(nonatomic, strong) IBOutlet UIToolbar *toolbar;
@property(nonatomic, weak) IBOutlet UIBarButtonItem *shareButton;
@property(nonatomic, strong) IBOutlet UITextField *textField;

// Flickr properties
@property (nonatomic, strong) NSMutableDictionary *searchResults;
@property (nonatomic, strong) NSMutableArray *searches;
@property (nonatomic, strong) Flickr *flickr;


- (IBAction)shareButtonTapped:(id)sender;



@end

