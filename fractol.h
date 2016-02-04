# include <mlx.h>
# include <stdio.h>
# include "libft/includes/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "fdf.h"
# include <math.h>
# define WIDTH 1500
# define HEIGTH 1500

typedef struct                                                  s_img
{
  void                    *mlx;
  void                    *win;
  unsigned long   img_color;
  char                    *data;
  void                    *img_ptr;
  int                             sizeline;
  int                             bpp;
  int                             x;
  int                             y;
  int                             endian;
  void                    *mlx_ptr;
}                                                                               t_img;

typedef struct                                                  s_event
{
  float xd;
  float yd;
}                                                                               t_event;

typedef struct                                                  s_struct
{
  void                    *mlx;
  void                    *win;
  char                    ***coord;
  int                             i;
  int                             maxline;
  int                             zoom;
  t_img                   *img;
  t_event                 *event;
}                                                                               t_struct;

typedef struct                                                  s_temp
{
  int x1;
  int x2;
  int y1;
  int y2;
  int val1;
  int val2;
  int color;
}                                                                               t_temp;

typedef struct                                                  s_coor
{
  int             index;
  float   xdep;
  float   ydep;
  float   xtemp;
  float   ytemp;
  float   j;
  float   v;
  float   x;
  float   y;
}                                                                               t_coor;

typedef struct                                                  s_line
{
  int dx;
  int dy;
  int i;
  int xinc;
  int yinc;
  int cumul;
  int x;
  int y;
}                                                                               t_line;

