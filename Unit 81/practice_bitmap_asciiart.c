#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1)

typedef struct _BITMAPFILEHEADER
{
    unsigned short bfType;
    unsigned int   bfSize;
    unsigned short bfReserved1;
    unsigned short bfReserved2;
    unsigned int   bfOffBits;
} BITMAPFILEHEADER;

typedef struct _BITMAPINFOHEADER
{
    unsigned int   biSize;
    int            biWidth;
    int            biHeight;
    unsigned short biPlanes;
    unsigned short biBitCount;
    unsigned int   biCompression;
    unsigned int   biSizeImage;
    int            biXPelsPerMeter;
    int            biYPelsPerMeter;
    unsigned int   biClrUsed;
    unsigned int   biClrImportant;
} BITMAPINFOHEADER;

typedef struct _RGBTRIPLE
{
    unsigned char rgbtBlue;
    unsigned char rgbtGreen;
    unsigned char rgbtRed;
} RGBTRIPLE;

#pragma pack(pop)

#define PIXEL_SIZE   3
#define PIXEL_ALIGN  4

int main()
{
    FILE *fpBmp;
    FILE *fpTxt;
    BITMAPFILEHEADER fileHeader;
    BITMAPINFOHEADER infoHeader;

    unsigned char *image;
    int size;
    int width, height;
    int padding;

    char ascii[] = { '#', '#', '@', '%', '=', '+', '*', ':', '-', '.', ' ' };

    fpBmp = fopen("Peppers80x80.bmp", "rb");
    if (fpBmp == NULL)
        return 0;

    if (/*(1)_______________________________________________*/ < 1)
    {
        fclose(fpBmp);
        return 0;
    }

    if (/*(2)__________________*/)
    {
        fclose(fpBmp);
        return 0;
    }

    if (fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, fpBmp) < 1)
    {
        fclose(fpBmp);
        return 0;
    }

    if (infoHeader.biBitCount != 24)
    {
        fclose(fpBmp);
        return 0;
    }

    size = infoHeader.biSizeImage;
    width = infoHeader.biWidth;
    height = infoHeader.biHeight;

    padding = (PIXEL_ALIGN - ((width * PIXEL_SIZE) % PIXEL_ALIGN)) % PIXEL_ALIGN;

    if (size == 0)
    {
        size = (width * PIXEL_SIZE + padding) * height;
    }

    image = malloc(size);

    fseek(fpBmp, fileHeader.bfOffBits, SEEK_SET);

    if (fread(image, size, 1, fpBmp) < 1)
    {
        fclose(fpBmp);
        return 0;
    }

    fclose(fpBmp);

    fpTxt = fopen("ascii.txt", "w");
    if (fpTxt == NULL)
    {
        free(image);
        return 0;
    }

    for (int y = height - 1; y >= 0; y--)
    {
        for (int x = 0; x < width; x++)
        {
            int index = (x * PIXEL_SIZE) + (y * (width * PIXEL_SIZE)) + (padding * y);

            RGBTRIPLE *pixel = (RGBTRIPLE *)&image[index];

            unsigned char blue = pixel->rgbtBlue;
            unsigned char green = pixel->rgbtGreen;
            unsigned char red = pixel->rgbtRed;

            unsigned char gray = (red + green + blue) / PIXEL_SIZE;

            /*(3)____________________________________*/

            fprintf(fpTxt, "%c%c", c, c);
        }

        fprintf(fpTxt, "\n");
    }

    fclose(fpTxt);

    free(image);

    return 0;
}
