unsigned char reverse_bits(unsigned char b)
{
	int len_bytes = 8;
	unsigned char r = 0;

	while(len_bytes--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}
