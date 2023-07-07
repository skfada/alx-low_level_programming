/**
* Return: returns a long unsigned int
* hash_djb2 - a hash function that uses the djb2 algorithm
* @str: a key
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	int count;
	unsigned long int hash;

	hash = 5381;
	while ((count = *str++))
	{
		hash = ((hash << 5) + hash) + count;
	}
	return (hash);
}
