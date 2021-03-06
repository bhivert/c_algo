/*
* stack.c is part of a project.
* Copyright (C) 2018 Benoit Hivert <hivert.benoit@gmail.com>
*
* This project is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This project is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this project. If not, see <http://www.gnu.org/licenses/>
*
* Created on 2018/03/06 at 23:59:18 by Benoit Hivert <hivert.benoit@gmail.com>
* Updated on 2018/03/08 at 23:24:03 by Benoit Hivert <hivert.benoit@gmail.com>
*/

#include "fifo.h"

// fifo utils

inline void	fifo_clear(fifo_t *fifo) {
	dlist_clear((dlist_t *)fifo);
}

inline size_t	fifo_size(fifo_t *fifo) {
	return dlist_size((dlist_t *)fifo);
}

// fifo handling

inline bnode_t	*fifo_pop(fifo_t *fifo) {
	return dlist_popBack((dlist_t *)fifo);
}

inline void	fifo_push(fifo_t *fifo, bnode_t *bnode) {
	dlist_pushFront((dlist_t *)fifo, bnode);
}

// fifo iterators

inline bnode_t	*fifo_begin(fifo_t *fifo) {
	return dlist_begin((dlist_t *)fifo);
}

inline bnode_t	*fifo_end(fifo_t *fifo) {
	return dlist_end(fifo);
}

inline bnode_t	*fifo_prev(bnode_t *bnode) {
	return dlist_prev(bnode);
}

inline bnode_t	*fifo_next(bnode_t *bnode) {
	return dlist_next(bnode);
}

inline void	fifo_iter(fifo_t *fifo, void (fct)(bnode_t *)) {
	dlist_iter((dlist_t *)fifo, fct);
}
