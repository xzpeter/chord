#ifndef _NODE_H
#define _NODE_H

#include "chord_types.h"

Node* node_init(int id);
Node* find_successor(int key);
Node* find_predecessor(int key);
void node_create(Node *node);
void node_join(Node *node);
void node_stabilise(Node *node);
void node_notify(Node *node);
void node_fix_fingers(Node *node);
void node_check_predecessor(Node *node);

#endif
