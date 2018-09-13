// get maximum of two integers
int max(int a, int b)
{
    return (a > b) ? a : b;
}
 
// The preprocessing function for Boyer Moore's bad character rule
void badCharRule(char *str, int size, int badchar[num])
{
    int i;
 
    // Initialize all occurrences as -1
    for (i = 0; i < num; i++)
        badchar[i] = -1;
 
    // Fill the actual value of last occurrence of a character
    for (i = 0; i < size; i++)
        badchar[(int) str[i]] = i;
}
 
void search(char *txt, char *pad)
{
    int m = strlen(pad);
    int n = strlen(txt);
 
    int badchar[num];
 
    badCharRule(pad, m, badchar);
 
    int s = 0; // s is shift of the pattern with respect to text
    while (s <= (n - m))
    {
        int j = m - 1;
 
        while (j >= 0 && pad[j] == txt[s + j])
            j--;
 
        if (j < 0)
        {
        
            s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
 
        }
 
        else
            s += max(1, j - badchar[txt[s + j]]);
    }
}
