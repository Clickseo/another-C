// input.c
void  INPUT(SCORE *pArr, int num)	// error: "SCORE"이(가) 정의되어 있지 않습니다.
{
	for (int i = 0; i < stuMAXSIZE; i++, pArr++)	{	// error: "stuMAXSIZE"이(가) 정의되어 있지 않습니다.
		printf("\n %d 번째 학생 성적 입력... \n", i + 1);
		printf("학생 이름 : ");	gets_s(pArr->name, sizeof(pArr->name));
		printf("국어 점수 : ");	scanf_s("%d", &pArr->kor);
		printf("영어 점수 : ");	scanf_s("%d", &pArr->eng);
		printf("수학 점수 : ");	scanf_s("%d%*c", &pArr->math);
		// fflush(stdin);

		pArr->tot = pArr->kor + pArr->eng + pArr->math;
		pArr->ave = (float)pArr->tot / 3;
	}

	return;
}
