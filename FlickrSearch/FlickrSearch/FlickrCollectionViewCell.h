//
//  FlickrCollectionViewCell.h
//  FlickrSearch
//
//  Created by John Bogil on 12/31/14.
//  Copyright (c) 2014 John Bogil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "FlickrPhoto.h"


@class FlickrPhoto;
@interface FlickrCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) IBOutlet UIImageView *imageView;
@property (nonatomic, strong) FlickrPhoto *photo;



@end
