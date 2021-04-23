class NODE{
      int data;
      NODE* next;
public:
        NODE(int);
        void show_node();
        void insert(NODE*&);
        void setNext(NODE*)
        NODE* move_next();
        ~NODE();
      };
