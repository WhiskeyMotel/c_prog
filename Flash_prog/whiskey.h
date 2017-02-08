int prog_install();
int prog_boot();
int log_boot();
int log_restart();
int log_end();
int log_write();
typedef struct node node_t;
typedef struct node* node_ptr_t;

struct node{
	void *data;
	struct node *next;
};

