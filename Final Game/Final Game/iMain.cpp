#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
# include "iGraphics.h"
#include <string.h>

struct Game
{
	char name[1000];
	int hscore;

};
int teamPosition_X = -100, teamPosition_Y = 570;
int rtlgPosition_X = 1360, rtlgPosition_Y = 240;
int alifPosition_X = 1360, alifPosition_Y = 630;
int JeasunPosition_X = 1360, JeasunPosiotion_Y = 630;
int rizviPosition_X = 380, rizviPosition_Y = -128;
int alifIDPosition_X = 0, alifIDPosition_Y = -128;
int jeasunIDPosition_X = 700, jeasunIDPosition_Y = -128;
int rizviIDPosition_X = -500, rizviIDPosition_Y = 202;
int salman = 0, ayon = 0, zuheb = 0, sami = 0, nafi = 0, alif = 0, alifID = 0, jeasun = 0, jeasunID = 0, rizvi = 0, rizviID = 0;
int amu = 0, bmu = 0, cmu = 0, dmu = 0, emu = 0, fmu = 0;
int second = 0, second2 = 0;
int menu = 0, highscore = 0;
int resume = 0;
int upjump = 0, downjump = 0, height;
int a = 0, kump = 0;
int b = 0, c = 0, d = 0, m = 0, n = 0, p = 0, e = 0, f = 0, g = 0, x = 0, y = 0, h = 0, i = 0, j = 0, k = 0, q = 0, r = 0, s = 0, t = 0, w = 0, u = 0, z = 0, v = 0;
int mn = 0, op = 0, pq = 0;
int flag = 0, mlag = 0, glag = 0;
int jimi = 0, fullTime = 0;
int alag = 0;
int characterPosition_X = 0, characterPosition_Y = 0;
int character2Position_X = 0, character2Position_Y = 0;
int bulletPosition_X = (character2Position_X + 128), bulletPosition_Y = (character2Position_Y + 223);
int klag = 0;
int newCharacterPosition_Y;
int obstacle1Position_X = 1300, obstacle1Position_Y = 650;
int obstacle2Position_X = 1000, obstacle2Position_Y = 650;
int obstacle3Position_X = 700, obstacle3Position_Y = 650;
int obstacle4Position_X = 1232, obstacle4Position_Y = 350;
int ball1Position_X = 1250, ball1Position_Y = 370;
int ball2Position_X = 950, ball2Position_Y = 560;
int ball3Position_X = 650, ball3Position_Y = 170;
int konkal1Position_X = 1250, konkal1Position_Y = 370;
int konkal2Position_X = 1250, konkal2Position_Y = 420;
int konkal3Position_X = 1250, konkal3Position_Y = 470;
int konkal4Position_X = 1250, konkal4Position_Y = 510;
int konkal5Position_X = 1250, konkal5Position_Y = 360;
int konkal6Position_X = 1250, konkal6Position_Y = 320;
int konkal7Position_X = 1250, konkal7Position_Y = 280;
int konkal8Position_X = 1250, konkal8Position_Y = 230;
int konkal9Position_X = 1250, konkal9Position_Y = 150;
int konkal10Position_X = 1250, konkal10Position_Y = 80;
int villain2Position_X = 1182, villain2Position_Y = 0;
int ab = 0, bc = 0, ca = 0, de = 0, ef = 0, fg = 0, gh = 0, ij = 0, jk = 0, ki = 0;
int kopa = 0, mopa = 0;
int backchange = 0;
int lm = 0, ml = 0, nl = 0, ln = 0, gf = 0, bf = 0, zx = 0, xz = 0, yz = 0, zy = 0;
int rat1position_X = 1130, rat1position_Y = 50;
int rat2position_X = 1000, rat2position_Y = 250;
int rat3position_X = 1000, rat3position_Y = 500;
int rat4position_X = 1000, rat4position_Y = 550;
int rat5position_X = 1000, rat5position_Y = 200;
int ap = 0, bp = 0, cp = 0, dp = 0, ep = 0, fp = 0, gp = 0, hp = 0, ip = 0, jp = 0, kp = 0, lp = 0, mp = 0, np = 0, rp = 0;
int aq = 0, bq = 0, cq = 0, dq = 0, eq = 0, fq = 0, gq = 0, hq = 0, iq = 0, jq = 0, kq = 0, lq = 0, mq = 0, nq = 0, rq = 0;
int as = 0, bs = 0, cs = 0, ds = 0, es = 0, fs = 0, gs = 0, hs = 0, is = 0, js = 0, ks = 0, ls = 0, ms = 0, ns = 0, rs = 0;
int killNumber = 0, killvill = 0;
int nopa = 0, messi = 0;
int blag = 0;
int chela1Position_X = 450, chela1Position_Y = 0;
int chela2Position_X = 600, chela2Position_Y = 750;
int tx = 0;
int BossPosition_X = 1200, BossPosition_Y = 0;
int ballx1 = 1150, bally1 = 100;
int ballx2 = 1150, bally2 = 250;
int ballx3 = 1150, bally3 = 400;
int ballx4 = 1150, bally4 = 600;
int ballx5 = 1150, bally5 = 700;
int ak = 0, bk = 0, ck = 0, dk = 0, ek = 0;
int killBoss = 0;
int khotom = 0;
int av = 0, bv = 0, cv = 0, dv = 0, ev = 0, fv = 0, gv = 0, hv = 0, iv = 0, jv = 0;
int coin1position_X = 400, coin1position_Y = 720;
int coin2position_X = 800, coin2position_Y = 620;
int coin3position_X = 1200, coin3position_Y = 650;
int coin4position_X = 400, coin4position_Y = 300;
int coin5position_X = 700, coin5position_Y = 450;
int coin6position_X = 700, coin6position_Y = 450;
int coin7position_X = 800, coin7position_Y = 600;
int coin8position_X = 300, coin8position_Y = 650;
int coin9position_X = 1000, coin9position_Y = 550;
int coin10position_X = 700, coin10position_Y = 450;
int coin11position_X = 700, coin11position_Y = 450;
int coin12position_X = 700, coin12position_Y = 450;
int abc = 0, def = 0, ghi = 0, jkl = 0, mno = 0;
int la = 0, lb = 0, lc = 0, ld = 0, le = 0;
int pqr = 0, stu = 0, vwx = 0, rqp = 0;
int xa = 0, xb = 0, xc = 0, xd = 0;
char scoreset[100];
char timeset[100];
int score = 0;
int lastTimer = 0;
int levelFirst = 0;
int hc = 0;
int len;
int mode = 0;
char string[100];
char khela[100], khela2[100];
int mposx, mposy;
char str1[100], str2[100], str3[100], str4[100], str5[100], str6[100], str7[100], str8[100], str9[100], str10[100];
int mojo1, mojo2, mojo3, mojo4, mojo5, mojo6, mojo7, mojo8, mojo9, mojo10;
char coke1[100], coke2[100], coke3[100], coke4[100], coke5[100], coke6[100], coke7[100], coke8[100], coke9[100], coke10[100];
int introduction = 0;

void drawTextBox()
{
	iSetColor(33, 45, 150);
	iRectangle(50, 250, 250, 30);
}

void updatehighscore(){

	struct Game aka[11];
	int semp;
	char vemp[100];
	int im, jm, min, minn, sorted = 0;

	FILE *fp;
	fp = fopen("highscore.txt", "r");
	if (fp == NULL)
	{
		printf("Error!");
		//exit(1);
	}
	for (im = 0; im <= 10; im++)
	{

		fscanf(fp, "%s %d", &aka[im].name, &aka[im].hscore);
	}

	fclose(fp);


	fp = fopen("highscore.txt", "w");
	strcpy(aka[10].name, khela2);
	aka[10].hscore = highscore;
	for (im = 0; im<10; im++)
	{

		if (aka[10].hscore > aka[im].hscore)
		{
			semp = aka[im].hscore;
			aka[im].hscore = aka[10].hscore;
			aka[10].hscore = semp;
			strcpy(vemp, aka[im].name);
			strcpy(aka[im].name, aka[10].name);
			strcpy(aka[10].name, vemp);

		}


	}

	for (im = 0; im<10; im++)
	{

		fprintf(fp, "%s %d\n", aka[im].name, aka[im].hscore);
	}
	fclose(fp);


	strcpy(str1, aka[0].name);
	strcpy(str2, aka[1].name);
	strcpy(str3, aka[2].name);
	strcpy(str4, aka[3].name);
	strcpy(str5, aka[4].name);
	strcpy(str6, aka[5].name);
	strcpy(str7, aka[6].name);
	strcpy(str8, aka[7].name);
	strcpy(str9, aka[8].name);
	strcpy(str10, aka[9].name);
	mojo1 = aka[0].hscore;
	mojo2 = aka[1].hscore;
	mojo3 = aka[2].hscore;
	mojo4 = aka[3].hscore;
	mojo5 = aka[4].hscore;
	mojo6 = aka[5].hscore;
	mojo7 = aka[6].hscore;
	mojo8 = aka[7].hscore;
	mojo9 = aka[8].hscore;
	mojo10 = aka[9].hscore;
	puts(khela2);
}



void iDraw()
{
	iClear();
	if (introduction <= 25)
	{
		iShowBMP(0, 0, "image\\bb.bmp");
		if (salman == 0)
		{
			iShowBMP2(teamPosition_X, teamPosition_Y, "image\\picture.bmp", 0);
		}
		if (ayon == 0)
		{
			iShowBMP2(rtlgPosition_X, rtlgPosition_Y, "image\\rtlg.bmp", 0);
		}
		if (alif == 0)
		{
			iShowBMP2(alifPosition_X, alifPosition_Y, "image\\alif.bmp", 0);
		}
		if (alifID == 0)
		{
			iShowBMP2(alifIDPosition_X, alifIDPosition_Y, "image\\alifID.bmp", 0);
		}
		if (jeasun == 0)
		{
			iShowBMP2(JeasunPosition_X, JeasunPosiotion_Y, "image\\jeasun.bmp", 0);
		}
		if (jeasunID == 0)
		{
			iShowBMP2(jeasunIDPosition_X, jeasunIDPosition_Y, "image\\jeasunID.bmp", 0);
		}
		if (rizvi == 0)
		{
			iShowBMP2(rizviPosition_X, rizviPosition_Y, "image\\rizvi.bmp", 0);
		}
		if (rizviID == 0)
		{
			iShowBMP2(rizviIDPosition_X, rizviIDPosition_Y, "image\\rizviID.bmp", 0);
		}
	}

	if (a>0 && a <= 5)
	{
		iShowBMP(0, 0, "image\\Opening Picture.bmp");
	}
	if (a > 5 && a <= 15)
	{
		iShowBMP(0, 0, "image\\First Background.bmp");
	}
	if (a > 15 && a < 25)
	{
		iShowBMP(0, 0, "image\\Second Picture.bmp");
	}
	if (a >= 25)
	{
		iShowBMP(0, 0, "image\\Menu Picture.bmp");
	}
	if (hc == 1)
	{
		updatehighscore();
		iShowBMP(0, 0, "image\\High score back.bmp");
		//highscore er code.

		iSetColor(0, 200, 0);
		iText(400, 700, str1, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 650, str2, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 600, str3, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 550, str4, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 500, str5, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 450, str6, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 400, str7, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 350, str8, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 300, str9, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(400, 250, str10, GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(255, 0, 0);
		_itoa_s(mojo1, coke1, 10);
		iText(550, 700, coke1, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo2, coke2, 10);
		iText(550, 650, coke2, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo3, coke3, 10);
		iText(550, 600, coke3, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo4, coke4, 10);
		iText(550, 550, coke4, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo5, coke5, 10);
		iText(550, 500, coke5, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo6, coke6, 10);
		iText(550, 450, coke6, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo7, coke7, 10);
		iText(550, 400, coke7, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo8, coke8, 10);
		iText(550, 350, coke8, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo9, coke9, 10);
		iText(550, 300, coke9, GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(mojo10, coke10, 10);
		iText(550, 250, coke10, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (b == 1)
	{
		iShowBMP(0, 0, "image\\Help First1.bmp");
	}
	if (b == 2)
	{
		iShowBMP(0, 0, "image\\Help second.bmp");
	}
	if (c == 1 && d <= 5)
	{
		iShowBMP(0, 0, "image\\level 1 begin.bmp");
	}
	if (d >= 6 && e == 0)
	{
		iShowBMP(0, 0, "image\\Level First first.bmp");
		iShowBMP2(characterPosition_X, characterPosition_Y, "image\\char pic.bmp", 0);
		if (abc == 0)
		{
			iShowBMP2(coin1position_X, coin1position_Y, "image\\coin.bmp", 0);
		}
		if (def == 0)
		{
			iShowBMP2(coin2position_X, coin2position_Y, "image\\coin.bmp", 0);
		}
		if (ghi == 0)
		{
			iShowBMP2(coin3position_X, coin3position_Y, "image\\coin.bmp", 0);
		}
		if (jkl == 0)
		{
			iShowBMP2(coin4position_X, coin4position_Y, "image\\coin.bmp", 0);
		}
		if (mno == 0)
		{
			iShowBMP2(coin5position_X, coin5position_Y, "image\\coin.bmp", 0);
		}
		if (flag == 0)
		{
			iShowBMP2(obstacle1Position_X, obstacle1Position_Y, "image\\obs1.bmp", 0);
		}
		if (mlag == 0)
		{
			iShowBMP2(obstacle2Position_X, obstacle2Position_Y, "image\\obs1.bmp", 0);
		}
		if (glag == 0)
		{
			iShowBMP2(obstacle3Position_X, obstacle3Position_Y, "image\\obs1.bmp", 0);
		}
		if (mn == 1)
		{
			iShowBMP2(ball1Position_X, ball1Position_Y, "image\\ball.bmp", 0);
		}
		if (op == 1)
		{
			iShowBMP2(ball2Position_X, ball2Position_Y, "image\\ball.bmp", 0);
		}
		if (pq == 1)
		{
			iShowBMP2(ball3Position_X, ball3Position_Y, "image\\ball.bmp", 0);
		}
		if (g == 0)
		{
			iSetColor(255, 0, 0);
			iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(70, 730, "image\\green life.bmp");
		}
		if (g == 1)
		{
			iSetColor(255, 0, 0);
			iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(70, 730, "image\\2nd life.bmp");
		}
		if (g == 2)
		{
			iSetColor(255, 0, 0);
			iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(70, 730, "image\\last life.bmp");
		}
		_itoa_s(score, scoreset, 10);
		iText(550, 750, "SCORE -", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(667, 750, scoreset, GLUT_BITMAP_TIMES_ROMAN_24);

		_itoa_s(fullTime, timeset, 10);
		iSetColor(0, 255, 0);
		iText(756, 750, "TIME -", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 0, 0);
		iText(850, 750, timeset, GLUT_BITMAP_TIMES_ROMAN_24);


	}
	if (e == 1)
	{
		iShowBMP(0, 0, "image\\Level First second.bmp");
		iShowBMP2(characterPosition_X, characterPosition_Y, "image\\char pic.bmp", 0);
		if (pqr == 0)
		{
			iShowBMP2(coin6position_X, coin6position_Y, "image\\coin.bmp", 0);
		}
		if (stu == 0)
		{
			iShowBMP2(coin7position_X, coin7position_Y, "image\\coin.bmp", 0);
		}
		if (vwx == 0)
		{
			iShowBMP2(coin8position_X, coin8position_Y, "image\\coin.bmp", 0);
		}
		if (rqp == 0)
		{
			iShowBMP2(coin9position_X, coin9position_Y, "image\\coin.bmp", 0);
		}
		if (alag == 0)
		{
			iShowBMP2(obstacle4Position_X, obstacle4Position_Y, "image\\Obstacle4.bmp", 0);
		}
		if (ab == 1)
		{
			iShowBMP2(konkal1Position_X, konkal1Position_Y, "image\\t.bmp", 0);
		}
		if (bc == 1)
		{
			iShowBMP2(konkal2Position_X, konkal2Position_Y, "image\\t.bmp", 0);
		}
		if (ca == 1)
		{
			iShowBMP2(konkal3Position_X, konkal3Position_Y, "image\\t.bmp", 0);
		}
		if (de == 1)
		{
			iShowBMP2(konkal4Position_X, konkal4Position_Y, "image\\t.bmp", 0);
		}
		if (ef == 1)
		{
			iShowBMP2(konkal5Position_X, konkal5Position_Y, "image\\t.bmp", 0);
		}
		if (fg == 1)
		{
			iShowBMP2(konkal6Position_X, konkal6Position_Y, "image\\t.bmp", 0);
		}
		if (gh == 1)
		{
			iShowBMP2(konkal7Position_X, konkal7Position_Y, "image\\t.bmp", 0);
		}
		if (ij == 1)
		{
			iShowBMP2(konkal8Position_X, konkal8Position_Y, "image\\t.bmp", 0);
		}
		if (jk == 1)
		{
			iShowBMP2(konkal9Position_X, konkal9Position_Y, "image\\t.bmp", 0);
		}
		if (ki == 1)
		{
			iShowBMP2(konkal10Position_X, konkal10Position_Y, "image\\t.bmp", 0);
		}
		if (g == 0)
		{
			iSetColor(255, 0, 0);
			iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(70, 730, "image\\green life.bmp");
		}
		if (g == 1)
		{
			iSetColor(255, 0, 0);
			iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(70, 730, "image\\2nd life.bmp");
		}
		if (g == 2)
		{
			iSetColor(255, 0, 0);
			iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(70, 730, "image\\last life.bmp");
		}
		_itoa_s(score, scoreset, 10);
		iText(550, 750, "SCORE -", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(667, 750, scoreset, GLUT_BITMAP_TIMES_ROMAN_24);

		_itoa_s(fullTime, timeset, 10);
		iSetColor(0, 255, 0);
		iText(756, 750, "TIME -", GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255, 0, 0);
		iText(850, 750, timeset, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (mopa == 1)
	{
		if (kopa < 5)
		{
			iShowBMP(0, 0, "image\\level 1 finish.bmp");
		}
		if (kopa >= 5 && kopa<10)
		{
			iShowBMP(0, 0, "image\\level 2 begin.bmp");
		}
		if (kopa >= 10 && kopa < 15)
		{
			iShowBMP(0, 0, "image\\Level 2 last cover.bmp");
		}
		if (kopa >= 15)
		{
			iShowBMP(0, 0, "image\\level 2 first.bmp");
			iShowBMP2(character2Position_X, character2Position_Y, "image\\char 2 pic.bmp", 0);
			if (klag == 1)
			{
				iShowBMP2(bulletPosition_X, bulletPosition_Y, "image\\bullet1.bmp", 0);
			}
			if (blag == 0)
			{
				iShowBMP2(villain2Position_X, villain2Position_Y, "image\\villain 2.bmp", 0);
			}
			if (aq == 1)
			{
				iShowBMP2(rat1position_X, rat1position_Y, "image\\rat.bmp", 0);
			}
			if (bq == 1)
			{
				iShowBMP2(rat2position_X, rat2position_Y, "image\\rat.bmp", 0);
			}
			if (cq == 1)
			{
				iShowBMP2(rat3position_X, rat3position_Y, "image\\rat.bmp", 0);
			}
			if (dq == 1)
			{
				iShowBMP2(rat4position_X, rat4position_Y, "image\\rat.bmp", 0);
			}
			if (eq == 1)
			{
				iShowBMP2(rat5position_X, rat5position_Y, "image\\rat.bmp", 0);
			}
			if (g == 0)
			{
				iSetColor(0, 255, 0);
				iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(70, 730, "image\\green life.bmp");
			}
			if (g == 1)
			{
				iSetColor(0, 255, 0);
				iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(70, 730, "image\\2nd life.bmp");
			}
			if (g == 2)
			{
				iSetColor(0, 255, 0);
				iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(70, 730, "image\\last life.bmp");
			}
			if (killvill == 0)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 10.bmp");

			}
			if (killvill == 1)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 9.bmp");

			}
			if (killvill == 2)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 8.bmp");

			}
			if (killvill == 3)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 7.bmp");

			}
			if (killvill == 4)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 6.bmp");

			}
			if (killvill == 5)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 5.bmp");

			}
			if (killvill == 6)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 4.bmp");

			}
			if (killvill == 7)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 3.bmp");

			}
			if (killvill == 8)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 2.bmp");

			}
			if (killvill == 9)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 1.bmp");

			}
			_itoa_s(score, scoreset, 10);
			iText(450, 750, "SCORE -", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(567, 750, scoreset, GLUT_BITMAP_TIMES_ROMAN_24);

			_itoa_s(fullTime, timeset, 10);
			iSetColor(0, 255, 0);
			iText(700, 750, "TIME -", GLUT_BITMAP_TIMES_ROMAN_24);
			iSetColor(255, 0, 0);
			iText(794, 750, timeset, GLUT_BITMAP_TIMES_ROMAN_24);
		}
	}
	if (nopa == 1)
	{
		if (messi <= 5)
		{
			iShowBMP(0, 0, "image\\Level 2 finish.bmp");
		}
		if (messi >= 6 && messi <= 10)
		{
			iShowBMP(0, 0, "image\\level 3 begin.bmp");
		}
		if (messi >= 11)
		{
			iShowBMP(0, 0, "image\\level 3 first.bmp");
			iShowBMP2(character2Position_X, character2Position_Y, "image\\char 2 pic.bmp", 0);
			if (klag == 1)
			{
				iShowBMP2(bulletPosition_X, bulletPosition_Y, "image\\bullet1.bmp", 0);
			}

			iShowBMP2(BossPosition_X, BossPosition_Y, "image\\Boss.bmp", 0);
			if (ak == 0)
			{
				iShowBMP2(ballx1, bally1, "image\\ball.bmp", 0);
			}
			if (bk == 0)
			{
				iShowBMP2(ballx2, bally2, "image\\ball.bmp", 0);
			}
			if (ck == 0)
			{
				iShowBMP2(ballx3, bally3, "image\\ball.bmp", 0);
			}
			if (dk == 0)
			{
				iShowBMP2(ballx4, bally4, "image\\ball.bmp", 0);
			}
			if (ek == 0)
			{
				iShowBMP2(ballx5, bally5, "image\\ball.bmp", 0);
			}
			if (g == 0)
			{
				iSetColor(255, 0, 0);
				iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(70, 730, "image\\green life.bmp");
			}
			if (g == 1)
			{
				iSetColor(255, 0, 0);
				iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(70, 730, "image\\2nd life.bmp");
			}
			if (g == 2)
			{
				iSetColor(255, 0, 0);
				iText(10, 750, "LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(70, 730, "image\\last life.bmp");
			}
			if (killBoss == 0)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 10.bmp");

			}
			if (killBoss == 1)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 9.bmp");

			}
			if (killBoss == 2)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 8.bmp");

			}
			if (killBoss == 3)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 7.bmp");

			}
			if (killBoss == 4)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 6.bmp");

			}
			if (killBoss == 5)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 5.bmp");

			}
			if (killBoss == 6)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 4.bmp");

			}
			if (killBoss == 7)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 3.bmp");

			}
			if (killBoss == 8)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 2.bmp");

			}
			if (killBoss == 9)
			{
				iSetColor(255, 0, 0);
				iText(880, 750, "MONSTERS LIFE", GLUT_BITMAP_TIMES_ROMAN_24);
				iShowBMP(1070, 730, "image\\Boss life 1.bmp");

			}
			_itoa_s(score, scoreset, 10);
			iText(480, 750, "SCORE -", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(597, 750, scoreset, GLUT_BITMAP_TIMES_ROMAN_24);

			_itoa_s(fullTime, timeset, 10);
			iSetColor(0, 255, 0);
			iText(700, 750, "TIME -", GLUT_BITMAP_TIMES_ROMAN_24);
			iSetColor(255, 0, 0);
			iText(794, 750, timeset, GLUT_BITMAP_TIMES_ROMAN_24);

		}


	}
	if (khotom == 1)
	{
		if (lastTimer < 8)
		{
			iShowBMP(0, 0, "image\\Plain-Black-Wallpaper.bmp");
		}
		if (lastTimer >= 8)
		{
			if (menu == 1)
			{

				iShowBMP(0, 0, "blank.bmp");
				highscore = score;
				_itoa(highscore, string, 10);
				iSetColor(251, 100, 85);
				iText(55, 300, "Your Score: ", GLUT_BITMAP_HELVETICA_18);
				iText(55, 280, string, GLUT_BITMAP_HELVETICA_18);


				drawTextBox();
				if (mode == 1)
				{
					iSetColor(22, 33, 250);
					iText(55, 260, khela);

				}

				iText(10, 10, "Click to activate the box, enter to finish.");
			}
		}

	}

	if (g == 3)
	{
		if (lastTimer <= 8)
		{
			iShowBMP(0, 0, "image\\game over.bmp");
		}
		if (lastTimer > 8)
		{
			menu = 1;
			mode = 1;
		}
		flag = 1, mlag = 1, glag = 1;
		mn = 0, op = 0, pq = 0;
		alag = 1;
		ab = 0, bc = 0, ca = 0, de = 0, ef = 0, fg = 0, gh = 0, ij = 0, jk = 0, ki = 0;
		e = 10;
		mopa = 3;
		nopa = 4;
	}
	if (menu == 1)
	{
		iShowBMP(0, 0, "blank.bmp");
		highscore = score;
		_itoa(highscore, string, 10);
		iSetColor(251, 100, 85);
		iText(55, 300, "Your Score: ", GLUT_BITMAP_HELVETICA_18);
		iText(55, 280, string, GLUT_BITMAP_HELVETICA_18);


		drawTextBox();
		if (mode == 1)
		{
			//printf("%d\n", menu);
			iSetColor(22, 33, 250);
			iText(55, 260, khela);

		}

		iText(10, 10, "Click to activate the box, enter to finish.");


	}
}
//image move er timer
void imageMovement()
{
	introduction++;
	if (bmu == 2)
	{
		second++;
	}
	if (introduction >= 26)
	{
		a++;
	}
	if (c == 1)
	{
		d++;
	}
	if (mopa == 1)
	{
		kopa++;
	}
	if (nopa == 1)
	{
		messi++;
	}
	if (g == 3 || khotom == 1)
	{
		lastTimer++;
	}
	if (d >= 6 && e == 0)
	{
		fullTime++;
	}
	if (e == 1)
	{
		fullTime++;
	}
	if (mopa == 1 && kopa >= 15)
	{
		fullTime++;
	}
	if (nopa == 1 && messi >= 11)
	{
		fullTime++;
	}


}
//image move er timer er sesh

//jump er timer shuru
void jump()
{
	if (d >= 6 && e == 0)
	{
		if (upjump == 1)
		{
			characterPosition_X += 7;
			characterPosition_Y += 15;
			kump++;

			if (kump == 16)
			{

				upjump = 0;
				downjump = 1;
			}
		}
		if (downjump == 1)
		{
			characterPosition_X += 7;
			characterPosition_Y -= 15;
			kump--;
			if (kump == 0)
			{
				downjump = 0;
			}
		}
	}
	if (e == 1)
	{
		if (upjump == 1)
		{
			characterPosition_X += 7;
			characterPosition_Y += 15;
			kump++;

			if (kump == 16)
			{

				upjump = 0;
				downjump = 1;
			}
		}
		if (downjump == 1)
		{
			characterPosition_X += 7;
			characterPosition_Y -= 15;
			kump--;
			if (kump == 0)
			{
				downjump = 0;
			}
		}
	}
	if (mopa == 1)
	{
		if (upjump == 1)
		{

			character2Position_Y += 10;
			kump++;

			if (kump == 16)
			{

				upjump = 0;
				downjump = 1;
			}
		}
		if (downjump == 1)
		{

			character2Position_Y -= 10;
			kump--;
			if (kump == 0)
			{
				downjump = 0;
			}
		}
	}
	if (nopa == 1)
	{
		if (upjump == 1)
		{

			character2Position_Y += 10;
			kump++;

			if (kump == 16)
			{

				upjump = 0;
				downjump = 1;
			}
		}
		if (downjump == 1)
		{
			character2Position_Y -= 10;
			kump--;
			if (kump == 0)
			{
				downjump = 0;
			}
		}
	}


}
//jump er timer sesh
void beginning()
{
	if (introduction <= 25)
	{
		if (amu == 0)
		{
			teamPosition_X += 20;
			if (teamPosition_X >= 450)
			{
				teamPosition_X = 450;
				amu = 1;
				bmu = 1;
			}
		}
		if (bmu == 1)
		{
			rtlgPosition_X -= 20;
			if (rtlgPosition_X <= 430)
			{
				rtlgPosition_X = 430;
				bmu = 2;
			}
		}
		if (second >= 5)
		{
			salman = 1;
			ayon = 1;
			cmu = 1;
		}
		if (cmu == 1)
		{
			alifPosition_X -= 25;
			if (alifPosition_X <= 0)
			{
				alifPosition_X = 0;
				cmu = 2;
				dmu = 1;
			}
		}
		if (dmu == 1)
		{
			alifIDPosition_Y += 15;
			if (alifIDPosition_Y >= 500)
			{
				alifIDPosition_Y = 500;
				dmu = 2;
			}
		}
		if (dmu == 2)
		{
			JeasunPosition_X -= 25;
			if (JeasunPosition_X <= 712)
			{
				JeasunPosition_X = 712;
				dmu = 3;
			}
		}
		if (dmu == 3)
		{
			jeasunIDPosition_Y += 15;
			if (jeasunIDPosition_Y >= 500)
			{
				jeasunIDPosition_Y = 500;
				dmu = 4;
			}
		}
		if (dmu == 4)
		{
			rizviPosition_Y += 15;
			if (rizviPosition_Y >= 330)
			{
				rizviPosition_Y = 330;
				dmu = 5;
			}
		}
		if (dmu == 5)
		{
			rizviIDPosition_X += 20;
			if (rizviIDPosition_X >= 380)
			{
				rizviIDPosition_X = 380;
				dmu = 6;
				second2 = 1;
			}
		}
	}
}

//first level er 1st phase er  timer shuru  
void obstacleMovement()
{
	if (levelFirst == 0)
	{
		if (d >= 6 && e == 0)
		{
			if (m == 0)
			{
				obstacle1Position_X--;
				obstacle1Position_Y -= 4;

				if (obstacle1Position_Y <= 0)
				{
					m = 1;
				}
			}
			if (m == 1)
			{
				obstacle1Position_Y += 4;
				obstacle1Position_X--;
				if (obstacle1Position_X <= 0 || obstacle1Position_Y >= 550)
				{
					m = 0;
				}
			}
			if (n == 0)
			{
				obstacle2Position_X--;
				obstacle2Position_Y -= 6;

				if (obstacle2Position_Y <= 0)
				{
					n = 1;
				}
			}
			if (n == 1)
			{
				obstacle2Position_Y += 4;
				obstacle2Position_X--;
				if (obstacle2Position_X <= 0 || obstacle2Position_Y >= 550)
				{
					n = 0;
				}
			}

			if (p == 0)
			{
				obstacle3Position_X--;
				obstacle3Position_Y -= 8;

				if (obstacle3Position_Y <= 0)
				{
					p = 1;
				}
			}
			if (p == 1)
			{
				obstacle3Position_Y += 4;
				obstacle3Position_X--;
				if (obstacle3Position_X <= 0 || obstacle3Position_Y >= 550)
				{
					p = 0;
				}
			}
			if (abs(characterPosition_X - obstacle1Position_X) <= 128 && abs(characterPosition_Y - obstacle1Position_Y) <= 256)
			{
				if (flag == 0)
				{
					g++;
					score = score - 20;
				}
				flag = 1;
			}
			if (abs(characterPosition_X - obstacle2Position_X) <= 128 && abs(characterPosition_Y - obstacle2Position_Y) <= 256)
			{
				if (mlag == 0)
				{
					g++;
					score = score - 20;
				}
				mlag = 1;
			}
			if (abs(characterPosition_X - obstacle3Position_X) <= 128 && abs(characterPosition_Y - obstacle3Position_Y) <= 256)
			{
				if (glag == 0)
				{
					g++;
					score = score - 20;
				}
				glag = 1;
			}
			if (x == 0)
			{
				if (obstacle1Position_Y <= 370)
				{
					mn = 1;
					ball1Position_X -= 20;
					if (ball1Position_X <= 0)
					{
						mn = 0;
					}

					if (characterPosition_Y < ball1Position_Y)
					{

						if (abs(characterPosition_X - ball1Position_X) <= 128 && abs(characterPosition_Y - ball1Position_Y) <= 256)
						{
							if (mn == 1)
							{
								g++;
								score = score - 20;
								x = 1;
							}
							mn = 0;
						}
					}
					if (characterPosition_Y > ball1Position_Y)
					{
						if (abs(characterPosition_X - ball1Position_X) <= 128 && abs(characterPosition_Y - ball1Position_Y) <= 50)
						{
							if (mn == 1)
							{
								g++;
								score = score - 20;
								//printf("w");
								x = 1;
							}
							mn = 0;
						}
					}
				}

			}
			if (y == 0)
			{
				if (obstacle2Position_Y <= 560)
				{
					op = 1;
					ball2Position_X -= 15;
					if (ball2Position_X <= 0)
					{
						op = 0;
					}
					if (characterPosition_Y < ball2Position_Y)
					{

						if (abs(characterPosition_X - ball2Position_X) <= 128 && abs(characterPosition_Y - ball2Position_Y) <= 256)
						{
							if (op == 1)
							{
								g++;
								score = score - 20;
								//printf("w");
								y = 1;
							}
							op = 0;

						}

					}
					if (characterPosition_Y > ball2Position_Y)
					{
						if (abs(characterPosition_X - ball2Position_X) <= 128 && abs(characterPosition_Y - ball2Position_Y) <= 50)
						{
							if (op == 1)
							{
								g++;
								score = score - 20;
								//printf("w");
								y = 1;
							}
							op = 0;
						}
					}
				}

			}
			if (f == 0)
			{

				if (obstacle3Position_Y <= 170)
				{
					pq = 1;
					ball3Position_X -= 20;
					if (ball3Position_X <= 0)
					{
						pq = 0;
					}
					if (characterPosition_Y < ball3Position_Y)
					{


						if (abs(characterPosition_X - ball3Position_X) <= 128 && abs(characterPosition_Y - ball3Position_Y) <= 256)
						{
							if (pq == 1)
							{
								g++;
								score = score - 20;
								//printf("w");
								f = 1;

							}
							pq = 0;
						}
					}
					if (characterPosition_Y > ball3Position_Y)
					{
						if (abs(characterPosition_X - ball3Position_X) <= 128 && abs(characterPosition_Y - ball3Position_Y) <= 50)
						{
							if (pq == 1)
							{
								g++;
								score = score - 20;
								//printf("w");
								f = 1;
							}
							pq = 0;
						}
					}
				}
			}
			//khela shuru
			if (la == 0)
			{
				if (coin1position_X > characterPosition_X && coin1position_Y > characterPosition_Y)
				{
					if (abs(characterPosition_X - coin1position_X) <= 128 && abs(characterPosition_Y - coin1position_Y) <= 256)
					{
						if (abc == 0)
						{
							score += 50;
							la = 1;
							printf("crash");
						}
						abc = 1;
					}
				}
				if (coin1position_X > characterPosition_X && coin1position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin1position_X) <= 128 && abs(characterPosition_Y - coin1position_Y) <= 40)
					{
						if (abc == 0)
						{
							score += 50;
							la = 1;
							printf("crash");
						}
						abc = 1;
					}
				}
				if (coin1position_X<characterPosition_X && coin1position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin1position_X) <= 50 && abs(characterPosition_Y - coin1position_Y) <= 260)
					{
						if (abc == 0)
						{
							score += 50;
							la = 1;
							printf("crash");
						}
						abc = 1;
					}
				}
				if (coin1position_X<characterPosition_X && coin1position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin1position_X) <= 50 && abs(characterPosition_Y - coin1position_Y) <= 40)
					{
						if (abc == 0)
						{
							score += 50;
							la = 1;
							printf("crash");
						}
						abc = 1;
					}
				}



			}
			//khela sesh
			if (lb == 0)
			{
				if (coin2position_X > characterPosition_X && coin2position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin2position_X) <= 128 && abs(characterPosition_Y - coin2position_Y) <= 256)
					{
						if (def == 0)
						{
							score += 50;
							lb = 1;
							printf("crash");
						}
						def = 1;
					}
				}
				if (coin2position_X > characterPosition_X && coin2position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin2position_X) <= 128 && abs(characterPosition_Y - coin2position_Y) <= 40)
					{
						if (def == 0)
						{
							score += 50;
							lb = 1;
							printf("crash");
						}
						def = 1;
					}
				}
				if (coin2position_X<characterPosition_X && coin2position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin2position_X) <= 50 && abs(characterPosition_Y - coin2position_Y) <= 260)
					{
						if (def == 0)
						{
							score += 50;
							lb = 1;
							printf("crash");
						}
						def = 1;
					}
				}
				if (coin2position_X<characterPosition_X && coin2position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin2position_X) <= 50 && abs(characterPosition_Y - coin2position_Y) <= 40)
					{
						if (def == 0)
						{
							score += 50;
							lb = 1;
							printf("crash");
						}
						def = 1;
					}
				}



			}
			//2nd khela sesh
			if (lc == 0)
			{
				if (coin3position_X > characterPosition_X && coin3position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin3position_X) <= 128 && abs(characterPosition_Y - coin3position_Y) <= 256)
					{
						if (ghi == 0)
						{
							score += 50;
							lc = 1;
							printf("crash");
						}
						ghi = 1;
					}
				}
				if (coin3position_X > characterPosition_X && coin3position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin3position_X) <= 128 && abs(characterPosition_Y - coin3position_Y) <= 40)
					{
						if (ghi == 0)
						{
							score += 50;
							lc = 1;
							printf("crash");
						}
						ghi = 1;
					}
				}
				if (coin3position_X<characterPosition_X && coin3position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin3position_X) <= 50 && abs(characterPosition_Y - coin3position_Y) <= 260)
					{
						if (ghi == 0)
						{
							score += 50;
							lc = 1;
							printf("crash");
						}
						ghi = 1;
					}
				}
				if (coin3position_X<characterPosition_X && coin3position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin3position_X) <= 50 && abs(characterPosition_Y - coin3position_Y) <= 40)
					{
						if (ghi == 0)
						{
							score += 50;
							lc = 1;
							printf("crash");
						}
						ghi = 1;
					}
				}



			}
			//3rd khela sesh
			if (ld == 0)
			{
				if (coin4position_X > characterPosition_X && coin4position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin4position_X) <= 128 && abs(characterPosition_Y - coin4position_Y) <= 256)
					{
						if (jkl == 0)
						{
							score += 50;
							ld = 1;
							printf("crash");
						}
						jkl = 1;
					}
				}
				if (coin4position_X > characterPosition_X && coin4position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin4position_X) <= 128 && abs(characterPosition_Y - coin4position_Y) <= 40)
					{
						if (jkl == 0)
						{
							score += 50;
							ld = 1;
							printf("crash");
						}
						jkl = 1;
					}
				}
				if (coin4position_X<characterPosition_X && coin4position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin4position_X) <= 50 && abs(characterPosition_Y - coin4position_Y) <= 260)
					{
						if (jkl == 0)
						{
							score += 50;
							ld = 1;
							printf("crash");
						}
						jkl = 1;
					}
				}
				if (coin4position_X<characterPosition_X && coin4position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin4position_X) <= 50 && abs(characterPosition_Y - coin4position_Y) <= 40)
					{
						if (mno == 0)
						{
							score += 50;
							ld = 1;
							printf("crash");
						}
						jkl = 1;
					}
				}



			}
			//4th khela sesh
			if (le == 0)
			{
				if (coin5position_X > characterPosition_X && coin5position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin5position_X) <= 128 && abs(characterPosition_Y - coin5position_Y) <= 256)
					{
						if (mno == 0)
						{
							score += 50;
							le = 1;
							printf("crash");
						}
						mno = 1;
					}
				}
				if (coin5position_X > characterPosition_X && coin5position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin5position_X) <= 128 && abs(characterPosition_Y - coin5position_Y) <= 40)
					{
						if (mno == 0)
						{
							score += 50;
							le = 1;
							printf("crash");
						}
						mno = 1;
					}
				}
				if (coin5position_X<characterPosition_X && coin5position_Y>characterPosition_Y)
				{
					if (abs(characterPosition_X - coin5position_X) <= 50 && abs(characterPosition_Y - coin5position_Y) <= 260)
					{
						if (mno == 0)
						{
							score += 50;
							le = 1;
							printf("crash");
						}
						mno = 1;
					}
				}
				if (coin5position_X < characterPosition_X && coin5position_Y < characterPosition_Y)
				{
					if (abs(characterPosition_X - coin5position_X) <= 50 && abs(characterPosition_Y - coin5position_Y) <= 40)
					{
						if (mno == 0)
						{
							score += 50;
							le = 1;
							printf("crash");
						}
						mno = 1;
					}
				}



			}
			if (g == 3)
			{
				score = score + (1000 - fullTime);
			}
		}
		if (characterPosition_X >= 1232)
		{

			e = 1;
			score = score + 200;
			characterPosition_X = 10;
			characterPosition_Y = 10;
			levelFirst = 1;
		}
	}
}
//first level er 1st phase er  timer sesh 


////first level er second phase er  timer shuru 
void obstacle4Movement()
{

	if (e == 1)
	{


		if (z == 0)
		{
			obstacle4Position_Y += 5;
			if (obstacle4Position_Y >= 600)
			{
				z = 1;
			}
		}
		if (z == 1)
		{
			obstacle4Position_Y -= 5;
			if (obstacle4Position_Y <= 0)
			{
				z = 0;
			}
		}

		//eikhan theke furti fatta shuru.

		if (h == 0)
		{
			if (obstacle4Position_Y >= 370)
			{
				ab = 1;
				konkal1Position_X -= 35;

				if (konkal1Position_X <= 0)
				{

					if (lm == 0)
					{
						backchange++;
						printf("m ");
					}
					lm = 1;
					ab = 0;


				}

				if (characterPosition_Y < konkal1Position_Y)
				{

					if (abs(characterPosition_X - konkal1Position_X) <= 128 && abs(characterPosition_Y - konkal1Position_Y) <= 256)
					{
						if (ab == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							h = 1;
						}
						ab = 0;
					}
				}
				if (characterPosition_Y > konkal1Position_Y)
				{
					if (abs(characterPosition_X - konkal1Position_X) <= 128 && abs(characterPosition_Y - konkal1Position_Y) <= 50)
					{
						if (ab == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							h = 1;
						}
						ab = 0;
					}
				}
			}

		}
		//eikhan theke furti fatta sesh.
		if (i == 0)
		{
			if (obstacle4Position_Y >= 420)
			{
				bc = 1;
				konkal2Position_X -= 35;
				if (konkal2Position_X <= 0)
				{
					if (ml == 0)
					{
						backchange++;
						printf("m ");
					}
					ml = 1;
					bc = 0;


				}

				if (characterPosition_Y < konkal2Position_Y)
				{

					if (abs(characterPosition_X - konkal2Position_X) <= 128 && abs(characterPosition_Y - konkal2Position_Y) <= 256)
					{
						if (bc == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							i = 1;
						}
						bc = 0;
					}
				}
				if (characterPosition_Y > konkal2Position_Y)
				{
					if (abs(characterPosition_X - konkal2Position_X) <= 128 && abs(characterPosition_Y - konkal2Position_Y) <= 50)
					{
						if (bc == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							i = 1;
						}
						bc = 0;
					}
				}
			}

		}
		if (j == 0)
		{
			if (obstacle4Position_Y >= 470)
			{
				ca = 1;
				konkal3Position_X -= 45;
				if (konkal3Position_X <= 0)
				{
					if (nl == 0)
					{

						backchange++;
						printf("m ");
					}
					nl = 1;
					ca = 0;

				}

				if (characterPosition_Y < konkal3Position_Y)
				{

					if (abs(characterPosition_X - konkal3Position_X) <= 128 && abs(characterPosition_Y - konkal3Position_Y) <= 256)
					{
						if (ca == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							j = 1;
						}
						ca = 0;
					}
				}
				if (characterPosition_Y > konkal3Position_Y)
				{
					if (abs(characterPosition_X - konkal3Position_X) <= 128 && abs(characterPosition_Y - konkal3Position_Y) <= 50)
					{
						if (ca == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							j = 1;
						}
						ca = 0;
					}
				}
			}

		}
		if (k == 0)
		{
			if (obstacle4Position_Y >= 510)
			{
				de = 1;
				konkal4Position_X -= 50;
				if (konkal4Position_X <= 0)
				{
					if (ln == 0)
					{
						backchange++;
						printf("m ");
					}
					ln = 1;
					de = 0;

				}

				if (characterPosition_Y < konkal4Position_Y)
				{

					if (abs(characterPosition_X - konkal4Position_X) <= 128 && abs(characterPosition_Y - konkal4Position_Y) <= 256)
					{
						if (de == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							k = 1;
						}
						de = 0;
					}
				}
				if (characterPosition_Y > konkal4Position_Y)
				{
					if (abs(characterPosition_X - konkal4Position_X) <= 128 && abs(characterPosition_Y - konkal4Position_Y) <= 50)
					{
						if (de == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							k = 1;
						}
						de = 0;
					}
				}
			}

		}
		if (q == 0)
		{
			if (obstacle4Position_Y <= 360)
			{
				ef = 1;
				konkal5Position_X -= 25;
				if (konkal5Position_X <= 0)
				{
					if (gf == 1)
					{
						backchange++;
						printf("m ");
					}
					gf = 1;
					ef = 0;

				}

				if (characterPosition_Y < konkal5Position_Y)
				{

					if (abs(characterPosition_X - konkal5Position_X) <= 128 && abs(characterPosition_Y - konkal5Position_Y) <= 256)
					{
						if (ef == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							q = 1;
						}
						ef = 0;
					}
				}
				if (characterPosition_Y > konkal5Position_Y)
				{
					if (abs(characterPosition_X - konkal5Position_X) <= 128 && abs(characterPosition_Y - konkal5Position_Y) <= 50)
					{
						if (ef == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							q = 1;
						}
						ef = 0;
					}
				}
			}

		}
		if (r == 0)
		{
			if (obstacle4Position_Y <= 320)
			{
				fg = 1;
				konkal6Position_X -= 25;
				if (konkal6Position_X <= 0)
				{
					if (bf == 0)
					{
						backchange++;
						printf("m ");
					}
					bf = 1;
					fg = 0;

				}

				if (characterPosition_Y < konkal6Position_Y)
				{

					if (abs(characterPosition_X - konkal6Position_X) <= 128 && abs(characterPosition_Y - konkal6Position_Y) <= 256)
					{
						if (fg == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							r = 1;
						}
						fg = 0;
					}
				}
				if (characterPosition_Y > konkal6Position_Y)
				{
					if (abs(characterPosition_X - konkal6Position_X) <= 128 && abs(characterPosition_Y - konkal6Position_Y) <= 50)
					{
						if (fg == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							r = 1;
						}
						fg = 0;
					}
				}
			}

		}
		if (s == 0)
		{
			if (obstacle4Position_Y <= 280)
			{
				gh = 1;
				konkal7Position_X -= 40;
				if (konkal7Position_X <= 0)
				{
					if (zx == 0)
					{
						backchange++;
						printf("m ");
					}
					zx = 1;
					gh = 0;

				}

				if (characterPosition_Y < konkal7Position_Y)
				{

					if (abs(characterPosition_X - konkal7Position_X) <= 128 && abs(characterPosition_Y - konkal7Position_Y) <= 256)
					{
						if (gh == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							s = 1;
						}
						gh = 0;
					}
				}
				if (characterPosition_Y > konkal7Position_Y)
				{
					if (abs(characterPosition_X - konkal7Position_X) <= 128 && abs(characterPosition_Y - konkal7Position_Y) <= 50)
					{
						if (gh == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							s = 1;
						}
						gh = 0;
					}
				}
			}

		}
		if (t == 0)
		{
			if (obstacle4Position_Y <= 230)
			{
				ij = 1;
				konkal8Position_X -= 40;
				if (konkal8Position_X <= 0)
				{
					if (xz == 0)
					{
						backchange++;
						printf("m ");
					}
					xz = 1;
					ij = 0;

				}

				if (characterPosition_Y < konkal8Position_Y)
				{

					if (abs(characterPosition_X - konkal8Position_X) <= 128 && abs(characterPosition_Y - konkal8Position_Y) <= 256)
					{
						if (ij == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							t = 1;
						}
						ij = 0;
					}
				}
				if (characterPosition_Y > konkal8Position_Y)
				{
					if (abs(characterPosition_X - konkal8Position_X) <= 128 && abs(characterPosition_Y - konkal8Position_Y) <= 50)
					{
						if (ij == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							t = 1;
						}
						ij = 0;
					}
				}
			}

		}
		if (w == 0)
		{
			if (obstacle4Position_Y <= 150)
			{
				jk = 1;
				konkal9Position_X -= 45;
				if (konkal9Position_X <= 0)
				{
					if (yz == 0)
					{
						backchange++;
						printf("m ");
					}
					yz = 1;
					jk = 0;

				}

				if (characterPosition_Y < konkal9Position_Y)
				{

					if (abs(characterPosition_X - konkal9Position_X) <= 128 && abs(characterPosition_Y - konkal9Position_Y) <= 256)
					{
						if (jk == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							w = 1;
						}
						jk = 0;
					}
				}
				if (characterPosition_Y > konkal9Position_Y)
				{
					if (abs(characterPosition_X - konkal9Position_X) <= 128 && abs(characterPosition_Y - konkal9Position_Y) <= 50)
					{
						if (jk == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							w = 1;
						}
						jk = 0;
					}
				}
			}

		}
		if (u == 0)
		{
			if (obstacle4Position_Y <= 80)
			{
				ki = 1;
				konkal10Position_X -= 45;
				if (konkal10Position_X <= 0)
				{
					if (zy == 0)
					{
						backchange++;
						printf("m ");

					}
					zy = 1;
					ki = 0;
				}

				if (characterPosition_Y < konkal10Position_Y)
				{

					if (abs(characterPosition_X - konkal10Position_X) <= 128 && abs(characterPosition_Y - konkal10Position_Y) <= 256)
					{
						if (ki == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							u = 1;
						}
						ki = 0;
					}
				}
				if (characterPosition_Y > konkal10Position_Y)
				{
					if (abs(characterPosition_X - konkal10Position_X) <= 128 && abs(characterPosition_Y - konkal10Position_Y) <= 50)
					{
						if (ki == 1)
						{
							g++;
							score = score - 20;
							printf("w");
							u = 1;
						}
						ki = 0;
					}
				}
			}

		}
		if (characterPosition_Y > obstacle4Position_Y)
		{
			if (abs(characterPosition_X - obstacle4Position_X) <= 128 && abs(characterPosition_Y - obstacle4Position_Y) <= 128)
			{
				if (alag == 0)
				{
					g++;
					score = score - 20;
					printf("w");
				}
				alag = 1;
			}
		}
		if (characterPosition_Y < obstacle4Position_Y)
		{
			if (abs(characterPosition_X - obstacle4Position_X) <= 128 && abs(characterPosition_Y - obstacle4Position_Y) <= 256)
			{
				if (alag == 0)
				{
					g++;
					score = score - 20;
					printf("w");
				}
				alag = 1;
			}
		}
		//coin er code shuru
		if (xa == 0)
		{
			if (coin6position_X>characterPosition_X && coin6position_Y>characterPosition_Y)
			{
				if (abs(characterPosition_X - coin6position_X) <= 128 && abs(characterPosition_Y - coin6position_Y) <= 256)
				{
					if (pqr == 0)
					{
						score += 50;
						xa = 1;
					}
					pqr = 1;
				}
			}
			if (coin6position_X>characterPosition_X && coin6position_Y<characterPosition_Y)
			{
				if (abs(characterPosition_X - coin6position_X) <= 128 && abs(characterPosition_Y - coin6position_Y) <= 40)
				{
					if (pqr == 0)
					{
						score += 50;
						xa = 1;
					}
					pqr = 1;
				}
			}
			if (coin6position_X<characterPosition_X && coin6position_Y>characterPosition_Y)
			{
				if (abs(characterPosition_X - coin6position_X) <= 50 && abs(characterPosition_Y - coin6position_Y) <= 260)
				{
					if (pqr == 0)
					{
						score += 50;
						xa = 1;
					}
					pqr = 1;
				}
			}
			if (coin6position_X<characterPosition_X && coin6position_Y<characterPosition_Y)
			{
				if (abs(characterPosition_X - coin6position_X) <= 50 && abs(characterPosition_Y - coin6position_Y) <= 40)
				{
					if (pqr == 0)
					{
						score += 50;
						xa = 1;
					}
					pqr = 1;
				}
			}



		}
		//coin er 1st code sesh
		if (xb == 0)
		{
			if (coin7position_X>characterPosition_X && coin7position_Y>characterPosition_Y)
			{
				if (abs(characterPosition_X - coin7position_X) <= 128 && abs(characterPosition_Y - coin7position_Y) <= 256)
				{
					if (stu == 0)
					{
						score += 50;
						xb = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					stu = 1;
				}
			}
			if (coin7position_X>characterPosition_X && coin7position_Y<characterPosition_Y)
			{
				if (abs(characterPosition_X - coin7position_X) <= 128 && abs(characterPosition_Y - coin7position_Y) <= 40)
				{
					if (stu == 0)
					{
						score += 50;
						xb = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					stu = 1;
				}
			}
			if (coin7position_X<characterPosition_X && coin7position_Y>characterPosition_Y)
			{
				if (abs(characterPosition_X - coin7position_X) <= 50 && abs(characterPosition_Y - coin7position_Y) <= 260)
				{
					if (stu == 0)
					{
						score += 50;
						xb = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					stu = 1;
				}
			}
			if (coin7position_X<characterPosition_X && coin7position_Y<characterPosition_Y)
			{
				if (abs(characterPosition_X - coin7position_X) <= 50 && abs(characterPosition_Y - coin7position_Y) <= 40)
				{
					if (stu == 0)
					{
						score += 50;
						xb = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					stu = 1;
				}
			}



		}
		if (xc == 0)
		{
			if (coin8position_X>characterPosition_X && coin8position_Y>characterPosition_Y)
			{
				if (abs(characterPosition_X - coin8position_X) <= 128 && abs(characterPosition_Y - coin8position_Y) <= 256)
				{
					if (vwx == 0)
					{
						score += 50;
						xc = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					vwx = 1;
				}
			}
			if (coin8position_X>characterPosition_X && coin8position_Y<characterPosition_Y)
			{
				if (abs(characterPosition_X - coin8position_X) <= 128 && abs(characterPosition_Y - coin8position_Y) <= 40)
				{
					if (vwx == 0)
					{
						score += 50;
						xc = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					vwx = 1;
				}
			}
			if (coin8position_X<characterPosition_X && coin8position_Y>characterPosition_Y)
			{
				if (abs(characterPosition_X - coin8position_X) <= 50 && abs(characterPosition_Y - coin8position_Y) <= 260)
				{
					if (vwx == 0)
					{
						score += 50;
						xc = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					vwx = 1;
				}
			}
			if (coin8position_X<characterPosition_X && coin8position_Y<characterPosition_Y)
			{
				if (abs(characterPosition_X - coin8position_X) <= 50 && abs(characterPosition_Y - coin8position_Y) <= 40)
				{
					if (vwx == 0)
					{
						score += 50;
						xc = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					vwx = 1;
				}
			}



		}
		if (xd == 0)
		{
			if (coin9position_X>characterPosition_X && coin9position_Y>characterPosition_Y)
			{
				if (abs(characterPosition_X - coin9position_X) <= 128 && abs(characterPosition_Y - coin9position_Y) <= 256)
				{
					if (rqp == 0)
					{
						score += 50;
						xd = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					rqp = 1;
				}
			}
			if (coin9position_X>characterPosition_X && coin9position_Y<characterPosition_Y)
			{
				if (abs(characterPosition_X - coin9position_X) <= 128 && abs(characterPosition_Y - coin9position_Y) <= 40)
				{
					if (rqp == 0)
					{
						score += 50;
						xd = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					rqp = 1;
				}
			}
			if (coin9position_X<characterPosition_X && coin9position_Y>characterPosition_Y)
			{
				if (abs(characterPosition_X - coin9position_X) <= 50 && abs(characterPosition_Y - coin9position_Y) <= 260)
				{
					if (rqp == 0)
					{
						score += 50;
						xd = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					rqp = 1;
				}
			}
			if (coin9position_X<characterPosition_X && coin9position_Y<characterPosition_Y)
			{
				if (abs(characterPosition_X - coin9position_X) <= 50 && abs(characterPosition_Y - coin9position_Y) <= 40)
				{
					if (rqp == 0)
					{
						score += 50;
						xd = 1;
						//printf("crash");
						printf("The score is %d", score);
					}
					rqp = 1;
				}
			}



		}
		if (g == 3)
		{
			score = score + (1000 - fullTime);
		}


		if ((backchange == 8 && g == 2) || (backchange == 9 && g <= 2) || (backchange == 10 && g <= 2))
		{
			score = score + 300;
			mopa = 1;
			characterPosition_X = 10;
			characterPosition_Y = 10;
			e = 2;
			g = 0;

		}



	}
}
//first level er second phase er  timer sesh

//second level er timer shuru
void levelTwo()
{
	if (mopa == 1 && kopa >= 15)
	{
		if (v == 1)
		{
			villain2Position_Y += 5;
			if (villain2Position_Y >= 590)
			{
				v = 0;
			}
		}
		if (v == 0)
		{
			villain2Position_Y -= 5;
			if (villain2Position_Y <= 0)
			{
				v = 1;
			}
		}
		//furti shuru 
		if (ap == 0)
		{
			if (villain2Position_Y > 50)
			{
				aq = 1;
				rat1position_X -= 15;
				if (rat1position_X <= 0)
				{
					if (as == 0)
					{
						killNumber++;
					}
					as = 1;
					aq = 0;
				}

			}
			if (character2Position_Y < rat1position_Y)
			{
				if (abs(character2Position_X - rat1position_X) <= 128 && abs(character2Position_Y - rat1position_Y) <= 256)
				{
					if (aq == 1)
					{
						g++;
						score = score - 20;
						ap = 1;
						printf("\nk");
					}
					aq = 0;
				}
			}
			if (character2Position_Y > rat1position_Y)
			{

				if (abs(character2Position_X - rat1position_X) <= 128 && abs(character2Position_Y - rat1position_Y) <= 50)
				{
					if (aq == 1)
					{

						g++;
						score = score - 20;
						ap = 1;
						printf("\nk");
					}
					aq = 0;
				}

			}
		}
		//furti sesh
		if (bp == 0)
		{
			if (villain2Position_Y > 250)
			{
				bq = 1;
				rat2position_X -= 20;
				if (rat2position_X <= 0)
				{
					if (bs == 0)
					{
						killNumber++;
					}
					bs = 1;
					bq = 0;
				}

			}
			if (character2Position_Y < rat2position_Y)
			{
				if (abs(character2Position_X - rat2position_X) <= 128 && abs(character2Position_Y - rat2position_Y) <= 256)
				{
					if (bq == 1)
					{
						g++;
						score = score - 20;
						bp = 1;
						printf("\nk");
					}
					bq = 0;
				}
			}
			if (character2Position_Y > rat2position_Y)
			{

				if (abs(character2Position_X - rat2position_X) <= 128 && abs(character2Position_Y - rat2position_Y) <= 50)
				{
					if (bq == 1)
					{
						g++;
						score = score - 20;
						bp = 1;
						printf("\nk");
					}
					bq = 0;
				}

			}
		}
		if (cp == 0)
		{
			if (villain2Position_Y > 500)
			{
				cq = 1;
				rat3position_X -= 30;
				if (rat1position_X <= 0)
				{
					if (cs == 0)
					{
						killNumber++;
					}
					cs = 1;
					cq = 0;
				}

			}
			if (character2Position_Y < rat3position_Y)
			{
				if (abs(character2Position_X - rat3position_X) <= 128 && abs(character2Position_Y - rat3position_Y) <= 256)
				{
					if (cq == 1)
					{
						g++;
						score = score - 20;
						cp = 1;
						printf("\nk");
					}
					cq = 0;
				}
			}
			if (character2Position_Y > rat3position_Y)
			{

				if (abs(character2Position_X - rat3position_X) <= 128 && abs(character2Position_Y - rat3position_Y) <= 50)
				{
					if (cq == 1)
					{
						g++;
						score = score - 20;
						cp = 1;
						printf("\nk");
					}
					cq = 0;
				}

			}
		}
		if (dp == 0)
		{
			if (villain2Position_Y < 550)
			{
				dq = 1;
				rat4position_X -= 25;
				if (rat4position_X <= 0)
				{
					if (ds == 0)
					{
						killNumber++;
					}
					ds = 1;
					dq = 0;
				}

			}
			if (character2Position_Y < rat4position_Y)
			{
				if (abs(character2Position_X - rat4position_X) <= 128 && abs(character2Position_Y - rat4position_Y) <= 256)
				{
					if (dq == 1)
					{
						g++;
						score = score - 20;
						dp = 1;
						printf("\nk");
					}
					dq = 0;
				}
			}
			if (character2Position_Y > rat4position_Y)
			{

				if (abs(character2Position_X - rat4position_X) <= 128 && abs(character2Position_Y - rat4position_Y) <= 50)
				{
					if (dq == 1)
					{
						g++;
						dp = 1;
						printf("\nk");
					}
					dq = 0;
				}

			}
		}
		if (ep == 0)
		{
			if (villain2Position_Y < 200)
			{
				eq = 1;
				rat5position_X -= 25;
				if (rat5position_X <= 0)
				{
					if (es == 0)
					{
						killNumber++;
					}
					es = 1;
					eq = 0;
				}

			}
			if (character2Position_Y < rat5position_Y)
			{
				if (abs(character2Position_X - rat5position_X) <= 128 && abs(character2Position_Y - rat5position_Y) <= 256)
				{
					if (eq == 1)
					{
						g++;
						score = score - 20;
						ep = 1;
						printf("\nk");
					}
					eq = 0;
				}
			}
			if (character2Position_Y > rat5position_Y)
			{

				if (abs(character2Position_X - rat5position_X) <= 128 && abs(character2Position_Y - rat5position_Y) <= 50)
				{
					if (eq == 1)
					{
						g++;
						score = score - 20;
						ep = 1;
						printf("\nk");
					}
					eq = 0;
				}

			}
		}
		if (bulletPosition_Y < villain2Position_Y)
		{
			if (abs(bulletPosition_X - villain2Position_X) <= 60 && abs(bulletPosition_Y - villain2Position_Y) <= 15)
			{
				if (klag == 1)
				{
					killvill++;
					score = score + 100;
					klag = 0;
					bulletPosition_X = character2Position_X + 128;
					bulletPosition_Y = character2Position_Y + 223;

				}
				//klag = 0;
			}
		}
		if (bulletPosition_Y > villain2Position_Y)
		{
			if (abs(bulletPosition_X - villain2Position_X) <= 60 && abs(bulletPosition_Y - villain2Position_Y) <= 128)
			{
				if (klag == 1)
				{
					killvill++;
					score = score + 100;
					klag = 0;
					bulletPosition_X = character2Position_X + 128;
					bulletPosition_Y = character2Position_Y + 223;

				}
				//klag = 0;
			}
		}
		if (killvill == 10)
		{
			score = score + 700;
			mopa = 2;
			nopa = 1;
			g = 0;
			character2Position_X = 0;
			character2Position_Y = 0;
			printf("\nValue of killvill is %d", killvill);
		}

		//shob furti sesh
		if (g == 3)
		{
			score = score + (1000 - fullTime);
		}
	}





}
//second level er timer sesh

//Third Level er timer shuru
void levelThreeFirst()
{
	if (nopa == 1 && messi >= 11)
	{
		if (tx == 0)
		{
			BossPosition_Y += 20;
			if (BossPosition_Y >= 466)
			{
				tx = 1;
			}

		}
		if (tx == 1)
		{
			BossPosition_Y -= 20;
			if (BossPosition_Y <= 0)
			{
				tx = 0;
			}
		}

		if (ak == 0)
		{
			ballx1 -= 20;
			if (ballx1 <= 0)
			{
				ballx1 = 1150;
			}

		}
		if (bk == 0)
		{
			ballx2 -= 25;
			if (ballx2 <= 0)
			{
				ballx2 = 1150;
			}

		}
		if (ck == 0)
		{
			ballx3 -= 15;
			if (ballx3 <= 0)
			{
				ballx3 = 1150;
			}

		}
		if (dk == 0)
		{
			ballx4 -= 10;
			if (ballx4 <= 0)
			{
				ballx4 = 1150;
			}

		}
		if (ek == 0)
		{
			ballx5 -= 15;
			if (ballx5 <= 0)
			{
				ballx5 = 1150;
			}

		}



		if (ak == 0)
		{
			if (character2Position_Y < bally1)
			{
				if (abs(character2Position_X - ballx1) <= 128 && abs(character2Position_Y - bally1) <= 256)
				{
					g++;
					score = score - 20;
					ak = 1;
				}
			}
			if (character2Position_Y > bally1)
			{
				if (abs(character2Position_X - ballx1) <= 128 && abs(character2Position_Y - bally1) <= 50)
				{
					g++;
					score = score - 20;
					ak = 1;
				}
			}
		}
		//furti start

		if (bk == 0)
		{
			if (character2Position_Y < bally2)
			{
				if (abs(character2Position_X - ballx2) <= 128 && abs(character2Position_Y - bally2) <= 256)
				{
					g++;
					score = score - 20;
					bk = 1;
				}
			}
			if (character2Position_Y > bally2)
			{
				if (abs(character2Position_X - ballx2) <= 128 && abs(character2Position_Y - bally2) <= 50)
				{
					g++;
					score = score - 20;
					bk = 1;
				}
			}
		}
		//furti sesh
		if (ck == 0)
		{
			if (character2Position_Y < bally3)
			{
				if (abs(character2Position_X - ballx3) <= 128 && abs(character2Position_Y - bally3) <= 256)
				{
					g++;
					score = score - 20;
					ck = 1;
				}
			}
			if (character2Position_Y > bally3)
			{
				if (abs(character2Position_X - ballx3) <= 128 && abs(character2Position_Y - bally3) <= 50)
				{
					g++;
					score = score - 20;
					ck = 1;
				}
			}
		}
		if (dk == 0)
		{
			if (character2Position_Y < bally4)
			{
				if (abs(character2Position_X - ballx4) <= 128 && abs(character2Position_Y - bally4) <= 256)
				{
					g++;
					score = score - 20;
					dk = 1;
				}
			}
			if (character2Position_Y > bally4)
			{
				if (abs(character2Position_X - ballx4) <= 128 && abs(character2Position_Y - bally4) <= 50)
				{
					g++;
					score = score - 20;
					dk = 1;
				}
			}
		}
		if (ek == 0)
		{
			if (character2Position_Y < bally5)
			{
				if (abs(character2Position_X - ballx5) <= 128 && abs(character2Position_Y - bally5) <= 256)
				{
					g++;
					score = score - 20;
					ek = 1;
				}
			}
			if (character2Position_Y > bally5)
			{
				if (abs(character2Position_X - ballx5) <= 128 && abs(character2Position_Y - bally5) <= 50)
				{
					g++;
					score = score - 20;
					ek = 1;
				}
			}
		}
		//notun khela shuru
		if (av == 0)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					bv = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					bv = 1;
				}
			}
		}
		//notun khela sesh
		if (bv == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					cv = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					cv = 1;
				}
			}
		}
		if (cv == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					dv = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					dv = 1;
				}
			}
		}
		if (dv == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					ev = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					ev = 1;
				}
			}
		}
		if (ev == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					fv = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					fv = 1;
				}
			}
		}
		if (fv == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					gv = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					gv = 1;
				}
			}
		}
		if (gv == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					hv = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					hv = 1;
				}
			}
		}
		if (hv == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					iv = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					iv = 1;
				}
			}
		}
		if (iv == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					jv = 1;
				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;
					jv = 1;
				}
			}
		}
		if (jv == 1)
		{
			if (bulletPosition_Y < BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 15)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;

				}
			}
			if (bulletPosition_Y > BossPosition_Y)
			{
				if (abs(bulletPosition_X - BossPosition_X) <= 60 && abs(bulletPosition_Y - BossPosition_Y) <= 256)
				{
					if (klag == 1)
					{
						killBoss++;
						score = score + 200;
						klag = 0;
						bulletPosition_X = character2Position_X + 128;
						bulletPosition_Y = character2Position_Y + 223;
					}
					//klag = 0;

				}
			}
		}
		if (g == 3)
		{
			score = score + (1000 - fullTime);
		}


		if (killBoss == 10)
		{
			score = score + 1500;
			score = score + (1000 - fullTime);
			khotom = 1;
			nopa = 2;

		}
	}
	if (khotom == 1 && lastTimer >= 8)
	{
		menu = 1;
		mode = 1;
	}

}
//Third level er timer sesh

//Bullet er Timer shuru
void bulletMovement()
{
	if (klag == 1)
	{

		bulletPosition_X += 30;
		if (bulletPosition_X >= 1295)
		{
			klag = 0;
			bulletPosition_X = character2Position_X + 128;
			bulletPosition_Y = character2Position_Y + 223;
		}

	}

}




void iMouseMove(int mx, int my)
{

}




void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx >= 50 && mx <= 300 && my >= 250 && my <= 280 && mode == 0)
		{
			mode = 1;
			printf("%d\n", menu);
		}


	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{

	}
}


void iPassiveMouseMove(int mx, int my)
{
	//place your code here

	//mposx = mx;
	//mposy = my;
	if (mx == 2){}        /*Something to do with mx*/
	else if (my == 2){}   /*Something to do with my*/

}


void iKeyboard(unsigned char key)
{

	if (mode == 1)
	{
		if (key == '\r')
		{

			mode = 0;
			strcpy_s(khela2, khela);
			printf("%s\n", khela2);
			for (i = 0; i < len; i++)

				khela[i] = 0;
			len = 0;
			updatehighscore();
		}
		else
		{
			khela[len] = key;
			len++;
		}
	}
	/*if (resume == 1)
	{


	if (key == 'r')
	{
	a=25;
	}
	}*/
	if (key == 'a')
	{
		upjump = 1;
	}
	if (key == 'c')
	{
		a = 16;
	}
	if (key == 'p')
	{
		a = 25;
	}
	if (key == 'h')
	{
		b = 1;
	}
	if (key == 'm')
	{
		b = 2;
	}
	if (key == 'p')
	{
		a = 25;
		b = 0;
	}
	if (key == 'x')
	{
		hc = 1;
	}
	if (key == 'y')
	{
		a = 25;
		hc = 0;
	}
	if (key == 's')
	{
		c = 1;
	}
	if (key == ' ')
	{
		klag = 1;
	}

}



void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	if (key == GLUT_KEY_UP)
	{
		characterPosition_Y += 10;

		if (characterPosition_Y > 510)
		{
			characterPosition_Y = 510;
		}
		if (mopa == 1)
		{
			character2Position_Y += 10;
			if (klag == 0)
			{
				bulletPosition_Y = (character2Position_Y + 223);
			}
			if (character2Position_Y > 510)
			{
				character2Position_Y = 510;
			}
		}
		if (nopa == 1)
		{
			character2Position_Y += 10;
			if (klag == 0)
			{
				bulletPosition_Y = (character2Position_Y + 223);
			}
			if (character2Position_Y > 510)
			{
				character2Position_Y = 510;
			}
		}
	}
	if (key == GLUT_KEY_DOWN)
	{
		characterPosition_Y -= 10;

		if (characterPosition_Y < 0)
		{
			characterPosition_Y = 0;
		}
		if (mopa == 1)
		{
			character2Position_Y -= 10;
			if (klag == 0)
			{
				bulletPosition_Y = (character2Position_Y + 223);
			}
			if (character2Position_Y < 0)
			{
				character2Position_Y = 0;
			}
		}
		if (nopa == 1)
		{
			character2Position_Y -= 10;
			if (klag == 0)
			{
				bulletPosition_Y = (character2Position_Y + 223);
			}
			if (character2Position_Y < 0)
			{
				character2Position_Y = 0;
			}
		}
	}
	if (key == GLUT_KEY_LEFT)
	{
		characterPosition_X -= 10;

		if (characterPosition_X <= 0)
		{
			characterPosition_X = 0;
		}
		if (mopa == 1)
		{

			bulletPosition_Y = (character2Position_Y + 223);
			if (character2Position_X <= 0)
			{
				character2Position_X = 0;
			}
		}

		if (nopa == 1)
		{

			bulletPosition_Y = (character2Position_Y + 223);
			if (character2Position_X <= 0)
			{
				character2Position_X = 0;
			}
		}

	}

	if (key == GLUT_KEY_RIGHT)
	{
		characterPosition_X += 10;

		if (characterPosition_X >= 1232 && e == 1)
		{
			characterPosition_X = 0;
		}
		if (mopa == 1)
		{

			bulletPosition_Y = (character2Position_Y + 223);
		}
		if (nopa == 1)
		{

			bulletPosition_Y = (character2Position_Y + 223);
		}

	}

}

int main()
{
	len = 0;
	mode = 0;
	khela[0] = 0;
	iSetTimer(35, beginning);
	iSetTimer(1000, imageMovement);
	iSetTimer(10, jump);
	iSetTimer(15, obstacleMovement);
	iSetTimer(15, obstacle4Movement);
	iSetTimer(15, levelTwo);
	iSetTimer(15, levelThreeFirst);
	iSetTimer(25, bulletMovement);
	PlaySound("music\\Game Music", NULL, SND_LOOP | SND_ASYNC);
	iInitialize(1360, 800, "Death Valley");
	return 0;
}