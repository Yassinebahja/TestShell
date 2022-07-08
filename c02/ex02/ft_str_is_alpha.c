int ft_str_is_alpha(char *str)
{
  int i;
  i = -1;
  if (!(str[0])) return 0; //c'est l'expression d'une chaine vide
	while(str[++i]) {
    if ((str[i]>= 65 && str[i] <= 90) || (str[i]>= 97 && str[i] <= 122))
      continue;
    else return 0;
  }
  return 1;
}