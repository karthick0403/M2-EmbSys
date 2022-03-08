# APPLICATION

In this phase, we find the denomination of the currency with the help of image
processing. To extract the denomination value we need to do the following steps.
## Image Acquisition

Acquisition of image is the initial step in image processing .There are many ways to acquire
images such as with the help of camera or by scanning the image. The image which we
acquired should retain all the features [6].

## Pre-processing
In the pre-processing step we enhance the visual appearance of image by manipulating the
data sets. It is also called image reconstruction, and does the correction of distortion,
degradation, and noise in the image. For removal of noise bilateral filtering is used in this
step.

## Edge Detection
It is an image processing technique for separating the boundaries of objects within an image.
It works by detecting discontinuities in brightness. It is used for separating the smooth edges
with sharp objects in the image. [7].We are using canny edge detection technique in this
process.

## Text Extraction
It is a process of extracting the text which are ASCII characters that a computer can
recognize from the image which we scanned. OCR technique is used to extract the text from
image 

## Currency Verification
In this phase, we check whether the currency is genuine or not. Here we extract the texture
features of the currency and compare it with the stored HAAR features. For this process, we
follow steps.

## Image Segmentation
After getting the denomination value accurately, we get the image of the currency which
matches the denomination value in the file .Image segmentation is the process of dividing a
scanned image into multiple Segments. The main use of this segmentation is to simplify and
change the representation of an image into something that is more meaningful parts which
are easier to analyze.

## HAAR Features Extraction

HAAR-like features are digital image features used in object recognition RGB values of
each and every pixel in an image are used. A HAAR feature considers neighboring
rectangular regions at a definite location in a detection window, each region pixel
intensities are summed up and also calculates the difference between these sums.

## Feature Comparison
In this step comparison of the extracted features with the stored features, which are stored in
data sets which gives the result.

