int     mlx_put_pxl_to_img(int r, int g, int b, t_draw *draw)
{
  int   i;

  i = (draw->sizeline * draw->y) + (draw->x * 4);
  draw->data[i] = b;
  draw->data[i + 1] = g;
  draw->data[i + 2] = r;
  draw->data[i + 3] = 0;
}
