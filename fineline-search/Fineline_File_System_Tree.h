
/*  Copyright 2014 Derek Chadwick

    This file is part of the FineLine Computer Forensics Timeline Tools.

    FineLine is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    FineLine is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FineLine.  If not, see <http://www.gnu.org/licenses/>.
*/


/*
   Fineline_File_System_Tree.h

   Title : FineLine Computer Forensics Image Search file browser tree
   Author: Derek Chadwick
   Date  : 05/05/2014

   Purpose: Displays a file system in a tree widget.

   Notes: EXPERIMENTAL

*/


#ifndef FINELINE_FILE_SYSTEM_TREE_H
#define FINELINE_FILE_SYSTEM_TREE_H

#include <string>
#include <vector>

#include <FL/Fl.H>
#include <FL/Fl_Tree.H>

#include "fineline-search.h"

using namespace std;

class Fineline_File_System_Tree : Fl_Tree
{
   public:
      Fineline_File_System_Tree();
      virtual ~Fineline_File_System_Tree();

      static void file_system_tree_callback(Fl_Tree *flt, void *vp);

      int add_file(string filename, fl_file_record_t *flrp);

   protected:
   private:

      static map<string, fl_file_record_t> file_map;

};

#endif // FINELINE_FILE_SYSTEM_TREE_H