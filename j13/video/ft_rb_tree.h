enum	e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef	struct		s_rb_node
{
	struct s_btree	*parent;
	struct s_btree	*right;
	struct s_btree	*left;
	void			*data;
	enum e_rb_color	color;
}					t_rb_node;