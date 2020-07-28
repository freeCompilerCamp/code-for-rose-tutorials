int main()
{
    double n, start=1, total;
    double unlucky=0, lucky;
    double *number;

    scanf("%lf",&n);
    total = 9;
    for(int j =1; j < n; j++)
    {
      total = total * 10;
      start = start *10;
    }

    number = (double*)malloc(n * sizeof(double));
    for(double i = start; i < start*10; i++)
    {
      double temp = i;
#pragma rose_outline
      for(int j = 1; j<= n; j++)
      {
	number[j]=(int)temp%10;
	temp = temp/10;
      }
      for(int k = n; k>=1; k--)
      {
	if(number[k] == 1 && number[k-1] == 3){
	  unlucky++;
	  break;
	}
      }
    }
    lucky = total - unlucky;
    printf("there are %f lucky integers in %f digits integers", lucky, n);
    return 0;
}
