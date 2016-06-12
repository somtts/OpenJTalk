/* ----------------------------------------------------------------- */
/*           The Japanese TTS System "Open JTalk"                    */
/*           developed by HTS Working Group                          */
/*           http://open-jtalk.sourceforge.net/                      */
/* ----------------------------------------------------------------- */
/*                                                                   */
/*  Copyright (c) 2008-2015  Nagoya Institute of Technology          */
/*                           Department of Computer Science          */
/*                                                                   */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms, with or        */
/* without modification, are permitted provided that the following   */
/* conditions are met:                                               */
/*                                                                   */
/* - Redistributions of source code must retain the above copyright  */
/*   notice, this list of conditions and the following disclaimer.   */
/* - Redistributions in binary form must reproduce the above         */
/*   copyright notice, this list of conditions and the following     */
/*   disclaimer in the documentation and/or other materials provided */
/*   with the distribution.                                          */
/* - Neither the name of the HTS working group nor the names of its  */
/*   contributors may be used to endorse or promote products derived */
/*   from this software without specific prior written permission.   */
/*                                                                   */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND            */
/* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,       */
/* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF          */
/* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE          */
/* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS */
/* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,          */
/* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED   */
/* TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON */
/* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,   */
/* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY    */
/* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE           */
/* POSSIBILITY OF SUCH DAMAGE.                                       */
/* ----------------------------------------------------------------- */

#ifndef NJD_SET_DIGIT_RULE_H
#define NJD_SET_DIGIT_RULE_H

#ifdef __cplusplus
#define NJD_SET_DIGIT_RULE_H_START extern "C" {
#define NJD_SET_DIGIT_RULE_H_END   }
#else
#define NJD_SET_DIGIT_RULE_H_START
#define NJD_SET_DIGIT_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD_SET_DIGIT_RULE_H_START;

#define NJD_SET_DIGIT_KAZU "\xbf\xf4"
#define NJD_SET_DIGIT_SUUSETSUZOKU "\xbf\xf4\xc0\xdc\xc2\xb3"
#define NJD_SET_DIGIT_JOSUUSHI "\xbd\xf5\xbf\xf4\xbb\xec"
#define NJD_SET_DIGIT_FUKUSHIKANOU "\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd"
#define NJD_SET_DIGIT_HAIHUN1 "\xa1\xbd"     /* horizontal bar */
#define NJD_SET_DIGIT_HAIHUN2 "\xa1\xdd"     /* minus sign */
#define NJD_SET_DIGIT_HAIHUN3 "\xa1\xbe"     /* hyphen */
#define NJD_SET_DIGIT_HAIHUN4 "\xa1\xbd"     /* em dash */
#define NJD_SET_DIGIT_HAIHUN5 "\xa1\xdd"     /* fullwidth hyphen-minus */
#define NJD_SET_DIGIT_KAKKO1 "\xa1\xca"
#define NJD_SET_DIGIT_KAKKO2 "\xa1\xcb"
#define NJD_SET_DIGIT_BANGOU "\xc8\xd6\xb9\xe6"
#define NJD_SET_DIGIT_TEN1 "\xa1\xa5"
#define NJD_SET_DIGIT_TEN2 "\xa1\xa6"
#define NJD_SET_DIGIT_TEN_FEATURE "\xa1\xa5,\xcc\xbe\xbb\xec,\xc0\xdc\xc8\xf8,\xbd\xf5\xbf\xf4\xbb\xec,*,*,*,\xa1\xa5,\xa5\xc6\xa5\xf3,\xa5\xc6\xa5\xf3,0/2,*,-1"
#define NJD_SET_DIGIT_ZERO1 "\xa1\xbb"
#define NJD_SET_DIGIT_ZERO2 "\xa3\xb0"
#define NJD_SET_DIGIT_ZERO_BEFORE_DP "\xa5\xec\xa1\xbc"
#define NJD_SET_DIGIT_ZERO_AFTER_DP "\xa5\xbc\xa5\xed"
#define NJD_SET_DIGIT_TWO "\xc6\xf3"
#define NJD_SET_DIGIT_TWO_BEFORE_DP "\xa5\xcb\xa1\xbc"
#define NJD_SET_DIGIT_TWO_AFTER_DP "\xa5\xcb\xa1\xbc"
#define NJD_SET_DIGIT_FIVE "\xb8\xde"
#define NJD_SET_DIGIT_FIVE_BEFORE_DP "\xa5\xb4\xa1\xbc"
#define NJD_SET_DIGIT_FIVE_AFTER_DP "\xa5\xb4\xa1\xbc"
#define NJD_SET_DIGIT_NIN "\xbf\xcd"
#define NJD_SET_DIGIT_GATSU "\xb7\xee"
#define NJD_SET_DIGIT_NICHI "\xc6\xfc"
#define NJD_SET_DIGIT_NICHIKAN "\xc6\xfc\xb4\xd6"
#define NJD_SET_DIGIT_ONE "\xb0\xec"
#define NJD_SET_DIGIT_TSUITACHI "\xb0\xec\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xb0\xec\xc6\xfc,\xa5\xc4\xa5\xa4\xa5\xbf\xa5\xc1,\xa5\xc4\xa5\xa4\xa5\xbf\xa5\xc1,4/4,*"
#define NJD_SET_DIGIT_FOUR "\xbb\xcd"
#define NJD_SET_DIGIT_TEN "\xbd\xbd"
#define NJD_SET_DIGIT_JUYOKKA "\xbd\xbd\xbb\xcd\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbd\xbd\xbb\xcd\xc6\xfc,\xa5\xb8\xa5\xe5\xa5\xa6\xa5\xe8\xa5\xc3\xa5\xab,\xa5\xb8\xa5\xe5\xa1\xbc\xa5\xe8\xa5\xc3\xa5\xab,1/5,*"
#define NJD_SET_DIGIT_JUYOKKAKAN "\xbd\xbd\xbb\xcd\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbd\xbd\xbb\xcd\xc6\xfc\xb4\xd6,\xa5\xb8\xa5\xe5\xa5\xa6\xa5\xe8\xa5\xc3\xa5\xab\xa5\xab\xa5\xf3,\xa5\xb8\xa5\xe5\xa1\xbc\xa5\xe8\xa5\xc3\xa5\xab\xa5\xab\xa5\xf3,5/7,*"
#define NJD_SET_DIGIT_NIJU "\xc6\xf3\xbd\xbd,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xc6\xf3\xbd\xbd,\xa5\xcb\xa5\xb8\xa5\xe5\xa5\xa6,\xa5\xcb\xa5\xb8\xa5\xe5\xa1\xbc,1/3,*"
#define NJD_SET_DITIT_YOKKA "\xbb\xcd\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbb\xcd\xc6\xfc,\xa5\xe8\xa5\xc3\xa5\xab,\xa5\xe8\xa5\xc3\xa5\xab,0/3,*,0"
#define NJD_SET_DIGIT_YOKKAKAN "\xbb\xcd\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbb\xcd\xc6\xfc\xb4\xd6,\xa5\xe8\xa5\xc3\xa5\xab\xa5\xab\xa5\xf3,\xa5\xe8\xa5\xc3\xa5\xab\xa5\xab\xa5\xf3,3/5,*,0"
#define NJD_SET_DITIT_HATSUKA "\xc6\xf3\xbd\xbd\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xc6\xf3\xbd\xbd\xc6\xfc,\xa5\xcf\xa5\xc4\xa5\xab,\xa5\xcf\xa5\xc4\xa5\xab,0/3,*"
#define NJD_SET_DIGIT_HATSUKAKAN "\xc6\xf3\xbd\xbd\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xc6\xf3\xbd\xbd\xc6\xfc\xb4\xd6,\xa5\xcf\xa5\xc4\xa5\xab\xa5\xab\xa5\xf3,\xa5\xcf\xa5\xc4\xa5\xab\xa5\xab\xa5\xf3,3/5,*"

static const char *njd_set_digit_rule_numeral_list1[] = {
   "\xa1\xfb", "0", "\xa1\xbb",
   "\xa3\xb1", "1", "\xb0\xec",
   "\xa3\xb2", "2", "\xc6\xf3",
   "\xa3\xb3", "3", "\xbb\xb0",
   "\xa3\xb4", "4", "\xbb\xcd",
   "\xa3\xb5", "5", "\xb8\xde",
   "\xa3\xb6", "6", "\xcf\xbb",
   "\xa3\xb7", "7", "\xbc\xb7",
   "\xa3\xb8", "8", "\xc8\xac",
   "\xa3\xb9", "9", "\xb6\xe5",
   "\xb0\xec", "1", "\xb0\xec",
   "\xc6\xf3", "2", "\xc6\xf3",
   "\xbb\xb0", "3", "\xbb\xb0",
   "\xbb\xcd", "4", "\xbb\xcd",
   "\xb8\xde", "5", "\xb8\xde",
   "\xcf\xbb", "6", "\xcf\xbb",
   "\xbc\xb7", "7", "\xbc\xb7",
   "\xc8\xac", "8", "\xc8\xac",
   "\xb6\xe5", "9", "\xb6\xe5",
   "\xa4\xa4\xa4\xc1", "1", "\xb0\xec",
   "\xa4\xcb", "2", "\xc6\xf3",
   "\xa4\xb5\xa4\xf3", "3", "\xbb\xb0",
   "\xa4\xe8\xa4\xf3", "4", "\xbb\xcd",
   "\xa4\xb4", "5", "\xb8\xde",
   "\xa4\xed\xa4\xaf", "6", "\xcf\xbb",
   "\xa4\xca\xa4\xca", "7", "\xbc\xb7",
   "\xa4\xcf\xa4\xc1", "8", "\xc8\xac",
   "\xa4\xad\xa4\xe5\xa4\xa6", "9", "\xb6\xe5",
   "\xa1\xbb", "0", "\xa1\xbb",
   "\xa3\xb0", "0", "\xa3\xb0",
   "\xb0\xed", "1", "\xb0\xec",
   "\xc6\xf5", "2", "\xc6\xf3",
   "\xec\xc8", "2", "\xc6\xf3",
   "\xa5\xcb", "2", "\xc6\xf3",
   "\xbb\xb2", "3", "\xbb\xb0",
   "\xa4\xb7", "4", "\xbb\xcd",
   "\xa4\xb7\xa4\xc1", "7", "\xbc\xb7",
   "\xa4\xaf", "9", "\xb6\xe5",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numeral_list2[] = {
   "",
   "\xbd\xbd,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xbd\xbd,\xa5\xb8\xa5\xe5\xa5\xa6,\xa5\xb8\xa5\xe5\xa1\xbc,1/2,*",
   "\xc9\xb4,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xc9\xb4,\xa5\xd2\xa5\xe3\xa5\xaf,\xa5\xd2\xa5\xe3\xa5\xaf,2/2,*",
   "\xc0\xe9,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xc0\xe9,\xa5\xbb\xa5\xf3,\xa5\xbb\xa5\xf3,1/2,*",
   NULL
};

static const char *njd_set_digit_rule_numeral_list3[] = {
   "",
   "\xcb\xfc,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xcb\xfc,\xa5\xde\xa5\xf3,\xa5\xde\xa5\xf3,1/2,*",
   "\xb2\xaf,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xb2\xaf,\xa5\xaa\xa5\xaf,\xa5\xaa\xa5\xaf,1/2,*",
   "\xc3\xfb,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xc3\xfb,\xa5\xc1\xa5\xe7\xa5\xa6,\xa5\xc1\xa5\xe7\xa1\xbc,1/2,C3",
   "\xb5\xfe,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xb5\xfe,\xa5\xb1\xa5\xa4,\xa5\xb1\xa1\xbc,1/2,*",
   "\xd4\xb6,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xd4\xb6,\xa5\xac\xa5\xa4,\xa5\xac\xa5\xa4,1/2,*",
   "\xb2\xd3\xcd\xbd,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xb2\xd3\xcd\xbd,\xa5\xb8\xa5\xe7,\xa5\xb8\xa5\xe7,1/1,*", /* none in this charcode */
   "\xbe\xf7,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xbe\xf7,\xa5\xb8\xa5\xe7\xa5\xa6,\xa5\xb8\xa5\xe7\xa1\xbc,1/2,*",
   "\xb9\xc2,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xb9\xc2,\xa5\xb3\xa5\xa6,\xa5\xb3\xa5\xa6,1/2,*",
   "\xb4\xc2,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xb4\xc2,\xa5\xab\xa5\xf3,\xa5\xab\xa5\xf3,1/2,*",
   "\xc0\xb5,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xc0\xb5,\xa5\xbb\xa5\xa4,\xa5\xbb\xa1\xbc,1/2,*",
   "\xba\xdc,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xba\xdc,\xa5\xb5\xa5\xa4,\xa5\xb5\xa5\xa4,1/2,*",
   "\xb6\xcb,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xb6\xcb,\xa5\xb4\xa5\xaf,\xa5\xb4\xa5\xaf,1/2,*",
   "\xb9\xb1\xb2\xcf\xba\xbb,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xb9\xb1\xb2\xcf\xba\xbb,\xa5\xb4\xa5\xa6\xa5\xac\xa5\xb7\xa5\xe3,\xa5\xb4\xa5\xa6\xa5\xac\xa5\xb7\xa5\xe3,1/4,*",
   "\xb0\xa4\xc1\xce\xb5\xc0,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xb0\xa4\xc1\xce\xb5\xc0,\xa5\xa2\xa5\xbd\xa5\xa6\xa5\xae,\xa5\xa2\xa5\xbd\xa1\xbc\xa5\xae,2/4,*",
   "\xc6\xe1\xcd\xb3\xc2\xbe,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xc6\xe1\xcd\xb3\xc2\xbe,\xa5\xca\xa5\xe6\xa5\xbf,\xa5\xca\xa5\xe6\xa5\xbf,1/3,*",
   "\xc9\xd4\xb2\xc4\xbb\xd7\xb5\xc4,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xc9\xd4\xb2\xc4\xbb\xd7\xb5\xc4,\xa5\xd5\xa5\xab\xa5\xb7\xa5\xae,\xa5\xd5\xa5\xab\xa5\xb7\xa5\xae,2/4,*",
   "\xcc\xb5\xce\xcc\xc2\xe7\xbf\xf4,\xcc\xbe\xbb\xec,\xbf\xf4,*,*,*,*,\xcc\xb5\xce\xcc\xc2\xe7\xbf\xf4,\xa5\xe0\xa5\xea\xa5\xe7\xa5\xa6\xa5\xbf\xa5\xa4\xa5\xb9\xa5\xa6,\xa5\xe0\xa5\xea\xa5\xe7\xa1\xbc\xa5\xbf\xa5\xa4\xa5\xb9\xa1\xbc,6/7,*",
   NULL
};

static const char *njd_set_digit_rule_numeral_list4[] = {
   "\xb0\xec", "\xc6\xf3", "\xbb\xb0", "\xbb\xcd", "\xb8\xde", "\xcf\xbb", "\xbc\xb7", "\xc8\xac", "\xb6\xe5", "\xb2\xbf", "\xb4\xf6", "\xbf\xf4",
   NULL
};

static const char *njd_set_digit_rule_numeral_list5[] = {
   "\xbd\xbd", "\xc9\xb4", "\xc0\xe9", "\xcb\xfc", "\xb2\xaf", "\xc3\xfb", "\xb5\xfe", "\xd4\xb6",
   "\xb2\xd3\xcd\xbd", /* none in this charcode */
   "\xbe\xf7", "\xb9\xc2", "\xb4\xc2", "\xc0\xb5", "\xba\xdc", "\xb6\xcb",
   "\xb9\xb1\xb2\xcf\xba\xbb", "\xb0\xa4\xc1\xce\xb5\xc0", "\xc6\xe1\xcd\xb3\xc2\xbe", "\xc9\xd4\xb2\xc4\xbb\xd7\xb5\xc4", "\xcc\xb5\xce\xcc\xc2\xe7\xbf\xf4",
   NULL
};

static const char *njd_set_digit_rule_numeral_list6[] = {
   "\xc9\xb4", "\xc0\xe9", NULL
};

static const char *njd_set_digit_rule_numeral_list7[] = {
   "\xbb\xb0", "1",
   "\xcf\xbb", "2",
   "\xc8\xac", "2",
   "\xb2\xbf", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_numeral_list8[] = {
   "\xc9\xb4", NULL
};

static const char *njd_set_digit_rule_numeral_list9[] = {
   "\xcf\xbb", "\xa5\xed\xa5\xc3", "0", "2",
   "\xc8\xac", "\xa5\xcf\xa5\xc3", "0", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numeral_list10[] = {
   "\xc0\xe9", "\xc3\xfb", NULL
};

static const char *njd_set_digit_rule_numeral_list11[] = {
   "\xb0\xec", "\xa5\xa4\xa5\xc3", "0", "2",
   "\xc8\xac", "\xa5\xcf\xa5\xc3", "0", "2",
   "\xbd\xbd", "\xa5\xb8\xa5\xe5\xa5\xc3", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1b[] = {
   /* from paper */
   "\xc7\xaf" /* \xa4\xcd\xa4\xf3 */ , "\xb1\xdf",
   /* from dictionary */
   "\xc7\xaf\xb4\xd6", "\xc7\xaf\xc0\xb8", "\xc7\xaf\xc2\xe5", "\xc7\xaf\xc5\xd9", "\xc7\xaf\xc8\xc7", "\xc7\xaf\xcd\xbe", "\xc7\xaf\xcd\xbe", "\xc7\xaf\xcd\xe8", "\xa4\xa8\xa4\xf3",
   NULL
};

static const char *njd_set_digit_rule_conv_table1b[] = {
   "\xbb\xcd", "\xa5\xe8", "0", "1",
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1c1[] = {
   /* from paper */
   "\xbf\xcd",
   /* from dictionary */
   "\xbf\xcd\xb7\xee", "\xbf\xcd\xc1\xb0", "\xbf\xcd\xc1\xc8",
   NULL
};

static const char *njd_set_digit_rule_conv_table1c1[] = {
   "\xbb\xcd", "\xa5\xe8", "0", "1",
   "\xbc\xb7", "\xa5\xb7\xa5\xc1", "1", "2",
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1c2[] = {
   /* from paper */
   "\xbb\xfe", "\xbb\xfe\xb4\xd6",
   /* from dictionary */
   "\xbb\xfe\xb8\xc2", "\xbb\xfe\xc8\xbe",
   NULL
};

static const char *njd_set_digit_rule_conv_table1c2[] = {
   "\xbb\xcd", "\xa5\xe8", "0", "1",
   "\xbc\xb7", "\xa5\xb7\xa5\xc1", "1", "2",
   "\xb6\xe5", "\xa5\xaf", "0", "1",
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1d[] = {
   /* from paper */
   "\xc6\xfc" /* \xa4\xcb\xa4\xc1 */ ,
   /* from dictionary */
   "\xc6\xfc\xb4\xd6",
   NULL
};

static const char *njd_set_digit_rule_conv_table1d[] = {
   /* "\xbb\xcd", "\xa5\xe8\xa5\xc3", "1", "2", *//* modified */
   "\xbc\xb7", "\xa5\xb7\xa5\xc1", "1", "2",
   "\xb6\xe5", "\xa5\xaf", "0", "1",
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1e[] = {
   /* from paper */
   "\xb7\xee" /* \xa4\xac\xa4\xc4 */ ,
   NULL
};

static const char *njd_set_digit_rule_conv_table1e[] = {
   "\xbb\xcd", "\xa5\xb7", "0", "1",
   "\xbc\xb7", "\xa5\xb7\xa5\xc1", "1", "2",
   "\xb6\xe5", "\xa5\xaf", "0", "1",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1f[] = {
   /* from paper */
   /* "\xb1\xa9", "\xc7\xc4", *//* modified */
   NULL
};

static const char *njd_set_digit_rule_conv_table1f[] = {
   "\xcf\xbb", "\xa5\xed\xa5\xc3", "1", "2",
   "\xc8\xac", "\xa5\xcf\xa5\xc3", "1", "2",
   "\xbd\xbd", "\xa5\xb8\xa5\xe5\xa5\xc3", "1", "2",
   "\xc9\xb4", "\xa5\xd2\xa5\xe3\xa5\xc3", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1g[] = {
   /* from paper */
   "\xb8\xc4", "\xb3\xac", "\xca\xac" /* \xa4\xd5\xa4\xf3 */ , "\xc8\xaf", "\xcb\xdc", "\xc8\xad", "\xb8\xfd", "\xc0\xda\xa4\xec", "\xc8\xa2",
   /* from dictionary */
   "\xa4\xab\xb7\xee", "\xa4\xab\xb9\xf1", "\xa4\xab\xbd\xea", "\xa4\xab\xbe\xf2", "\xa4\xab\xc2\xbc", "\xa4\xab\xc7\xaf", "\xa5\xab\xb7\xee", "\xa5\xab\xb9\xf1", "\xa5\xab\xbb\xfb", "\xa5\xab\xbd\xea", "\xa5\xab\xbe\xf2", "\xa5\xab\xc2\xbc",
   "\xa5\xab\xc5\xb9", "\xa5\xab\xc7\xaf", "\xa5\xb1\xb7\xee", "\xa5\xb1\xb9\xf1", "\xa5\xb1\xbd\xea", "\xa5\xb1\xbe\xf2", "\xa5\xb1\xc2\xbc", "\xa5\xb1\xc7\xaf", "\xa5\xf5\xb7\xee", "\xa5\xf5\xb9\xf1", "\xa5\xf5\xbd\xea",
   "\xa5\xf5\xbe\xf2", "\xa5\xf5\xc2\xbc", "\xa5\xf5\xc7\xaf", "\xa5\xf6\xb7\xee", "\xa5\xf6\xb9\xf1", "\xa5\xf6\xbd\xea", "\xa5\xf6\xbe\xf2", "\xa5\xf6\xc2\xbc", "\xa5\xf6\xc7\xaf", "\xb8\xc4\xb7\xee", "\xb8\xc4\xb8\xfd",
   "\xb8\xc4\xb9\xf1", "\xb8\xc4\xbe\xf2", "\xb8\xc4\xc7\xaf", "\xb2\xd5\xb7\xee", "\xb2\xd5\xb9\xf1", "\xb2\xd5\xbd\xea", "\xb2\xd5\xbe\xf2", "\xb2\xd5\xc7\xaf", "\xa4\xab\xa4\xb1", "\xa4\xaf\xa4\xc0\xa4\xea", "\xa4\xb1\xa4\xbf",
   "\xb2\xc1", "\xb2\xdd", "\xb2\xe8", "\xb2\xf3", "\xb2\xf3\xb4\xf7", "\xb2\xf3\xc0\xb8", "\xb2\xf3\xc0\xef", "\xb2\xf3\xc0\xfe", "\xb2\xf3\xca\xac", "\xb3\xa4\xce\xa4", "\xa5\xab\xa5\xa4\xa5\xea", "\xb3\xbd", "\xb3\xd1",
   "\xb3\xf4", "\xb4\xa7", "\xb4\xac", "\xb4\xcc", "\xb4\xd3", "\xb4\xd3\xcc\xdc", "\xb4\xd6", "\xb4\xf0", "\xb4\xfc", "\xb4\xfc\xc0\xb8", "\xb5\xa1", "\xb5\xa4\xb0\xb5", "\xb5\xa8", "\xb5\xb3",
   "\xb5\xd2", "\xb5\xd3", "\xb5\xe5", "\xb5\xe9", "\xb6\xb6", "\xb6\xc9", "\xb6\xca", "\xb6\xcb", "\xbd\xc5\xa4\xcd", "\xb6\xd4", "\xb6\xe2", "\xb6\xe7", "\xb6\xe8", "\xb6\xed", "\xb7\xd7",
   "\xb7\xe5", "\xa5\xb1\xa5\xbf", "\xb9\xbb", "\xb9\xc1", "\xb9\xd4", "\xb9\xe0", "\xc1\xc8", "\xb7\xef", "\xb8\xae", "\xb8\xc0", "\xb8\xcd", "\xb8\xd0", "\xb8\xf7\xc7\xaf", "\xc0\xd0",
   "\xa4\xd4\xa4\xad", "\xa4\xda\xa4\xf3", "\xc7\xc8", "\xc7\xc9", "\xc7\xd4", "\xc7\xd5", "\xc7\xef", "\xc7\xf1", "\xc8\xc7", "\xc8\xc8", "\xc8\xc9", "\xc9\xa4", "\xc9\xa4", "\xc9\xae", "\xc9\xb6",
   "\xc9\xbc", "\xc9\xca", "\xca\xac\xb4\xd6", "\xca\xac\xcc\xdc", "\xca\xd2", "\xca\xd2", "\xca\xd3", "\xca\xd4", "\xca\xd5", "\xca\xd7", "\xca\xe2", "\xca\xe2", "\xca\xf3", "\xca\xfd", "\xca\xfd",
   "\xcb\xa1", "\xcb\xdc\xce\xa9\xa4\xc6", "\xc6\xac\xbf\xc8",
   NULL
};

static const char *njd_set_digit_rule_conv_table1g[] = {
   "\xb0\xec", "\xa5\xa4\xa5\xc3", "1", "2",
   "\xcf\xbb", "\xa5\xed\xa5\xc3", "1", "2",
   "\xc8\xac", "\xa5\xcf\xa5\xc3", "1", "2",
   "\xbd\xbd", "\xa5\xb8\xa5\xe5\xa5\xc3", "1", "2",
   "\xc9\xb4", "\xa5\xd2\xa5\xe3\xa5\xc3", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1h[] = {
   /* from paper */
   "\xa1\xa5", "\xa1\xa6", "\xba\xcd", "\xc6\xac", "\xc3\xe5", "\xc2\xad", "\xbc\xdc", "\xc4\xda", "\xc4\xcc\xa4\xea", "\xa5\xbb\xa5\xf3\xa5\xc1", "\xa5\xb7\xa1\xbc\xa5\xb7\xa1\xbc",
   /* from dictionary */
   "\xa3\xc3\xa3\xc3", "\xa3\xe3\xa3\xe3", "\xa3\xe3\xa3\xed", "\xa5\xb5\xa5\xa4\xa5\xaf\xa5\xeb", "\xa5\xb5\xa5\xf3\xa5\xc1\xa1\xbc\xa5\xe0", "\xa5\xb7\xa1\xbc\xa5\xba\xa5\xf3", "\xa5\xb7\xa1\xbc\xa5\xc8", "\xa5\xb7\xa5\xea\xa5\xf3\xa5\xb0",
   "\xa5\xb7\xa5\xf3\xa5\xac\xa5\xdd\xa1\xbc\xa5\xeb\xa5\xc9\xa5\xeb", "\xa5\xb9\xa5\xa4\xa5\xb9\xa5\xd5\xa5\xe9\xa5\xf3", "\xa5\xb9\xa5\xa6\xa5\xa7\xa1\xbc\xa5\xc7\xa5\xf3\xa5\xaf\xa5\xed\xa1\xbc\xa5\xcd", "\xa5\xb9\xa5\xaf\xa5\xec", "\xa5\xbb\xa5\xc3\xa5\xc8", "\xa5\xbb\xa5\xf3\xa5\xc8",
   "\xa5\xbd\xa5\xeb", "\xa5\xbe\xa1\xbc\xa5\xf3", "\xc1\xb8", "\xc1\xb8", "\xb4\xc8", "\xba\xb9", "\xba\xb9\xa4\xb7", "\xba\xd0", "\xba\xd0\xbb\xf9", "\xba\xee", "\xba\xfd", "\xba\xfe", "\xbb\xae", "\xdc\xaa",
   "\xe7\xdb", "\xbb\xd2", "\xbb\xeb", "\xbc\xb0", "\xbc\xba", "\xbc\xbc", "\xbc\xcd", "\xbc\xd2", "\xbc\xdb", "\xbc\xef", "\xbc\xf3", "\xbc\xfe", "\xbc\xfe\xb4\xf7", "\xbc\xfe\xc7\xaf", "\xbd\xa3",
   "\xbd\xb5", "\xbd\xb5\xb4\xd6", "\xbd\xb8", "\xbd\xc9", "\xbd\xea", "\xbe\xa1", "\xbe\xa3", "\xbe\xb2", "\xbe\xcf", "\xbf\xa7", "\xbf\xa7", "\xbf\xa9", "\xbf\xc6\xc5\xf9", "\xbf\xca",
   "\xbf\xca\xbf\xf4", "\xc9\xca", "\xa4\xb9\xa4\xb8", "\xa4\xbd\xa4\xa6", "\xa4\xbd\xa4\xed\xa4\xa4", "\xb6\xda", "\xbf\xf4", "\xc0\xa3", "\xc0\xa4", "\xc0\xc9", "\xc0\xca", "\xc0\xd0", "\xc0\xe1", "\xc0\xef",
   "\xc0\xfe", "\xc1\xaa", "\xc1\xac", "\xc1\xd8", "\xc1\xea", "\xc2\xb7", "\xa4\xbf\xa4\xd3", "\xa4\xc4\xa4\xab\xa4\xdf", "\xa4\xc4\xa4\xac\xa4\xa4", "\xa4\xc4\xa4\xd6", "\xa4\xc4\xa4\xde\xa4\xdf", "\xa4\xc4\xc0\xde",
   "\xa4\xc4\xc0\xde\xa4\xea", "\xa4\xc8\xa4\xaa\xa4\xea", "\xa4\xc8\xa4\xad", "\xa4\xc8\xa4\xb3\xa4\xed", "\xa4\xc8\xa4\xbb", "\xb6\xcc", "\xb7\xee", "\xbc\xea", "\xc2\xab", "\xc2\xb3\xa4\xad", "\xc2\xce", "\xc2\xd0",
   "\xc2\xee", "\xc3\xae", "\xc8\xbf", "\xc3\xfa", "\xc3\xfa\xcc\xdc", "\xc4\xbb", "\xc4\xcc", "\xc4\xcf\xa4\xdf", "\xc4\xfa", "\xc5\xa9", "\xc5\xb9", "\xc5\xbe", "\xc5\xc0", "\xc5\xcd", "\xc5\xef",
   "\xc5\xf0", "\xc5\xf4", "\xc5\xf9", "\xc5\xf9\xc0\xca", "\xc5\xf9\xc3\xcf", "\xc5\xf9\xca\xac", "\xc5\xfa", "\xc6\xc0", "\xc6\xd5", "\xce\xb3", "\xbc\xef\xce\xe0", "\xba\xd0\xc7\xcf", "\xc0\xa4\xb5\xaa",
   "\xbc\xd6\xbc\xef",
   NULL
};

static const char *njd_set_digit_rule_conv_table1h[] = {
   "\xb0\xec", "\xa5\xa4\xa5\xc3", "1", "2",
   "\xc8\xac", "\xa5\xcf\xa5\xc3", "1", "2",
   "\xbd\xbd", "\xa5\xb8\xa5\xe5\xa5\xc3", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1i[] = {
   /* from paper */
   "\xa5\xad\xa5\xed", "\xa5\xab\xa5\xed\xa5\xea\xa1\xbc",
   /* from dictionary */
   "\xa3\xe3\xa3\xe1\xa3\xec", "\xa3\xeb\xa3\xe2", "\xa3\xeb\xa3\xe7", "\xa3\xeb\xa3\xec", "\xa3\xeb\xa3\xed", "\xa3\xeb\xa3\xf4", "\xa3\xeb\xa3\xf7", "\xa3\xeb\xa5\xb0\xa5\xe9\xa5\xe0", "\xa3\xeb\xa5\xd0\xa5\xa4\xa5\xc8", "\xa3\xeb\xa5\xd8\xa5\xeb\xa5\xc4",
   "\xa3\xeb\xa5\xe1\xa1\xbc\xa5\xc8\xa5\xeb", "\xa3\xeb\xa5\xea\xa5\xc3\xa5\xc8\xa5\xeb", "\xa3\xeb\xa5\xef\xa5\xc3\xa5\xc8", "\xa5\xab\xa5\xca\xa5\xc0\xa5\xc9\xa5\xeb", "\xa5\xab\xa5\xe9\xa5\xc3\xa5\xc8", "\xa5\xac\xa5\xed\xa5\xf3", "\xa5\xad\xa5\xe5\xa5\xea\xa1\xbc",
   "\xa5\xad\xa5\xed\xa5\xab\xa5\xed\xa5\xea\xa1\xbc", "\xa5\xad\xa5\xed\xa5\xb0\xa5\xe9\xa5\xe0", "\xa5\xad\xa5\xed\xa5\xc8\xa5\xf3", "\xa5\xad\xa5\xed\xa5\xd0\xa5\xa4\xa5\xc8", "\xa5\xad\xa5\xed\xa5\xd8\xa5\xeb\xa5\xc4", "\xa5\xad\xa5\xed\xa5\xe1\xa1\xbc\xa5\xc8\xa5\xeb",
   "\xa5\xad\xa5\xed\xa5\xea\xa5\xc3\xa5\xc8\xa5\xeb", "\xa5\xad\xa5\xed\xa5\xef\xa5\xc3\xa5\xc8", "\xa5\xad\xa5\xed\xa5\xef\xa5\xc3\xa5\xc8\xbb\xfe", "\xa5\xaf\xa5\xe9\xa5\xb9", "\xa5\xaf\xa5\xed\xa1\xbc\xa5\xca", "\xa5\xaf\xa5\xed\xa1\xbc\xa5\xcd", "\xa5\xb0\xa5\xa1\xa5\xe9\xa5\xcb",
   "\xa5\xb1\xa1\xbc\xa5\xb9", "\xa5\xb3\xa1\xbc\xa5\xb9", "\xb6\xce",
   NULL
};

static const char *njd_set_digit_rule_conv_table1i[] = {
   "\xcf\xbb", "\xa5\xed\xa5\xc3", "1", "2",
   "\xbd\xbd", "\xa5\xb8\xa5\xe5\xa5\xc3", "1", "2",
   "\xc9\xb4", "\xa5\xd2\xa5\xe3\xa5\xc3", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1j[] = {
   /* from paper */
   "\xa5\xc8\xa5\xf3",
   /* from dictionary */
   "\xa3\xf4", "\xa5\xbf\xa5\xeb", "\xa5\xc6\xa5\xe9", "\xa5\xc8\xa5\xe9\xa5\xa4",
   NULL
};

static const char *njd_set_digit_rule_conv_table1j[] = {
   "\xb0\xec", "\xa5\xa4\xa5\xc3", "1", "2",
   "\xbd\xbd", "\xa5\xb8\xa5\xe5\xa5\xc3", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class1k[] = {
   /* from paper */
   "\xcb\xbc" /* \xa4\xd5\xa4\xb5 */ , "\xc3\xec", "\xa1\xf3", "\xa5\xdd\xa5\xf3\xa5\xc9",
   /* from dictionary */
   "\xa3\xf0\xa3\xe1", "\xa3\xf0\xa3\xf0\xa3\xed", "\xa5\xd1\xa1\xbc\xa5\xbb\xa5\xf3\xa5\xc8", "\xa5\xd1\xa1\xbc\xa5\xdf\xa5\xeb", "\xa5\xd1\xa5\xb9\xa5\xab\xa5\xeb", "\xa5\xd1\xa5\xc3\xa5\xaf", "\xa5\xd1\xa5\xc3\xa5\xc8", "\xa5\xd4\xa1\xbc\xa5\xd4\xa1\xbc\xa5\xa8\xa5\xe0",
   "\xa5\xd4\xa5\xb3", "\xa5\xda\xa1\xbc\xa5\xb8", "\xca\xc7", "\xa5\xda\xa5\xa2", "\xa5\xda\xa5\xbb\xa5\xbf", "\xa5\xda\xa5\xbd", "\xa5\xda\xa5\xcb\xa1\xbc", "\xa5\xda\xa5\xcb\xa5\xd2", "\xa5\xda\xa5\xf3\xa5\xb9", "\xa5\xdd\xa5\xa4\xa5\xf3\xa5\xc8",
   "\xbf\xb6\xa4\xea", "\xbf\xcb", "\xc2\xde", "\xc4\xa5\xa4\xea", "\xca\xbf\xca\xc6", "\xca\xbf\xca\xfd\xa5\xad\xa5\xed", "\xca\xbf\xca\xfd\xa5\xad\xa5\xed\xa5\xe1\xa1\xbc\xa5\xc8\xa5\xeb", "\xca\xbf\xca\xfd\xa5\xbb\xa5\xf3\xa5\xc1\xa5\xe1\xa1\xbc\xa5\xc8\xa5\xeb",
   "\xca\xbf\xca\xfd\xa5\xe1\xa1\xbc\xa5\xc8\xa5\xeb", "\xc9\xca\xcc\xdc",
   NULL
};

static const char *njd_set_digit_rule_conv_table1k[] = {
   "\xbd\xbd", "\xa5\xb8\xa5\xe5\xa5\xc3", "1", "2",
   NULL, NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2b[] = {
   /* from paper */
   "\xca\xac", "\xc8\xc7", "\xc7\xd4", "\xc8\xaf", "\xc7\xef", "\xc8\xad",
   /* from dictionary */
   "\xc7\xc8", "\xc7\xc9", "\xc7\xf1", "\xc8\xc8", "\xc8\xc9", "\xc9\xca", "\xca\xac\xb4\xd6", "\xca\xac\xcc\xdc", "\xca\xd2", "\xca\xd3", "\xca\xd4", "\xca\xd5", "\xca\xd7", "\xca\xe2", "\xca\xf3",
   "\xca\xfd",
   NULL
};

static const char *njd_set_digit_rule_conv_table2b[] = {
   "\xb0\xec", "2",
   "\xbb\xb0", "2",
   "\xbb\xcd", "2",
   "\xcf\xbb", "2",
   "\xc8\xac", "2",
   "\xbd\xbd", "2",
   "\xc9\xb4", "2",
   "\xc0\xe9", "2",
   "\xcb\xfc", "2",
   "\xb2\xbf", "2",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2c[] = {
   /* from paper */
   "\xcb\xdc", "\xc9\xa4", "\xc9\xbc", "\xc9\xb6", "\xc8\xa2",
   /* from dictionary */
   "\xcb\xdc\xce\xa9\xa4\xc6", "\xc7\xd5", "\xbf\xcb", "\xc3\xec",
   NULL
};

static const char *njd_set_digit_rule_conv_table2c[] = {
   "\xb0\xec", "2",
   "\xbb\xb0", "1",
   "\xcf\xbb", "2",
   "\xc8\xac", "2",
   "\xbd\xbd", "2",
   "\xc9\xb4", "2",
   "\xc0\xe9", "1",
   "\xcb\xfc", "1",
   "\xb2\xbf", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2d[] = {
   /* from paper */
   /* "\xb1\xa9", "\xc7\xc4", *//* modified */
   NULL
};

static const char *njd_set_digit_rule_conv_table2d[] = {
   "\xbb\xb0", "1",
   "\xcf\xbb", "2",
   "\xc8\xac", "2",
   "\xbd\xbd", "2",
   "\xc9\xb4", "2",
   "\xc0\xe9", "1",
   "\xcb\xfc", "1",
   "\xb2\xbf", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2e[] = {
   /* from paper */
   "\xb8\xae", "\xc0\xd0", "\xc2\xad", "\xbc\xdc",
   /* from dictionary */
   "\xa4\xab\xa4\xb1", "\xbd\xc5\xa4\xcd", "\xb7\xef", "\xbc\xdb",
   NULL
};

static const char *njd_set_digit_rule_conv_table2e[] = {
   "\xbb\xb0", "1",
   "\xc0\xe9", "1",
   "\xcb\xfc", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class2f[] = {
   /* from paper */
   "\xb3\xac",
   NULL
};

static const char *njd_set_digit_rule_conv_table2f[] = {
   "\xbb\xb0", "1",
   NULL, NULL
};

static const char *njd_set_digit_rule_voiced_sound_symbol_list[] = {
   "\xa5\xab", "\xa5\xac",
   "\xa5\xad", "\xa5\xae",
   "\xa5\xaf", "\xa5\xb0",
   "\xa5\xb1", "\xa5\xb2",
   "\xa5\xb3", "\xa5\xb4",
   "\xa5\xb5", "\xa5\xb6",
   "\xa5\xb7", "\xa5\xb8",
   "\xa5\xb9", "\xa5\xba",
   "\xa5\xbb", "\xa5\xbc",
   "\xa5\xbd", "\xa5\xbe",
   "\xa5\xbf", "\xa5\xc0",
   "\xa5\xc1", "\xa5\xc2",
   "\xa5\xc4", "\xa5\xc5",
   "\xa5\xc6", "\xa5\xc7",
   "\xa5\xc8", "\xa5\xc9",
   "\xa5\xcf", "\xa5\xd0",
   "\xa5\xd2", "\xa5\xd3",
   "\xa5\xd5", "\xa5\xd6",
   "\xa5\xd8", "\xa5\xd9",
   "\xa5\xdb", "\xa5\xdc",
   NULL, NULL
};

static const char *njd_set_digit_rule_semivoiced_sound_symbol_list[] = {
   "\xa5\xcf", "\xa5\xd1",
   "\xa5\xd2", "\xa5\xd4",
   "\xa5\xd5", "\xa5\xd7",
   "\xa5\xd8", "\xa5\xda",
   "\xa5\xdb", "\xa5\xdd",
   NULL, NULL
};

static const char *njd_set_digit_rule_numerative_class3[] = {
   /* from paper */
   "\xc5\xef", "\xa5\xe0\xa5\xcd",
   /* from dictionary */
   "\xa4\xab\xa4\xb1", "\xa5\xab\xa5\xb1",
   "\xa4\xaf\xa4\xc0\xa4\xea", "\xa5\xaf\xa5\xc0\xa5\xea",
   "\xa4\xb1\xa4\xbf", "\xa5\xb1\xa5\xbf",
   "\xa4\xb9\xa4\xb8", "\xa5\xb9\xa5\xb8",
   "\xa4\xbd\xa4\xed\xa4\xa4", "\xa5\xbd\xa5\xed\xa5\xa4",
   "\xa4\xbf\xa4\xd3", "\xa5\xbf\xa5\xd3",
   "\xa4\xc4\xa4\xab\xa4\xdf", "\xa5\xc4\xa5\xab\xa5\xdf",
   "\xa4\xc4\xa4\xac\xa4\xa4", "\xa5\xc4\xa5\xac\xa5\xa4",
   "\xa4\xc4\xa4\xde\xa4\xdf", "\xa5\xc4\xa5\xde\xa5\xdf",
   "\xa4\xc8\xa4\xaa\xa4\xea", "\xa5\xc8\xa5\xaa\xa5\xea",
   "\xa4\xc8\xa4\xb3\xa4\xed", "\xa5\xc8\xa5\xb3\xa5\xed",
   "\xa4\xc8\xa4\xbb", "\xa5\xc8\xa5\xbb",
   "\xa4\xde\xa4\xef\xa4\xea", "\xa5\xde\xa5\xef\xa5\xea",
   "\xa5\xb7\xa1\xbc\xa5\xba\xa5\xf3", "\xa5\xb7\xa1\xbc\xa5\xba\xa5\xf3",
   "\xa5\xbb\xa5\xc3\xa5\xc8", "\xa5\xbb\xa5\xc3\xa5\xc8",
   "\xb0\xae\xa4\xea", "\xa5\xcb\xa5\xae\xa5\xea",
   "\xb2\xf3\xa4\xea", "\xa5\xde\xa5\xef\xa5\xea",
   "\xb3\xf4", "\xa5\xab\xa5\xd6",
   "\xb4\xc8", "\xa5\xb5\xa5\xaa",
   "\xb6\xda", "\xa5\xb9\xa5\xb8",
   "\xb7\xe5", "\xa5\xb1\xa5\xbf",
   "\xa5\xb1\xa5\xbf", "\xa5\xb1\xa5\xbf",
   "\xb7\xee", "\xa5\xc4\xa5\xad",
   "\xb8\xc0", "\xa5\xb3\xa5\xc8",
   "\xb8\xfd", "\xa5\xaf\xa5\xc1",
   "\xba\xb9\xa4\xb7", "\xa5\xb5\xa5\xb7",
   "\xbb\xae", "\xa5\xb5\xa5\xe9",
   "\xbb\xb3", "\xa5\xe4\xa5\xde",
   "\xbc\xdb", "\xa5\xb7\xa5\xe3\xa5\xaf",
   "\xbc\xdc", "\xa5\xb7\xa5\xe3\xa5\xaf",
   "\xbd\xc5\xa4\xcd", "\xa5\xab\xa5\xb5\xa5\xcd",
   "\xbf\xb6\xa4\xea", "\xa5\xd5\xa5\xea",
   "\xbf\xcb", "\xa5\xcf\xa5\xea",
   "\xc0\xda\xa4\xec", "\xa5\xad\xa5\xec",
   "\xc2\xab", "\xa5\xbf\xa5\xd0",
   "\xc2\xb3\xa4\xad", "\xa5\xc4\xa5\xc5\xa5\xad",
   "\xc2\xb7", "\xa5\xbd\xa5\xed\xa5\xa4",
   "\xc2\xde", "\xa5\xd5\xa5\xaf\xa5\xed",
   "\xc3\xec", "\xa5\xcf\xa5\xb7\xa5\xe9",
   "\xc4\xa5\xa4\xea", "\xa5\xcf\xa5\xea",
   "\xc4\xcc\xa4\xea", "\xa5\xc8\xa5\xaa\xa5\xea",
   "\xc4\xcf\xa4\xdf", "\xa5\xc4\xa5\xab\xa5\xdf",
   "\xc4\xda", "\xa5\xc4\xa5\xdc",
   "\xc8\xa2", "\xa5\xcf\xa5\xb3",
   "\xc8\xad", "\xa5\xcf\xa5\xc1",
   "\xc8\xd5", "\xa5\xd0\xa5\xf3",
   "\xc9\xca", "\xa5\xb7\xa5\xca",
   "\xc9\xd3", "\xa5\xd3\xa5\xf3",
   "\xca\xac\xa4\xb1", "\xa5\xef\xa5\xb1",
   "\xcb\xeb", "\xa5\xde\xa5\xaf",
   "\xcc\xeb", "\xa5\xe4",
   "\xcc\xeb", "\xa5\xe8",
   "\xce\xb3", "\xa5\xc4\xa5\xd6",
   "\xcf\xc8", "\xa5\xef\xa5\xaf",
   "\xdc\xaa", "\xa5\xb5\xa5\xaa",
   "\xa4\xc4\xc0\xde", "\xa5\xc4\xa5\xaa\xa5\xea",
   "\xa4\xc4\xc0\xde\xa4\xea", "\xa5\xc4\xa5\xaa\xa5\xea",
   "\xce\xb3", "\xa5\xc4\xa5\xd6",
   "\xa4\xc4\xa4\xd6", "\xa5\xc4\xa5\xd6",
   "\xa4\xc8\xa4\xad", "\xa5\xc8\xa5\xad",
   "\xbd\xc5\xa4\xcd", "\xa5\xac\xa5\xb5\xa5\xcd",
   NULL, NULL
};

static const char *njd_set_digit_rule_conv_table3[] = {
   "\xb0\xec", "\xa5\xd2\xa5\xc8", "0", "2",
   "\xc6\xf3", "\xa5\xd5\xa5\xbf", "0", "2",
   /* "\xbb\xb0", "\xa5\xdf", "1", "1", *//* modified */
   NULL, NULL, NULL, NULL
};

static const char *njd_set_digit_rule_conv_table4[] = {
   "\xb0\xec", "\xb0\xec\xbf\xcd,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xb0\xec\xbf\xcd,\xa5\xd2\xa5\xc8\xa5\xea,\xa5\xd2\xa5\xc8\xa5\xea,2/3,*",
   "\xc6\xf3", "\xc6\xf3\xbf\xcd,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xc6\xf3\xbf\xcd,\xa5\xd5\xa5\xbf\xa5\xea,\xa5\xd5\xa5\xbf\xa5\xea,3/3,*",
   NULL, NULL
};

static const char *njd_set_digit_rule_conv_table5[] = {
   "\xb0\xec", "\xb0\xec\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xb0\xec\xc6\xfc,\xa5\xa4\xa5\xc1\xa5\xcb\xa5\xc1,\xa5\xa4\xa5\xc1\xa5\xcb\xa5\xc1,4/4,*",
   "\xc6\xf3", "\xc6\xf3\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xc6\xf3\xc6\xfc,\xa5\xd5\xa5\xc4\xa5\xab,\xa5\xd5\xa5\xc4\xa5\xab,0/3,*",
   "\xbb\xb0", "\xbb\xb0\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbb\xb0\xc6\xfc,\xa5\xdf\xa5\xc3\xa5\xab,\xa5\xdf\xa5\xc3\xa5\xab,0/3,*",
   "\xbb\xcd", "\xbb\xcd\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbb\xcd\xc6\xfc,\xa5\xe8\xa5\xc3\xa5\xab,\xa5\xe8\xa5\xc3\xa5\xab,0/3,*",
   "\xb8\xde", "\xb8\xde\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xb8\xde\xc6\xfc,\xa5\xa4\xa5\xc4\xa5\xab,\xa5\xa4\xa5\xc4\xa5\xab,0/3,*",
   "\xcf\xbb", "\xcf\xbb\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xcf\xbb\xc6\xfc,\xa5\xe0\xa5\xa4\xa5\xab,\xa5\xe0\xa5\xa4\xa5\xab,0/3,*",
   "\xbc\xb7", "\xbc\xb7\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbc\xb7\xc6\xfc,\xa5\xca\xa5\xce\xa5\xab,\xa5\xca\xa5\xce\xa5\xab,0/3,*",
   "\xc8\xac", "\xc8\xac\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xc8\xac\xc6\xfc,\xa5\xe8\xa5\xa6\xa5\xab,\xa5\xe8\xa1\xbc\xa5\xab,0/3,*",
   "\xb6\xe5", "\xb6\xe5\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xb6\xe5\xc6\xfc,\xa5\xb3\xa5\xb3\xa5\xce\xa5\xab,\xa5\xb3\xa5\xb3\xa5\xce\xa5\xab,0/4,*",
   "\xbd\xbd", "\xbd\xbd\xc6\xfc,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbd\xbd\xc6\xfc,\xa5\xc8\xa5\xa6\xa5\xab,\xa5\xc8\xa1\xbc\xa5\xab,0/3,*",
   NULL, NULL
};

static const char *njd_set_digit_rule_conv_table6[] = {
   "\xb0\xec", "\xb0\xec\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xb0\xec\xc6\xfc\xb4\xd6,\xa5\xa4\xa5\xc1\xa5\xcb\xa5\xc1\xa5\xab\xa5\xf3,\xa5\xa4\xa5\xc1\xa5\xcb\xa5\xc1\xa5\xab\xa5\xf3,4/6,*",
   "\xc6\xf3", "\xc6\xf3\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xc6\xf3\xc6\xfc,\xa5\xd5\xa5\xc4\xa5\xab\xa5\xab\xa5\xf3,\xa5\xd5\xa5\xc4\xa5\xab\xa5\xab\xa5\xf3,3/5,*",
   "\xbb\xb0", "\xbb\xb0\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbb\xb0\xc6\xfc,\xa5\xdf\xa5\xc3\xa5\xab\xa5\xab\xa5\xf3,\xa5\xdf\xa5\xc3\xa5\xab\xa5\xab\xa5\xf3,3/5,*",
   "\xbb\xcd", "\xbb\xcd\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbb\xcd\xc6\xfc,\xa5\xe8\xa5\xc3\xa5\xab\xa5\xab\xa5\xf3,\xa5\xe8\xa5\xc3\xa5\xab\xa5\xab\xa5\xf3,3/5,*",
   "\xb8\xde", "\xb8\xde\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xb8\xde\xc6\xfc,\xa5\xa4\xa5\xc4\xa5\xab\xa5\xab\xa5\xf3,\xa5\xa4\xa5\xc4\xa5\xab\xa5\xab\xa5\xf3,3/5,*",
   "\xcf\xbb", "\xcf\xbb\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xcf\xbb\xc6\xfc,\xa5\xe0\xa5\xa4\xa5\xab\xa5\xab\xa5\xf3,\xa5\xe0\xa5\xa4\xa5\xab\xa5\xab\xa5\xf3,3/5,*",
   "\xbc\xb7", "\xbc\xb7\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbc\xb7\xc6\xfc,\xa5\xca\xa5\xce\xa5\xab\xa5\xab\xa5\xf3,\xa5\xca\xa5\xce\xa5\xab\xa5\xab\xa5\xf3,3/5,*",
   "\xc8\xac", "\xc8\xac\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xc8\xac\xc6\xfc,\xa5\xe8\xa5\xa6\xa5\xab\xa5\xab\xa5\xf3,\xa5\xe8\xa1\xbc\xa5\xab\xa5\xab\xa5\xf3,3/5,*",
   "\xb6\xe5", "\xb6\xe5\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xb6\xe5\xc6\xfc,\xa5\xb3\xa5\xb3\xa5\xce\xa5\xab\xa5\xab\xa5\xf3,\xa5\xb3\xa5\xb3\xa5\xce\xa5\xab\xa5\xab\xa5\xf3,4/6,*",
   "\xbd\xbd", "\xbd\xbd\xc6\xfc\xb4\xd6,\xcc\xbe\xbb\xec,\xc9\xfb\xbb\xec\xb2\xc4\xc7\xbd,*,*,*,*,\xbd\xbd\xc6\xfc,\xa5\xc8\xa5\xa6\xa5\xab\xa5\xab\xa5\xf3,\xa5\xc8\xa1\xbc\xa5\xab\xa5\xab\xa5\xf3,3/5,*",
   NULL, NULL
};

NJD_SET_DIGIT_RULE_H_END;

#endif                          /* !NJD_SET_DIGIT_RULE_H */
