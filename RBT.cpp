// C++ code
void RBT::RightRotation(TreeNode *y){

    TreeNode *x = y->leftchild;           // 把x設成y的leftchild

    y->leftchild = x->rightchild;         // 把x的rightchild放到y的leftchild    
    if (x->rightchild != neel){           // 若x的rightchild不為NIL, 將其parent指向y
        x->rightchild->parent = y;
    }
    x->parent = y->parent;                // 將x的parent指向原先y的parent
                                          // 以下一組if-else將修改原先y的parent之child
    if (y->parent == neel){               // 若y原先是root, x將成為新的root
        root = x;          
    }              
    else if (y == y->parent->leftchild){  // 若原先y是其parent之leftchild, 
        y->parent->leftchild = x;         // x就成為其新的parent之leftchild
    }
    else{                                 // 若原先y是其parent之rightchild, 
        y->parent->rightchild = x;        // x就成為其新的parent之rightchild
    }
    x->rightchild = y;                    // 將y設為x之rightchild
    y->parent = x;                        // 將x設為y之parent
}