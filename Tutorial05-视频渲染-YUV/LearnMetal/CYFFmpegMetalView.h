//
//  CYFFmpegMetalView.h
//  CYPlayer
//
//  Created by yellowei on 2020/1/13.
//  Copyright © 2020 Sutan. All rights reserved.
//

@import MetalKit;
@import GLKit;

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#include <simd/simd.h>

NS_ASSUME_NONNULL_BEGIN

# pragma mark - ShaderTypes

typedef struct
{
    vector_float4 position;
    vector_float2 textureCoordinate;
} CYVertex;


typedef struct {
    matrix_float3x3 matrix;
    vector_float3 offset;
} CYConvertMatrix;



typedef enum CYVertexInputIndex
{
    CYVertexInputIndexVertices     = 0,
} CYVertexInputIndex;


typedef enum CYFragmentBufferIndex
{
    CYFragmentInputIndexMatrix     = 0,
} CYFragmentBufferIndex;


typedef enum CYFragmentTextureIndex
{
    CYFragmentTextureIndexTextureY     = 0,
    CYFragmentTextureIndexTextureUV     = 1,
} CYFragmentTextureIndex;

# pragma mark - CYFFmpegMetalView

@interface CYFFmpegMetalView : UIView

- (void)renderWithPixelBuffer:(CVPixelBufferRef)buffer;

@end

NS_ASSUME_NONNULL_END
