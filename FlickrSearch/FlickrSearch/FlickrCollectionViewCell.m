//
//  FlickrCollectionViewCell.m
//  FlickrSearch
//
//  Created by John Bogil on 12/31/14.
//  Copyright (c) 2014 John Bogil. All rights reserved.
//

#import "FlickrCollectionViewCell.h"

@implementation FlickrCollectionViewCell

-(void)setPhoto:(FlickrPhoto *)photo{
    
    if(_photo != photo){
        
        _photo = photo;
    }
    
    self.imageView.image = _photo.thumbnail;
    
}

@end
