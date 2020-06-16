#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

char flag[474] = "\x49\x0f\x25\xf3\x08\x26\xd8\x89\x6f\x62\xd4\xea\x7e\x9a\xe0\x65\x54\x89\x84\xba\x79\x03\x54\x9f\x5e\x37\xd5\xa0\x62\x53\xf3\x2c\x11\xc0\xaf\xde\x85\xba\x81\x06\x1f\x9e\x21\x66\xf4\x25\xac\x1c\xfe\x65\x6b\x5d\x35\x95\x43\xb8\x37\x6e\xd3\xa4\xd8\x1b\x74\x6c\xc9\xe1\xd6\x82\x26\xc4\xfe\x9f\x25\x0a\xc4\x81\x3b\x0f\x21\x9c\xe6\x45\x80\x98\xa6\x34\xe1\x25\x50\x0a\xbc\xc6\x2b\xbf\xbc\x5b\x3f\x71\x8b\x72\x86\x6e\xad\xda\x92\xb6\xe8\xad\x28\xe8\xaa\x73\xbb\x72\xf0\x8b\x63\x95\xa1\x06\xe8\xcd\xe6\x31\xd1\x60\x4c\x0c\x85\x14\x6b\xb8\x03\xc3\xeb\xad\xea\x74\x15\xc0\x35\x23\xf9\xb6\x95\xf9\xd6\x6c\xe1\xef\xc2\x69\x54\xa2\xc3\x21\x24\xbf\x54\xb7\x26\x83\x16\xae\xfc\x10\x7e\x47\x03\x93\xaa\xf1\x86\x48\xb4\x16\xec\x6d\xa5\x2b\xb1\xc6\x6a\x19\xf4\x63\x43\xb5\x12\x60\x1a\xa8\x3d\xfb\x35\x35\x8e\x04\xc0\x58\x10\xc6\x24\xdd\x4b\xea\xff\x09\x17\xb8\x0b\x6a\x2a\x88\x83\xd5\x36\x6c\x3b\xde\x85\x70\x57\x5e\xf1\xca\x03\x24\x0f\x21\x1f\xf4\x91\x29\x6a\xe9\x75\xe4\xd8\xd1\x7c\xad\x07\x39\x7b\xfe\xac\x13\xa0\x3b\xf1\xf7\xb1\x38\x43\x48\x1d\x16\x86\xa3\x2c\x40\xa3\x4c\x70\xa9\xab\x0c\x7f\x19\xa6\xc1\x9b\xb9\xc5\x71\xa2\x6a\xce\x76\x97\xef\x76\xcb\xef\x51\xa7\x59\xad\xc3\x6c\x92\xa5\x8b\x51\x98\xd3\x8c\xf2\x33\x42\x33\x1d\xa5\x46\xcd\xcc\x17\x4a\xbb\x6e\xbe\x2d\x10\xec\x52\x5b\x3e\x29\xf5\x19\x93\x02\xd3\x98\x7a\x5e\x9a\xa7\x76\x35\x6e\x2f\xc0\x3b\x53\x36\x98\x3e\x82\x87\xbc\xcc\x14\x6a\xf1\xd0\x6f\x3e\xc4\x81\x6f\x6c\xee\x20\xe6\x34\x7a\xde\x4c\x61\x92\x97\x98\xaf\x2f\x39\x92\xc6\x32\x10\x76\xc4\x74\x66\xba\x0b\x24\x11\xbf\xc4\xee\x1c\x64\xe2\x11\xa3\xd2\x6d\x36\xca\x6f\xcc\x8d\x57\x7d\x37\x5f\x24\x4d\x49\xb2\xd2\x71\xf1\xb9\x14\xc5\x60\xe2\xb8\xae\x96\xe9\xb3\x0c\xd7\x22\x6f\x00\xc0\x70\xbb\xdc\xa6\xdc\x1c\x85\x1c\xaf\x3d\xd6\x9c\xec\x03\x2e\xb2\x44\xf4\x3a\x82\xe4\xb2\x80\xd7\x5d\xa7\x95\x50\xa8\x3f\xd0\xb6\x55\xd7\xb3\x44\x9a\x32\xed\x8f\x26\x2d\x81\x77\x30\xac\xbd\x3a\xb5\xc1\x79\x15";

void
level473 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x35')
    {
      printf("flag: \n");
      write(1, flag, 473);
    }
  return;
}

void
level472 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x59')
    level473 (i + 1);
  return;
}

void
level471 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xee')
    level472 (i + 1);
  return;
}

void
level470 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xea')
    level471 (i + 1);
  return;
}

void
level469 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x15')
    level470 (i + 1);
  return;
}

void
level468 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9d')
    level469 (i + 1);
  return;
}

void
level467 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8c')
    level468 (i + 1);
  return;
}

void
level466 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x10')
    level467 (i + 1);
  return;
}

void
level465 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x57')
    level466 (i + 1);
  return;
}

void
level464 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xae')
    level465 (i + 1);
  return;
}

void
level463 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x72')
    level464 (i + 1);
  return;
}

void
level462 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x79')
    level463 (i + 1);
  return;
}

void
level461 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd0')
    level462 (i + 1);
  return;
}

void
level460 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x91')
    level461 (i + 1);
  return;
}

void
level459 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x12')
    level460 (i + 1);
  return;
}

void
level458 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xba')
    level459 (i + 1);
  return;
}

void
level457 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x64')
    level458 (i + 1);
  return;
}

void
level456 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x93')
    level457 (i + 1);
  return;
}

void
level455 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf7')
    level456 (i + 1);
  return;
}

void
level454 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x75')
    level455 (i + 1);
  return;
}

void
level453 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x96')
    level454 (i + 1);
  return;
}

void
level452 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf0')
    level453 (i + 1);
  return;
}

void
level451 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x1f')
    level452 (i + 1);
  return;
}

void
level450 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x88')
    level451 (i + 1);
  return;
}

void
level449 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2c')
    level450 (i + 1);
  return;
}

void
level448 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xca')
    level449 (i + 1);
  return;
}

void
level447 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf8')
    level448 (i + 1);
  return;
}

void
level446 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x02')
    level447 (i + 1);
  return;
}

void
level445 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x88')
    level446 (i + 1);
  return;
}

void
level444 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xdf')
    level445 (i + 1);
  return;
}

void
level443 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xce')
    level444 (i + 1);
  return;
}

void
level442 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc4')
    level443 (i + 1);
  return;
}

void
level441 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa2')
    level442 (i + 1);
  return;
}

void
level440 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x1a')
    level441 (i + 1);
  return;
}

void
level439 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd4')
    level440 (i + 1);
  return;
}

void
level438 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x64')
    level439 (i + 1);
  return;
}

void
level437 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x92')
    level438 (i + 1);
  return;
}

void
level436 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x0e')
    level437 (i + 1);
  return;
}

void
level435 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x23')
    level436 (i + 1);
  return;
}

void
level434 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xcc')
    level435 (i + 1);
  return;
}

void
level433 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xbc')
    level434 (i + 1);
  return;
}

void
level432 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf6')
    level433 (i + 1);
  return;
}

void
level431 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x1d')
    level432 (i + 1);
  return;
}

void
level430 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8f')
    level431 (i + 1);
  return;
}

void
level429 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3c')
    level430 (i + 1);
  return;
}

void
level428 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa5')
    level429 (i + 1);
  return;
}

void
level427 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3c')
    level428 (i + 1);
  return;
}

void
level426 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfc')
    level427 (i + 1);
  return;
}

void
level425 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x86')
    level426 (i + 1);
  return;
}

void
level424 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x80')
    level425 (i + 1);
  return;
}

void
level423 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe4')
    level424 (i + 1);
  return;
}

void
level422 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2c')
    level423 (i + 1);
  return;
}

void
level421 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe0')
    level422 (i + 1);
  return;
}

void
level420 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x20')
    level421 (i + 1);
  return;
}

void
level419 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4f')
    level420 (i + 1);
  return;
}

void
level418 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x02')
    level419 (i + 1);
  return;
}

void
level417 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf7')
    level418 (i + 1);
  return;
}

void
level416 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x70')
    level417 (i + 1);
  return;
}

void
level415 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xec')
    level416 (i + 1);
  return;
}

void
level414 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x95')
    level415 (i + 1);
  return;
}

void
level413 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb6')
    level414 (i + 1);
  return;
}

void
level412 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8e')
    level413 (i + 1);
  return;
}

void
level411 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x98')
    level412 (i + 1);
  return;
}

void
level410 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc2')
    level411 (i + 1);
  return;
}

void
level409 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x40')
    level410 (i + 1);
  return;
}

void
level408 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe5')
    level409 (i + 1);
  return;
}

void
level407 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x34')
    level408 (i + 1);
  return;
}

void
level406 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x99')
    level407 (i + 1);
  return;
}

void
level405 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd1')
    level406 (i + 1);
  return;
}

void
level404 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x51')
    level405 (i + 1);
  return;
}

void
level403 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf2')
    level404 (i + 1);
  return;
}

void
level402 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x92')
    level403 (i + 1);
  return;
}

void
level401 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x69')
    level402 (i + 1);
  return;
}

void
level400 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x6d')
    level401 (i + 1);
  return;
}

void
level399 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x04')
    level400 (i + 1);
  return;
}

void
level398 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7f')
    level399 (i + 1);
  return;
}

void
level397 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x17')
    level398 (i + 1);
  return;
}

void
level396 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5d')
    level397 (i + 1);
  return;
}

void
level395 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5d')
    level396 (i + 1);
  return;
}

void
level394 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xad')
    level395 (i + 1);
  return;
}

void
level393 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb0')
    level394 (i + 1);
  return;
}

void
level392 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4f')
    level393 (i + 1);
  return;
}

void
level391 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb6')
    level392 (i + 1);
  return;
}

void
level390 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x16')
    level391 (i + 1);
  return;
}

void
level389 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4d')
    level390 (i + 1);
  return;
}

void
level388 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xae')
    level389 (i + 1);
  return;
}

void
level387 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfc')
    level388 (i + 1);
  return;
}

void
level386 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x6d')
    level387 (i + 1);
  return;
}

void
level385 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc2')
    level386 (i + 1);
  return;
}

void
level384 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x48')
    level385 (i + 1);
  return;
}

void
level383 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x43')
    level384 (i + 1);
  return;
}

void
level382 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb1')
    level383 (i + 1);
  return;
}

void
level381 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x98')
    level382 (i + 1);
  return;
}

void
level380 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc3')
    level381 (i + 1);
  return;
}

void
level379 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4e')
    level380 (i + 1);
  return;
}

void
level378 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x58')
    level379 (i + 1);
  return;
}

void
level377 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2b')
    level378 (i + 1);
  return;
}

void
level376 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc6')
    level377 (i + 1);
  return;
}

void
level375 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x39')
    level376 (i + 1);
  return;
}

void
level374 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x08')
    level375 (i + 1);
  return;
}

void
level373 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9b')
    level374 (i + 1);
  return;
}

void
level372 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5a')
    level373 (i + 1);
  return;
}

void
level371 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4f')
    level372 (i + 1);
  return;
}

void
level370 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x6d')
    level371 (i + 1);
  return;
}

void
level369 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9a')
    level370 (i + 1);
  return;
}

void
level368 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xcd')
    level369 (i + 1);
  return;
}

void
level367 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x66')
    level368 (i + 1);
  return;
}

void
level366 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x70')
    level367 (i + 1);
  return;
}

void
level365 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x80')
    level366 (i + 1);
  return;
}

void
level364 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc7')
    level365 (i + 1);
  return;
}

void
level363 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc8')
    level364 (i + 1);
  return;
}

void
level362 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xcd')
    level363 (i + 1);
  return;
}

void
level361 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3d')
    level362 (i + 1);
  return;
}

void
level360 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x30')
    level361 (i + 1);
  return;
}

void
level359 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x81')
    level360 (i + 1);
  return;
}

void
level358 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x06')
    level359 (i + 1);
  return;
}

void
level357 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x6b')
    level358 (i + 1);
  return;
}

void
level356 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9a')
    level357 (i + 1);
  return;
}

void
level355 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7f')
    level356 (i + 1);
  return;
}

void
level354 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb1')
    level355 (i + 1);
  return;
}

void
level353 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x33')
    level354 (i + 1);
  return;
}

void
level352 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x33')
    level353 (i + 1);
  return;
}

void
level351 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfd')
    level352 (i + 1);
  return;
}

void
level350 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9b')
    level351 (i + 1);
  return;
}

void
level349 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x42')
    level350 (i + 1);
  return;
}

void
level348 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4f')
    level349 (i + 1);
  return;
}

void
level347 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xac')
    level348 (i + 1);
  return;
}

void
level346 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xae')
    level347 (i + 1);
  return;
}

void
level345 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x16')
    level346 (i + 1);
  return;
}

void
level344 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x68')
    level345 (i + 1);
  return;
}

void
level343 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xec')
    level344 (i + 1);
  return;
}

void
level342 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc0')
    level343 (i + 1);
  return;
}

void
level341 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa8')
    level342 (i + 1);
  return;
}

void
level340 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xdd')
    level341 (i + 1);
  return;
}

void
level339 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x61')
    level340 (i + 1);
  return;
}

void
level338 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc7')
    level339 (i + 1);
  return;
}

void
level337 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4a')
    level338 (i + 1);
  return;
}

void
level336 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x73')
    level337 (i + 1);
  return;
}

void
level335 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x17')
    level336 (i + 1);
  return;
}

void
level334 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9f')
    level335 (i + 1);
  return;
}

void
level333 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x70')
    level334 (i + 1);
  return;
}

void
level332 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x32')
    level333 (i + 1);
  return;
}

void
level331 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x49')
    level332 (i + 1);
  return;
}

void
level330 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x29')
    level331 (i + 1);
  return;
}

void
level329 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xdb')
    level330 (i + 1);
  return;
}

void
level328 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc5')
    level329 (i + 1);
  return;
}

void
level327 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x72')
    level328 (i + 1);
  return;
}

void
level326 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x25')
    level327 (i + 1);
  return;
}

void
level325 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc7')
    level326 (i + 1);
  return;
}

void
level324 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8f')
    level325 (i + 1);
  return;
}

void
level323 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x22')
    level324 (i + 1);
  return;
}

void
level322 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xbc')
    level323 (i + 1);
  return;
}

void
level321 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x46')
    level322 (i + 1);
  return;
}

void
level320 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xaa')
    level321 (i + 1);
  return;
}

void
level319 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x07')
    level320 (i + 1);
  return;
}

void
level318 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x61')
    level319 (i + 1);
  return;
}

void
level317 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x27')
    level318 (i + 1);
  return;
}

void
level316 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x58')
    level317 (i + 1);
  return;
}

void
level315 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd2')
    level316 (i + 1);
  return;
}

void
level314 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x30')
    level315 (i + 1);
  return;
}

void
level313 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x13')
    level314 (i + 1);
  return;
}

void
level312 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9e')
    level313 (i + 1);
  return;
}

void
level311 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4e')
    level312 (i + 1);
  return;
}

void
level310 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9b')
    level311 (i + 1);
  return;
}

void
level309 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x36')
    level310 (i + 1);
  return;
}

void
level308 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x37')
    level309 (i + 1);
  return;
}

void
level307 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb0')
    level308 (i + 1);
  return;
}

void
level306 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xed')
    level307 (i + 1);
  return;
}

void
level305 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3a')
    level306 (i + 1);
  return;
}

void
level304 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfa')
    level305 (i + 1);
  return;
}

void
level303 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x35')
    level304 (i + 1);
  return;
}

void
level302 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x13')
    level303 (i + 1);
  return;
}

void
level301 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3e')
    level302 (i + 1);
  return;
}

void
level300 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x13')
    level301 (i + 1);
  return;
}

void
level299 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8e')
    level300 (i + 1);
  return;
}

void
level298 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xac')
    level299 (i + 1);
  return;
}

void
level297 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xaf')
    level298 (i + 1);
  return;
}

void
level296 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb8')
    level297 (i + 1);
  return;
}

void
level295 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2d')
    level296 (i + 1);
  return;
}

void
level294 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xab')
    level295 (i + 1);
  return;
}

void
level293 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd9')
    level294 (i + 1);
  return;
}

void
level292 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xcd')
    level293 (i + 1);
  return;
}

void
level291 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x44')
    level292 (i + 1);
  return;
}

void
level290 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe3')
    level291 (i + 1);
  return;
}

void
level289 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd1')
    level290 (i + 1);
  return;
}

void
level288 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x79')
    level289 (i + 1);
  return;
}

void
level287 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xdb')
    level288 (i + 1);
  return;
}

void
level286 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x71')
    level287 (i + 1);
  return;
}

void
level285 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc6')
    level286 (i + 1);
  return;
}

void
level284 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x94')
    level285 (i + 1);
  return;
}

void
level283 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5e')
    level284 (i + 1);
  return;
}

void
level282 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xcf')
    level283 (i + 1);
  return;
}

void
level281 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xeb')
    level282 (i + 1);
  return;
}

void
level280 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x56')
    level281 (i + 1);
  return;
}

void
level279 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb2')
    level280 (i + 1);
  return;
}

void
level278 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4a')
    level279 (i + 1);
  return;
}

void
level277 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8d')
    level278 (i + 1);
  return;
}

void
level276 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2e')
    level277 (i + 1);
  return;
}

void
level275 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9a')
    level276 (i + 1);
  return;
}

void
level274 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x99')
    level275 (i + 1);
  return;
}

void
level273 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xbb')
    level274 (i + 1);
  return;
}

void
level272 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xbd')
    level273 (i + 1);
  return;
}

void
level271 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x86')
    level272 (i + 1);
  return;
}

void
level270 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x65')
    level271 (i + 1);
  return;
}

void
level269 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5f')
    level270 (i + 1);
  return;
}

void
level268 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x70')
    level269 (i + 1);
  return;
}

void
level267 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8b')
    level268 (i + 1);
  return;
}

void
level266 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd5')
    level267 (i + 1);
  return;
}

void
level265 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x50')
    level266 (i + 1);
  return;
}

void
level264 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x70')
    level265 (i + 1);
  return;
}

void
level263 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x83')
    level264 (i + 1);
  return;
}

void
level262 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7c')
    level263 (i + 1);
  return;
}

void
level261 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x0c')
    level262 (i + 1);
  return;
}

void
level260 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfc')
    level261 (i + 1);
  return;
}

void
level259 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd9')
    level260 (i + 1);
  return;
}

void
level258 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4a')
    level259 (i + 1);
  return;
}

void
level257 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3d')
    level258 (i + 1);
  return;
}

void
level256 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x34')
    level257 (i + 1);
  return;
}

void
level255 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x1c')
    level256 (i + 1);
  return;
}

void
level254 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x10')
    level255 (i + 1);
  return;
}

void
level253 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x91')
    level254 (i + 1);
  return;
}

void
level252 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8b')
    level253 (i + 1);
  return;
}

void
level251 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd1')
    level252 (i + 1);
  return;
}

void
level250 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x47')
    level251 (i + 1);
  return;
}

void
level249 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x80')
    level250 (i + 1);
  return;
}

void
level248 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x6f')
    level249 (i + 1);
  return;
}

void
level247 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf3')
    level248 (i + 1);
  return;
}

void
level246 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd6')
    level247 (i + 1);
  return;
}

void
level245 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5b')
    level246 (i + 1);
  return;
}

void
level244 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x45')
    level245 (i + 1);
  return;
}

void
level243 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x27')
    level244 (i + 1);
  return;
}

void
level242 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x84')
    level243 (i + 1);
  return;
}

void
level241 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x23')
    level242 (i + 1);
  return;
}

void
level240 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xad')
    level241 (i + 1);
  return;
}

void
level239 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf8')
    level240 (i + 1);
  return;
}

void
level238 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x98')
    level239 (i + 1);
  return;
}

void
level237 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7f')
    level238 (i + 1);
  return;
}

void
level236 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc9')
    level237 (i + 1);
  return;
}

void
level235 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x16')
    level236 (i + 1);
  return;
}

void
level234 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x09')
    level235 (i + 1);
  return;
}

void
level233 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xed')
    level234 (i + 1);
  return;
}

void
level232 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xab')
    level233 (i + 1);
  return;
}

void
level231 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x40')
    level232 (i + 1);
  return;
}

void
level230 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x06')
    level231 (i + 1);
  return;
}

void
level229 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2f')
    level230 (i + 1);
  return;
}

void
level228 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x58')
    level229 (i + 1);
  return;
}

void
level227 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x23')
    level228 (i + 1);
  return;
}

void
level226 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xaa')
    level227 (i + 1);
  return;
}

void
level225 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xae')
    level226 (i + 1);
  return;
}

void
level224 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7e')
    level225 (i + 1);
  return;
}

void
level223 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x78')
    level224 (i + 1);
  return;
}

void
level222 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x50')
    level223 (i + 1);
  return;
}

void
level221 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd9')
    level222 (i + 1);
  return;
}

void
level220 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfe')
    level221 (i + 1);
  return;
}

void
level219 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x64')
    level220 (i + 1);
  return;
}

void
level218 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4b')
    level219 (i + 1);
  return;
}

void
level217 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x16')
    level218 (i + 1);
  return;
}

void
level216 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa9')
    level217 (i + 1);
  return;
}

void
level215 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa3')
    level216 (i + 1);
  return;
}

void
level214 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe8')
    level215 (i + 1);
  return;
}

void
level213 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x75')
    level214 (i + 1);
  return;
}

void
level212 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4a')
    level213 (i + 1);
  return;
}

void
level211 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x24')
    level212 (i + 1);
  return;
}

void
level210 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x98')
    level211 (i + 1);
  return;
}

void
level209 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x37')
    level210 (i + 1);
  return;
}

void
level208 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x29')
    level209 (i + 1);
  return;
}

void
level207 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa3')
    level208 (i + 1);
  return;
}

void
level206 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xca')
    level207 (i + 1);
  return;
}

void
level205 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x14')
    level206 (i + 1);
  return;
}

void
level204 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfd')
    level205 (i + 1);
  return;
}

void
level203 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x0b')
    level204 (i + 1);
  return;
}

void
level202 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xba')
    level203 (i + 1);
  return;
}

void
level201 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x30')
    level202 (i + 1);
  return;
}

void
level200 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x24')
    level201 (i + 1);
  return;
}

void
level199 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe0')
    level200 (i + 1);
  return;
}

void
level198 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x58')
    level199 (i + 1);
  return;
}

void
level197 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xae')
    level198 (i + 1);
  return;
}

void
level196 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x6a')
    level197 (i + 1);
  return;
}

void
level195 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x15')
    level196 (i + 1);
  return;
}

void
level194 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd4')
    level195 (i + 1);
  return;
}

void
level193 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x1d')
    level194 (i + 1);
  return;
}

void
level192 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf4')
    level193 (i + 1);
  return;
}

void
level191 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3a')
    level192 (i + 1);
  return;
}

void
level190 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3f')
    level191 (i + 1);
  return;
}

void
level189 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x35')
    level190 (i + 1);
  return;
}

void
level188 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x95')
    level189 (i + 1);
  return;
}

void
level187 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3f')
    level188 (i + 1);
  return;
}

void
level186 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x1f')
    level187 (i + 1);
  return;
}

void
level185 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd4')
    level186 (i + 1);
  return;
}

void
level184 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x65')
    level185 (i + 1);
  return;
}

void
level183 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x16')
    level184 (i + 1);
  return;
}

void
level182 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x99')
    level183 (i + 1);
  return;
}

void
level181 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xee')
    level182 (i + 1);
  return;
}

void
level180 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x0b')
    level181 (i + 1);
  return;
}

void
level179 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8a')
    level180 (i + 1);
  return;
}

void
level178 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4d')
    level179 (i + 1);
  return;
}

void
level177 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8c')
    level178 (i + 1);
  return;
}

void
level176 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x49')
    level177 (i + 1);
  return;
}

void
level175 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x94')
    level176 (i + 1);
  return;
}

void
level174 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x67')
    level175 (i + 1);
  return;
}

void
level173 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfa')
    level174 (i + 1);
  return;
}

void
level172 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd1')
    level173 (i + 1);
  return;
}

void
level171 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd6')
    level172 (i + 1);
  return;
}

void
level170 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb3')
    level171 (i + 1);
  return;
}

void
level169 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x63')
    level170 (i + 1);
  return;
}

void
level168 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x18')
    level169 (i + 1);
  return;
}

void
level167 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5e')
    level168 (i + 1);
  return;
}

void
level166 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3f')
    level167 (i + 1);
  return;
}

void
level165 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xdc')
    level166 (i + 1);
  return;
}

void
level164 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf2')
    level165 (i + 1);
  return;
}

void
level163 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x36')
    level164 (i + 1);
  return;
}

void
level162 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xdc')
    level163 (i + 1);
  return;
}

void
level161 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x01')
    level162 (i + 1);
  return;
}

void
level160 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x97')
    level161 (i + 1);
  return;
}

void
level159 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x28')
    level160 (i + 1);
  return;
}

void
level158 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb5')
    level159 (i + 1);
  return;
}

void
level157 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x04')
    level158 (i + 1);
  return;
}

void
level156 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x01')
    level157 (i + 1);
  return;
}

void
level155 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9f')
    level156 (i + 1);
  return;
}

void
level154 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x82')
    level155 (i + 1);
  return;
}

void
level153 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x08')
    level154 (i + 1);
  return;
}

void
level152 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x36')
    level153 (i + 1);
  return;
}

void
level151 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe2')
    level152 (i + 1);
  return;
}

void
level150 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb0')
    level151 (i + 1);
  return;
}

void
level149 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc1')
    level150 (i + 1);
  return;
}

void
level148 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x33')
    level149 (i + 1);
  return;
}

void
level147 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf6')
    level148 (i + 1);
  return;
}

void
level146 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa6')
    level147 (i + 1);
  return;
}

void
level145 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xca')
    level146 (i + 1);
  return;
}

void
level144 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x96')
    level145 (i + 1);
  return;
}

void
level143 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd9')
    level144 (i + 1);
  return;
}

void
level142 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x03')
    level143 (i + 1);
  return;
}

void
level141 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x6a')
    level142 (i + 1);
  return;
}

void
level140 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9f')
    level141 (i + 1);
  return;
}

void
level139 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x35')
    level140 (i + 1);
  return;
}

void
level138 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2b')
    level139 (i + 1);
  return;
}

void
level137 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xca')
    level138 (i + 1);
  return;
}

void
level136 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf2')
    level137 (i + 1);
  return;
}

void
level135 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xcb')
    level136 (i + 1);
  return;
}

void
level134 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9c')
    level135 (i + 1);
  return;
}

void
level133 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5c')
    level134 (i + 1);
  return;
}

void
level132 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x98')
    level133 (i + 1);
  return;
}

void
level131 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4b')
    level132 (i + 1);
  return;
}

void
level130 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x34')
    level131 (i + 1);
  return;
}

void
level129 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa5')
    level130 (i + 1);
  return;
}

void
level128 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2c')
    level129 (i + 1);
  return;
}

void
level127 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x13')
    level128 (i + 1);
  return;
}

void
level126 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3f')
    level127 (i + 1);
  return;
}

void
level125 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8e')
    level126 (i + 1);
  return;
}

void
level124 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x11')
    level125 (i + 1);
  return;
}

void
level123 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9a')
    level124 (i + 1);
  return;
}

void
level122 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xed')
    level123 (i + 1);
  return;
}

void
level121 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x94')
    level122 (i + 1);
  return;
}

void
level120 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x26')
    level121 (i + 1);
  return;
}

void
level119 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xdd')
    level120 (i + 1);
  return;
}

void
level118 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xca')
    level119 (i + 1);
  return;
}

void
level117 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3c')
    level118 (i + 1);
  return;
}

void
level116 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd4')
    level117 (i + 1);
  return;
}

void
level115 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd0')
    level116 (i + 1);
  return;
}

void
level114 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x52')
    level115 (i + 1);
  return;
}

void
level113 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9b')
    level114 (i + 1);
  return;
}

void
level112 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2c')
    level113 (i + 1);
  return;
}

void
level111 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf5')
    level112 (i + 1);
  return;
}

void
level110 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x94')
    level111 (i + 1);
  return;
}

void
level109 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x08')
    level110 (i + 1);
  return;
}

void
level108 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x82')
    level109 (i + 1);
  return;
}

void
level107 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc8')
    level108 (i + 1);
  return;
}

void
level106 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x99')
    level107 (i + 1);
  return;
}

void
level105 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb2')
    level106 (i + 1);
  return;
}

void
level104 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfa')
    level105 (i + 1);
  return;
}

void
level103 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf2')
    level104 (i + 1);
  return;
}

void
level102 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x31')
    level103 (i + 1);
  return;
}

void
level101 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd9')
    level102 (i + 1);
  return;
}

void
level100 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x52')
    level101 (i + 1);
  return;
}

void
level99 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd4')
    level100 (i + 1);
  return;
}

void
level98 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x51')
    level99 (i + 1);
  return;
}

void
level97 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x60')
    level98 (i + 1);
  return;
}

void
level96 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x04')
    level97 (i + 1);
  return;
}

void
level95 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9c')
    level96 (i + 1);
  return;
}

void
level94 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc3')
    level95 (i + 1);
  return;
}

void
level93 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x0b')
    level94 (i + 1);
  return;
}

void
level92 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xba')
    level93 (i + 1);
  return;
}

void
level91 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe3')
    level92 (i + 1);
  return;
}

void
level90 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2a')
    level91 (i + 1);
  return;
}

void
level89 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x0f')
    level90 (i + 1);
  return;
}

void
level88 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7a')
    level89 (i + 1);
  return;
}

void
level87 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc1')
    level88 (i + 1);
  return;
}

void
level86 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x14')
    level87 (i + 1);
  return;
}

void
level85 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x86')
    level86 (i + 1);
  return;
}

void
level84 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc7')
    level85 (i + 1);
  return;
}

void
level83 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xdf')
    level84 (i + 1);
  return;
}

void
level82 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x39')
    level83 (i + 1);
  return;
}

void
level81 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc6')
    level82 (i + 1);
  return;
}

void
level80 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe0')
    level81 (i + 1);
  return;
}

void
level79 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2b')
    level80 (i + 1);
  return;
}

void
level78 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x2f')
    level79 (i + 1);
  return;
}

void
level77 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x1b')
    level78 (i + 1);
  return;
}

void
level76 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa1')
    level77 (i + 1);
  return;
}

void
level75 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9b')
    level76 (i + 1);
  return;
}

void
level74 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x55')
    level75 (i + 1);
  return;
}

void
level73 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x05')
    level74 (i + 1);
  return;
}

void
level72 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xbf')
    level73 (i + 1);
  return;
}

void
level71 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xde')
    level72 (i + 1);
  return;
}

void
level70 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe4')
    level71 (i + 1);
  return;
}

void
level69 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x06')
    level70 (i + 1);
  return;
}

void
level68 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa2')
    level69 (i + 1);
  return;
}

void
level67 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf6')
    level68 (i + 1);
  return;
}

void
level66 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc1')
    level67 (i + 1);
  return;
}

void
level65 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe9')
    level66 (i + 1);
  return;
}

void
level64 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4c')
    level65 (i + 1);
  return;
}

void
level63 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x54')
    level64 (i + 1);
  return;
}

void
level62 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3b')
    level63 (i + 1);
  return;
}

void
level61 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf8')
    level62 (i + 1);
  return;
}

void
level60 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x84')
    level61 (i + 1);
  return;
}

void
level59 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf3')
    level60 (i + 1);
  return;
}

void
level58 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4e')
    level59 (i + 1);
  return;
}

void
level57 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x17')
    level58 (i + 1);
  return;
}

void
level56 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x98')
    level57 (i + 1);
  return;
}

void
level55 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x63')
    level56 (i + 1);
  return;
}

void
level54 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xb5')
    level55 (i + 1);
  return;
}

void
level53 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x15')
    level54 (i + 1);
  return;
}

void
level52 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7d')
    level53 (i + 1);
  return;
}

void
level51 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4b')
    level52 (i + 1);
  return;
}

void
level50 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x45')
    level51 (i + 1);
  return;
}

void
level49 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xde')
    level50 (i + 1);
  return;
}

void
level48 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3c')
    level49 (i + 1);
  return;
}

void
level47 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8c')
    level48 (i + 1);
  return;
}

void
level46 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x05')
    level47 (i + 1);
  return;
}

void
level45 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd4')
    level46 (i + 1);
  return;
}

void
level44 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x46')
    level45 (i + 1);
  return;
}

void
level43 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7e')
    level44 (i + 1);
  return;
}

void
level42 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xbe')
    level43 (i + 1);
  return;
}

void
level41 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x40')
    level42 (i + 1);
  return;
}

void
level40 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x26')
    level41 (i + 1);
  return;
}

void
level39 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa1')
    level40 (i + 1);
  return;
}

void
level38 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9a')
    level39 (i + 1);
  return;
}

void
level37 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa5')
    level38 (i + 1);
  return;
}

void
level36 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xfe')
    level37 (i + 1);
  return;
}

void
level35 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x8f')
    level36 (i + 1);
  return;
}

void
level34 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xe0')
    level35 (i + 1);
  return;
}

void
level33 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x31')
    level34 (i + 1);
  return;
}

void
level32 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x0c')
    level33 (i + 1);
  return;
}

void
level31 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd3')
    level32 (i + 1);
  return;
}

void
level30 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x0c')
    level31 (i + 1);
  return;
}

void
level29 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x3d')
    level30 (i + 1);
  return;
}

void
level28 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xff')
    level29 (i + 1);
  return;
}

void
level27 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf5')
    level28 (i + 1);
  return;
}

void
level26 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x17')
    level27 (i + 1);
  return;
}

void
level25 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x7e')
    level26 (i + 1);
  return;
}

void
level24 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xbf')
    level25 (i + 1);
  return;
}

void
level23 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x74')
    level24 (i + 1);
  return;
}

void
level22 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x23')
    level23 (i + 1);
  return;
}

void
level21 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x59')
    level22 (i + 1);
  return;
}

void
level20 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x9a')
    level21 (i + 1);
  return;
}

void
level19 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa4')
    level20 (i + 1);
  return;
}

void
level18 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa9')
    level19 (i + 1);
  return;
}

void
level17 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x74')
    level18 (i + 1);
  return;
}

void
level16 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x45')
    level17 (i + 1);
  return;
}

void
level15 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc0')
    level16 (i + 1);
  return;
}

void
level14 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xc5')
    level15 (i + 1);
  return;
}

void
level13 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x5e')
    level14 (i + 1);
  return;
}

void
level12 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xca')
    level13 (i + 1);
  return;
}

void
level11 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf4')
    level12 (i + 1);
  return;
}

void
level10 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x42')
    level11 (i + 1);
  return;
}

void
level9 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x4f')
    level10 (i + 1);
  return;
}

void
level8 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xa9')
    level9 (i + 1);
  return;
}

void
level7 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xf8')
    level8 (i + 1);
  return;
}

void
level6 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x06')
    level7 (i + 1);
  return;
}

void
level5 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x28')
    level6 (i + 1);
  return;
}

void
level4 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\xd3')
    level5 (i + 1);
  return;
}

void
level3 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x05')
    level4 (i + 1);
  return;
}

void
level2 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x50')
    level3 (i + 1);
  return;
}

void
level1 (int i)
{
  char c;
  scanf("%c", &c);
  flag[i] ^= c;
  if (c == '\x69')
    level2 (i + 1);
  return;
}

int
main ()
{
  level1 (0);
  return 0;
}

