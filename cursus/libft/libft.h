// can contain macros and typedefs if needed

#include <string.h>
#include <stdlib.h>
typedef enum e_bool {
	FALSE, TRUE
} t_bool ;
size_t	ft_strlen(const char *s);
void 	*ft_memset(void *s, int c, size_t n);
char	*ft_strcpy(char *dst, const char *src);
void	ft_memdel(void **ap);
char	*ft_strncpy(char *dst, const char *src, size_t dsize);
int		ft_issign(int c);
int		ft_isspace(int c);
int		ft_isdigit(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
