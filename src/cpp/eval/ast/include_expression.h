/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EVAL_AST_INCLUDE_EXPRESSION_H__
#define __EVAL_AST_INCLUDE_EXPRESSION_H__

#include <cpp/eval/ast/expression.h>

namespace HPHP {
namespace Eval {
///////////////////////////////////////////////////////////////////////////////

DECLARE_AST_PTR(IncludeExpression);

class IncludeExpression : public Expression {
public:
  IncludeExpression(EXPRESSION_ARGS, bool include, bool once,
                    ExpressionPtr file);
  virtual Variant eval(VariableEnvironment &env) const;
  virtual void dump() const;
  bool include() const { return m_include; }
  bool once() const { return m_once; }
private:
  ExpressionPtr m_file;
  bool m_include;
  bool m_once;
  std::string m_localDir;
};

///////////////////////////////////////////////////////////////////////////////
}
}

#endif /* __EVAL_AST_INCLUDE_EXPRESSION_H__ */
