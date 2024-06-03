void InsertionSort(int a [], int N)
{int pos,i ;
  int x;// luu giá tri a [i] tránh bi ghi de khi doi cho các phan tu
  for( int i=1 ; i<N ; i++) // doan a[0] da xep
  {
  	x= a[i]; pos = i-1;
  	//tim vi tri
  	while (pos >= 0 && a[pos] > x ){
  	//ket hop doi cho cac phan tu se dung sau x trong dãy moi
  	a[pos+1] = a[pos];
  	pos--;
  	}
  	a[pos + 1] = x ;// chen x vao day
  	  }
  	}
    