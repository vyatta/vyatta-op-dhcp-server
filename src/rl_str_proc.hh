/*
 * Module: rl_str_proc.hh
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License version 2 as published by the 
 * Free Software Foundation.
 */

#ifndef __RL_STR_PROC_HH__
#define __RL_STR_PROC_HH__

#include <vector>
#include <string>

class StrProc
{
public:
  StrProc(const std::string &in, const std::string &token);

  std::string get(int i);

  std::string get(int start, int end);

  std::vector<std::string> get();

  int size() {return _str_coll.size();}

private:
  std::vector<std::string> _str_coll;
};

#endif //__RL_STR_PROC_HH__
